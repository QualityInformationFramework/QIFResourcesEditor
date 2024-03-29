///////////////////////////////////////////////////////////////////////////////
///
/// Copyright 2018-2020, Capvidia, Metrosage, and project contributors
/// https://www.capvidia.com/
/// 
/// This software is provided for free use to the QIF Community under the 
/// following license:
/// 
/// Boost Software License - Version 1.0 - August 17th, 2003
/// https://www.boost.org/LICENSE_1_0.txt
/// 
/// Permission is hereby granted, free of charge, to any person or organization
/// obtaining a copy of the software and accompanying documentation covered by
/// this license (the "Software") to use, reproduce, display, distribute,
/// execute, and transmit the Software, and to prepare derivative works of the
/// Software, and to permit third-parties to whom the Software is furnished to
/// do so, all subject to the following:
/// 
/// The copyright notices in the Software and this entire statement, including
/// the above license grant, this restriction and the following disclaimer,
/// must be included in all copies of the Software, in whole or in part, and
/// all derivative works of the Software, unless such copies or derivative
/// works are solely in the form of machine-executable object code generated by
/// a source language processor.
/// 
/// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
/// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
/// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
/// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
/// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
/// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
/// DEALINGS IN THE SOFTWARE.

#pragma once

#include "Altova.h"
#include <vector>
#include <string>
#include <tchar.h>

namespace altova
{
	struct MemberInfo;
	struct TypeInfo;
	struct NamespaceInfo;
	struct FacetInfo;

	class FacetCheck;

	// base class which is implemented in proper library.
	class ValueFormatter
	{
	};

	struct Binder
	{
		const NamespaceInfo* Namespaces;
		const TypeInfo* Types;
		const MemberInfo* Members;
		const FacetInfo* Facets;
	};


	struct NamespaceInfo
	{
		const ::altova::Binder* Binder;
		const char_type* NamespaceURI;
		const char_type* Prefix;
		//const TypeInfo* TypeBegin;
		//const TypeInfo* TypeEnd;
		unsigned TypeBegin;
		unsigned TypeEnd;
	};

	enum WhitespaceType
	{
		Whitespace_Unknown,
		Whitespace_Preserve,
		Whitespace_Replace,
		Whitespace_Collapse,
	};

	struct TypeInfo
	{
		const ::altova::Binder* Binder;
		unsigned Namespace;
		//const NamespaceInfo* Namespace;
		const char_type* LocalName;
		unsigned BaseType;
		//const TypeInfo* BaseType;
		unsigned MemberBegin;
		unsigned MemberEnd;
		//const MemberInfo* MemberBegin;	
		//const MemberInfo* MemberEnd;
		//const FacetInfo* Facets;	
		unsigned Facets;
		WhitespaceType Whitespace;
		ValueFormatter* const * Formatter;
	};

	struct MemberInfo
	{
		const ::altova::Binder* Binder;
		const char_type*	NamespaceURI;
		const char_type* LocalName;
		unsigned ContainingType;
		unsigned DataType;
		unsigned Flags;
		unsigned MinOccurs;
		unsigned MaxOccurs;
		//const TypeInfo* ContainingType;
		//const TypeInfo* DataType;
	};


	enum MemberFlags
	{
		MemberFlags_None = 0,
		MemberFlags_SpecialName = 1 << 0,
		MemberFlags_IsAttribute = 1 << 1,
	};


	struct FacetInfo
	{
		const FacetCheck* Check;
		const char_type* FacetName;
		const char_type* StringValue;
		unsigned    IntValue;
	};


	enum FacetCheckResult
	{
		FacetCheckResult_Fail,
		FacetCheckResult_Success,
		FacetCheckResult_EnumFail,
		FacetCheckResult_EnumSuccess,
	};

	class FacetCheck
	{
	public:
		virtual FacetCheckResult Check(const string_type& value, const FacetInfo* facet, WhitespaceType whitespaceNormalization) const = 0;
	};


	template <typename T>
		T* GetTableEntry(T* table, unsigned index)
	{
		if ( index == ~0 )
			return 0;
		return table + index;
	}


namespace meta
{
	class SimpleType
	{
		const TypeInfo* typeInfo;
	public:
		SimpleType(const TypeInfo* typeInfo) : typeInfo(typeInfo) {}
		operator bool() const { return typeInfo != 0; }
		bool operator!() const { return typeInfo == 0; }

		SimpleType GetBaseType() const { return GetTableEntry(typeInfo->Binder->Types, typeInfo->BaseType); }
		string_type GetLocalName() const { return typeInfo->LocalName; }
		string_type GetNamespaceURI() const { return GetTableEntry(typeInfo->Binder->Namespaces, typeInfo->Namespace)->NamespaceURI; }

		unsigned GetMinLength() const { return GetFacetFallback(_T("minLength"), _T("length"), 0); }
		unsigned GetMaxLength() const { return GetFacetFallback(_T("maxLength"), _T("length"), ~0); }
		unsigned GetLength() const { return GetFacetFallback(_T("length"), 0, ~0); }
		unsigned GetTotalDigits() const { return GetFacetFallback(_T("totalDigits"), 0, ~0); }
		unsigned GetFractionDigits() const { return GetFacetFallback(_T("fractionDigits"), 0, ~0); }
		string_type GetMinInclusive() const { const char_type* f = GetFacet(_T("minInclusive")); return f ? f : _T(""); }
		string_type GetMinExclusive() const { const char_type* f = GetFacet(_T("minExclusive")); return f ? f : _T(""); }
		string_type GetMaxInclusive() const { const char_type* f = GetFacet(_T("maxInclusive")); return f ? f : _T(""); }
		string_type GetMaxExclusive() const { const char_type* f = GetFacet(_T("maxExclusive")); return f ? f : _T(""); }

		std::vector<string_type> GetEnumerations() const { return CollectFacets(_T("enumeration")); }
		std::vector<string_type> GetPatterns() const { return CollectFacets(_T("pattern")); }

		WhitespaceType GetWhitespace() const { return typeInfo->Whitespace; }

	private:
		std::vector<string_type> CollectFacets(const char_type* name) const
		{
			std::vector<string_type> result;
			if (typeInfo->Facets == ~0)
				return result;
			unsigned u = typeInfo->Facets;
			while (true)
			{
				const FacetInfo* facet = GetTableEntry(typeInfo->Binder->Facets, u);
				if (facet->FacetName == 0)
					break;

				if (_tcscmp(facet->FacetName, name) == 0)
					result.push_back(facet->StringValue);
				++u;
			}
			return result;
		}

		unsigned GetFacetFallback(const char_type* name, const char_type* fallbackName, unsigned defaultValue) const
		{
			if (typeInfo->Facets == ~0)
				return defaultValue;

			unsigned val = defaultValue;
			unsigned u = typeInfo->Facets;
			while (true)
			{
				const FacetInfo* facet = GetTableEntry(typeInfo->Binder->Facets, u);
				if (facet->FacetName == 0)
					return val;

				if (_tcscmp(facet->FacetName, name) == 0)
					return facet->IntValue;
				if (fallbackName && _tcscmp(facet->FacetName, fallbackName) == 0)
					val = facet->IntValue;
				++u;
			}
		}

		const char_type* GetFacet(const char_type* name) const
		{
			if (typeInfo->Facets == ~0)
				return 0;

			unsigned u = typeInfo->Facets;
			while (true)
			{
				const FacetInfo* facet = GetTableEntry(typeInfo->Binder->Facets, u);
				if (facet->FacetName == 0)
					return 0;

				if (_tcscmp(facet->FacetName, name) == 0)
					return facet->StringValue;
				++u;
			}
		}
	};

	inline bool operator==(const SimpleType& a, const SimpleType& b)
	{
		bool na = a;
		bool nb = b;
		if (na || nb)
			return na == nb;
		return a.GetLocalName() == b.GetLocalName() && 
			a.GetNamespaceURI() == b.GetNamespaceURI();
	}

	inline bool operator!=(const SimpleType& a, const SimpleType& b)
	{
		return !(a == b);
	}

	class Attribute; 
	class Element;


	class ComplexType
	{
		const TypeInfo* typeInfo;
	public:
		ComplexType(const TypeInfo* typeInfo) : typeInfo(typeInfo) {}
		operator bool() const { return typeInfo != 0; }
		bool operator!() const { return typeInfo == 0; }

		std::vector<Attribute> GetAttributes() const;
		std::vector<Element> GetElements() const;

		ComplexType GetBaseType() const { return GetTableEntry(typeInfo->Binder->Types, typeInfo->BaseType); }
		string_type GetLocalName() const { return typeInfo->LocalName; }
		string_type GetNamespaceURI() const { return GetTableEntry(typeInfo->Binder->Namespaces, typeInfo->Namespace)->NamespaceURI; }
		
		SimpleType GetContentType() const 
		{ 
			for (unsigned u = typeInfo->MemberBegin; u != typeInfo->MemberEnd; ++u)
			{
				const MemberInfo* member = GetTableEntry(typeInfo->Binder->Members, u);
				if (*(member->LocalName) == 0)
					return GetTableEntry(member->Binder->Types, member->DataType);
			}
			return 0;
		}

		Element FindElement(const char_type* localName, const char_type* namespaceURI) const;
		Attribute FindAttribute(const char_type* localName, const char_type* namespaceURI) const;
	};

	inline bool operator==(const ComplexType& a, const ComplexType& b)
	{
		bool na = a;
		bool nb = b;
		if (na || nb)
			return na == nb;
		return a.GetLocalName() == b.GetLocalName() && 
			a.GetNamespaceURI() == b.GetNamespaceURI();
	}

	inline bool operator!=(const ComplexType& a, const ComplexType& b)
	{
		return !(a == b);
	}


	class Element
	{
		const MemberInfo* memberInfo;
	public:
		Element(const MemberInfo* memberInfo) : memberInfo(memberInfo) {}
		operator bool() const { return memberInfo != 0; }
		bool operator!() const { return memberInfo == 0; }

		ComplexType GetDataType() const { return GetTableEntry(memberInfo->Binder->Types, memberInfo->DataType); }
		unsigned GetMinOccurs() const { return memberInfo->MinOccurs; }
		unsigned GetMaxOccurs() const { return memberInfo->MaxOccurs; }
		string_type GetLocalName() const { return memberInfo->LocalName; }
		string_type GetNamespaceURI() const { return memberInfo->NamespaceURI; }
	};


	class Attribute
	{
		const MemberInfo* memberInfo;
	public:
		Attribute(const MemberInfo* memberInfo) : memberInfo(memberInfo) {}
		operator bool() const { return memberInfo != 0; }
		bool operator!() const { return memberInfo == 0; }
		bool IsRequired() const { return memberInfo->MinOccurs > 0; }

		SimpleType GetDataType() const { return GetTableEntry(memberInfo->Binder->Types, memberInfo->DataType); }
		string_type GetLocalName() const { return memberInfo->LocalName; }
		string_type GetNamespaceURI() const { return memberInfo->NamespaceURI; }
	};

	inline std::vector<Attribute> ComplexType::GetAttributes() const
	{
		std::vector<Attribute> result;
		for (unsigned u = typeInfo->MemberBegin; u != typeInfo->MemberEnd; ++u)
		{
			const MemberInfo* member = GetTableEntry(typeInfo->Binder->Members, u);
			if ((member->Flags & MemberFlags_IsAttribute) == MemberFlags_IsAttribute && *(member->LocalName) != 0) 
			{
				result.push_back(Attribute(member));
			}			
		}
		return result;		
	}

	inline std::vector<Element> ComplexType::GetElements() const
	{
		std::vector<Element> result;
		for (unsigned u = typeInfo->MemberBegin; u != typeInfo->MemberEnd; ++u)
		{
			const MemberInfo* member = GetTableEntry(typeInfo->Binder->Members, u);
			if ((member->Flags & MemberFlags_IsAttribute) == 0) 
			{
				result.push_back(Element(member));
			}			
		}
		return result;		
	}

	inline Element ComplexType::FindElement(const char_type* localName, const char_type* namespaceURI) const
	{
		for (unsigned u = typeInfo->MemberBegin; u != typeInfo->MemberEnd; ++u)
		{
			const MemberInfo* member = GetTableEntry(typeInfo->Binder->Members, u);
			if ((member->Flags & MemberFlags_IsAttribute) == 0) 
			{
				if (_tcscmp(member->LocalName, localName) == 0 &&
					_tcscmp(member->NamespaceURI, namespaceURI) == 0)
					return member;
			}			
		}
		return 0;
	}

	inline Attribute ComplexType::FindAttribute(const char_type* localName, const char_type* namespaceURI) const
	{
		for (unsigned u = typeInfo->MemberBegin; u != typeInfo->MemberEnd; ++u)
		{
			const MemberInfo* member = GetTableEntry(typeInfo->Binder->Members, u);
			if ((member->Flags & MemberFlags_IsAttribute) == MemberFlags_IsAttribute) 
			{
				if (_tcscmp(member->LocalName, localName) == 0 &&
					_tcscmp(member->NamespaceURI, namespaceURI) == 0)
					return member;
			}			
		}
		return 0;
	}

} // namespace Meta
} // Altova

//#endif // _INCLUDED_TYPEINFO_H_
