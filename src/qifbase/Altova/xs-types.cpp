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

////////////////////////////////////////////////////////////////////////
//
// xs-types.cpp
//
// This file was generated by XMLSpy 2016 Enterprise Edition.
//
// YOU SHOULD NOT MODIFY THIS FILE, BECAUSE IT WILL BE
// OVERWRITTEN WHEN YOU RE-RUN CODE GENERATION.
//
// Refer to the XMLSpy Documentation for further details.
// http://www.altova.com/xmlspy
//
////////////////////////////////////////////////////////////////////////


#include "StdAfx.h"
#include "xs-types.h"
#include "../Altova/Altova.h"
#include "../Altova/SchemaTypes.h"
#include "../Altova/AltovaException.h"
#include <stdlib.h>

namespace altova
{
	string_type XsSchemaValidation::CollapseWhitespace(const string_type& input)
	{
		string_type out;
		bool pendingSpace = false;
		for (string_type::const_iterator p = input.begin(); p != input.end(); ++p)
		{
			if (*p == '\x9' || *p == '\xa' || *p == '\xd' || *p == ' ')
			{
				if (out.size() != 0)
					pendingSpace = true;
			}
			else
			{
				if (pendingSpace)
				{
					out.append(1, ' ');
					pendingSpace = false;
				}
				out.append(1, *p);
			}
		}
		return out;
	}


	string_type XsSchemaValidation::ReplaceWhitespace(const string_type& input)
	{
		string_type out;
		for (string_type::const_iterator p = input.begin(); p != input.end(); ++p)
		{
			if (*p == '\x9' || *p == '\xa' || *p == '\xd')
				out.append(1, ' ');
			else
				out.append(1, *p);
		}
		return out;
	}


	bool XsSchemaValidation::Validate(const string_type& input, const TypeInfo* info)
	{
		// compute the effective whitespace value.
		WhitespaceType whitespace = info->Whitespace;
		const TypeInfo* typeIterator = info;
		while (whitespace == Whitespace_Unknown && typeIterator->BaseType != 0)
		{
			typeIterator = typeIterator->Binder->Types + typeIterator->BaseType;
			whitespace = typeIterator->Whitespace;
		}
		if (whitespace == Whitespace_Unknown)
			whitespace = Whitespace_Preserve;

		typeIterator = info;
		// now do the same thing again for the facets...
		while (typeIterator != 0)
		{
			bool enumSuccess = false;
			bool enumFail = false;
			if (typeIterator->Facets != 0)
			{
				const FacetInfo* facet = typeIterator->Binder->Facets + typeIterator->Facets;
				while (facet->FacetName != 0)
				{
					if (facet->Check != 0)
					{
						FacetCheckResult result = facet->Check->Check(input, facet, whitespace);
						if (result == FacetCheckResult_Fail)
							return false;	// first failure -> bail out

						if (result == FacetCheckResult_EnumFail)
							enumFail = true;
						if (result == FacetCheckResult_EnumSuccess)
							enumSuccess = true;
						// otherwise do nothing, a property has just succeeded checking
					}
					++facet;
				}
			}
			if (enumFail && !enumSuccess)	// there was at least one enum, but it had the wrong value
				return false;
			typeIterator = typeIterator->Binder->Types + typeIterator->BaseType;
		}
		return true;
	}



	// should use char* instead of string_type, avoids some heap usage.
	class LengthFacetCheckHelper
	{
	public:
		static bool IsWhitespace(char_type c) { return c == '\x9' || c == '\xa' || c == '\xd' || c == ' '; }
		static unsigned ComputeLength(const string_type& value, WhitespaceType whitespaceNormalization);
		static bool Equals(const string_type& value, const string_type& normalizedCompare, WhitespaceType whitespaceNormalization);
	};


	unsigned LengthFacetCheckHelper::ComputeLength(const string_type& value, WhitespaceType whitespaceNormalization)
	{
		if (whitespaceNormalization == Whitespace_Collapse)
		{
			unsigned length = 0;
			bool pendingSpace = false;
			for (string_type::const_iterator p = value.begin(); p != value.end(); ++p)
			{
				if (IsWhitespace(*p))
				{
					if (length != 0)
						pendingSpace = true;
				}
				else
				{
					if (pendingSpace)
					{
						length += 1;
						pendingSpace = false;
					}
					length += 1;
				}
			}
			return length;
		}
		return (unsigned) value.size();
	}

	bool LengthFacetCheckHelper::Equals(const string_type& value, const string_type& normalizedCompare, WhitespaceType whitespaceNormalization)
	{
		if (whitespaceNormalization == Whitespace_Collapse)
		{
			bool flag = false;
			bool pendingSpace = false;
			for (string_type::const_iterator p = value.begin(), q = normalizedCompare.begin(); 
				p != value.end(); ++p)
			{
				if (IsWhitespace(*p))
				{
					if (flag)
						pendingSpace = true;
				}
				else
				{
					flag = true;
					if (q == normalizedCompare.end())
						return false;
					if (pendingSpace)
					{
						if (' ' != *q) 
							return false;
						++q;
						if (q == normalizedCompare.end())
							return false;
						pendingSpace = false;
					}
					if (*p != *q)
						return false;
					++q;
				}
			}
			return true;
		}
		else if (whitespaceNormalization == Whitespace_Replace)
		{
			string_type::const_iterator p = value.begin(), q = normalizedCompare.begin();
			for (; 
				p != value.end(), q != normalizedCompare.end(); ++p, ++q)
			{
				if (IsWhitespace(*p))
				{
					if (' ' != *q)
						return false;
				}
				else
				{
					if (*p != *q)
						return false;
				}
			}

			if ((p == value.end()) != (q == normalizedCompare.end()))
				return false;
			return true;
		}
		return value == normalizedCompare;	
	}


	namespace 
	{
		class FacetCheckType_Success : public FacetCheck
		{
		public:
			virtual FacetCheckResult Check(const string_type& value, const FacetInfo* facet, WhitespaceType whitespaceNormalization) const 
			{
				return FacetCheckResult_Success;
			}
		};


		class FacetCheckType_string_length : public FacetCheck
		{
		public:
			virtual FacetCheckResult Check(const string_type& value, const FacetInfo* facet, WhitespaceType whitespaceNormalization) const 
			{
				if (LengthFacetCheckHelper::ComputeLength(value, whitespaceNormalization) == facet->IntValue)
					return FacetCheckResult_Success;
				else
					return FacetCheckResult_Fail;
			}
		};

		class FacetCheckType_string_minLength : public FacetCheck
		{
		public:
			virtual FacetCheckResult Check(const string_type& value, const FacetInfo* facet, WhitespaceType whitespaceNormalization) const 
			{
				if (LengthFacetCheckHelper::ComputeLength(value, whitespaceNormalization) >= facet->IntValue)
					return FacetCheckResult_Success;
				else
					return FacetCheckResult_Fail;
			}
		};

		class FacetCheckType_string_maxLength : public FacetCheck
		{
		public:
			virtual FacetCheckResult Check(const string_type& value, const FacetInfo* facet, WhitespaceType whitespaceNormalization) const 
			{
				if (LengthFacetCheckHelper::ComputeLength(value, whitespaceNormalization) <= facet->IntValue)
					return FacetCheckResult_Success;
				else
					return FacetCheckResult_Fail;
			}
		};

		class FacetCheckType_string_enumeration : public FacetCheck
		{
		public:
			virtual FacetCheckResult Check(const string_type& value, const FacetInfo* facet, WhitespaceType whitespaceNormalization) const 
			{
				if (LengthFacetCheckHelper::Equals(value, facet->StringValue, whitespaceNormalization))
					return FacetCheckResult_EnumSuccess;
				else
					return FacetCheckResult_EnumFail;
			}
		};

		class FacetCheckType_hexBinary_length : public FacetCheck
		{
		public:
			virtual FacetCheckResult Check(const string_type& value, const FacetInfo* facet, WhitespaceType whitespaceNormalization) const 
			{
				if (LengthFacetCheckHelper::ComputeLength(value, whitespaceNormalization) == facet->IntValue * 2)
					return FacetCheckResult_Success;
				else
					return FacetCheckResult_Fail;
			}
		};

		class FacetCheckType_hexBinary_minLength : public FacetCheck
		{
		public:
			virtual FacetCheckResult Check(const string_type& value, const FacetInfo* facet, WhitespaceType whitespaceNormalization) const 
			{
				if (LengthFacetCheckHelper::ComputeLength(value, whitespaceNormalization) >= facet->IntValue * 2)
					return FacetCheckResult_Success;
				else
					return FacetCheckResult_Fail;
			}
		};

		class FacetCheckType_hexBinary_maxLength : public FacetCheck
		{
		public:
			virtual FacetCheckResult Check(const string_type& value, const FacetInfo* facet, WhitespaceType whitespaceNormalization) const 
			{
				if (LengthFacetCheckHelper::ComputeLength(value, whitespaceNormalization) <= facet->IntValue * 2)
					return FacetCheckResult_Success;
				else
					return FacetCheckResult_Fail;
			}
		};

		// always succeeds
		FacetCheckType_Success FacetCheckInstance_Success;

		// facet checking for xs:string
		FacetCheckType_string_length FacetCheckInstance_string_length;
		FacetCheckType_string_minLength FacetCheckInstance_string_minLength;
		FacetCheckType_string_maxLength FacetCheckInstance_string_maxLength;
		FacetCheckType_string_enumeration FacetCheckInstance_string_enumeration;
	}

	const FacetCheck* FacetCheck_string_length = &FacetCheckInstance_string_length;
	const FacetCheck* FacetCheck_string_minLength = &FacetCheckInstance_string_minLength;
	const FacetCheck* FacetCheck_string_maxLength = &FacetCheckInstance_string_maxLength;
	const FacetCheck* FacetCheck_string_pattern = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_string_enumeration = &FacetCheckInstance_string_enumeration;

	// facet checking for xs:hexBinary
	const FacetCheck* FacetCheck_hexBinary_length;
	const FacetCheck* FacetCheck_hexBinary_minLength;
	const FacetCheck* FacetCheck_hexBinary_maxLength;
	const FacetCheck* FacetCheck_hexBinary_pattern = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_hexBinary_enumeration = &FacetCheckInstance_string_enumeration;

	// facet checking for xs:base64Binary
	const FacetCheck* FacetCheck_base64Binary_length;
	const FacetCheck* FacetCheck_base64Binary_minLength;
	const FacetCheck* FacetCheck_base64Binary_maxLength;
	const FacetCheck* FacetCheck_base64Binary_pattern = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_base64Binary_enumeration = &FacetCheckInstance_string_enumeration;

	// facet checking for xs:decimal
	const FacetCheck* FacetCheck_decimal_totalDigits = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_decimal_fractionDigits = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_decimal_minInclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_decimal_minExclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_decimal_maxInclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_decimal_maxExclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_decimal_enumeration = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_decimal_pattern = &FacetCheckInstance_Success;

	// facet checking for xs:boolean
	const FacetCheck* FacetCheck_boolean_pattern = &FacetCheckInstance_Success;

	// facet checking for xs:float
	const FacetCheck* FacetCheck_float_pattern = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_float_enumeration = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_float_maxInclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_float_maxExclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_float_minInclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_float_minExclusive = &FacetCheckInstance_Success;

	// facet checking for xs:double
	const FacetCheck* FacetCheck_double_pattern = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_double_enumeration = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_double_maxInclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_double_maxExclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_double_minInclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_double_minExclusive = &FacetCheckInstance_Success;

	// facet checking for xs:duration
	const FacetCheck* FacetCheck_duration_pattern = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_duration_enumeration = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_duration_maxInclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_duration_maxExclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_duration_minInclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_duration_minExclusive = &FacetCheckInstance_Success;

	// facet checking for xs:dateTime
	const FacetCheck* FacetCheck_dateTime_pattern = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_dateTime_enumeration = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_dateTime_maxInclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_dateTime_maxExclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_dateTime_minInclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_dateTime_minExclusive = &FacetCheckInstance_Success;

	// facet checking for xs:time
	const FacetCheck* FacetCheck_time_pattern = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_time_enumeration = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_time_maxInclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_time_maxExclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_time_minInclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_time_minExclusive = &FacetCheckInstance_Success;

	// facet checking for xs:date
	const FacetCheck* FacetCheck_date_pattern = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_date_enumeration = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_date_maxInclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_date_maxExclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_date_minInclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_date_minExclusive = &FacetCheckInstance_Success;

	// facet checking for xs:gYear
	const FacetCheck* FacetCheck_gYear_pattern = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_gYear_enumeration = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_gYear_maxInclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_gYear_maxExclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_gYear_minInclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_gYear_minExclusive = &FacetCheckInstance_Success;

	// facet checking for xs:gMonth
	const FacetCheck* FacetCheck_gMonth_pattern = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_gMonth_enumeration = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_gMonth_maxInclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_gMonth_maxExclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_gMonth_minInclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_gMonth_minExclusive = &FacetCheckInstance_Success;

	// facet checking for xs:gDay
	const FacetCheck* FacetCheck_gDay_pattern = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_gDay_enumeration = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_gDay_maxInclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_gDay_maxExclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_gDay_minInclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_gDay_minExclusive = &FacetCheckInstance_Success;

	// facet checking for xs:gYearMonth
	const FacetCheck* FacetCheck_gYearMonth_pattern = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_gYearMonth_enumeration = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_gYearMonth_maxInclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_gYearMonth_maxExclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_gYearMonth_minInclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_gYearMonth_minExclusive = &FacetCheckInstance_Success;

	// facet checking for xs:gMonthDay
	const FacetCheck* FacetCheck_gMonthDay_pattern = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_gMonthDay_enumeration = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_gMonthDay_maxInclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_gMonthDay_maxExclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_gMonthDay_minInclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_gMonthDay_minExclusive = &FacetCheckInstance_Success;

	// facet checking for xs:anySimpleType: these will all return success
	const FacetCheck* FacetCheck_anySimpleType_pattern = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_anySimpleType_enumeration = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_anySimpleType_length = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_anySimpleType_minLength = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_anySimpleType_maxLength = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_anySimpleType_maxInclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_anySimpleType_maxExclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_anySimpleType_minInclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_anySimpleType_minExclusive = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_anySimpleType_totalDigits = &FacetCheckInstance_Success;
	const FacetCheck* FacetCheck_anySimpleType_fractionDigits = &FacetCheckInstance_Success;




	string_type XmlFormatter::Format(const altova::DateTime& v)
	{
		return CoreTypes::CastToString(v);
	}

	string_type XmlFormatter::Format(const altova::Duration& v)
	{
		return CoreTypes::CastToString(v);
	}

	string_type XmlFormatter::Format(__int64 v)
	{
		return CoreTypes::CastToString(v);
	}

	string_type XmlFormatter::Format(unsigned __int64 v)
	{
		return CoreTypes::CastToString(v);
	}

	string_type XmlFormatter::Format(double v)
	{
		return CoreTypes::CastToString(v);
	}

	string_type XmlFormatter::Format(const string_type& v)
	{
		return CoreTypes::CastToString(v);
	}

	string_type XmlFormatter::Format(const std::vector<unsigned char>& v)
	{
		return altova::CoreTypes::FormatBase64(v);
	}

	string_type XmlFormatter::Format(bool v)
	{
		return v ? _T("true") : _T("false");
	}


	inline string_type::const_iterator ForwardToNonSpace(string_type::const_iterator it, const string_type::const_iterator& end)
	{
		while (it != end)
		{
			char_type c = *it;
			if (c != (char_type)0x20 && c != (char_type)0x09 && c != (char_type)0x0a && c != (char_type)0x0d)
				break;
			++it;
		}
		return it;
	}


	std::vector<unsigned char> XmlFormatter::ParseBinary(const string_type& v)
	{
		static const unsigned char DecodeTable[] = 
		{	~0,	~0,	~0,	~0,	~0,	~0,	~0,	~0,	~0,	~0,	~0,	62,	~0,	~0,	~0,	63,	// 0x20 
			52,	53,	54,	55,	56,	57,	58,	59,	60,	61,	~0,	~0,	~0,	~0,	~0,	~0,	// 0x30
			~0,	 0,	 1,	 2,	 3,	 4,	 5,	 6,	 7,	 8,	 9,	10,	11,	12,	13,	14,	// 0x40
			15,	16,	17,	18,	19,	20,	21,	22,	23,	24,	25,	~0,	~0,	~0,	~0,	~0,	// 0x50
			~0,	26,	27,	28,	29,	30,	31,	32,	33,	34,	35,	36,	37,	38,	39,	40,	// 0x60
			41,	42,	43,	44,	45,	46,	47,	48,	49,	50,	51,	~0,	~0,	~0,	~0,	~0,	// 0x70
		};

		std::vector<unsigned char> result;

		for (string_type::const_iterator it = v.begin(); it != v.end();)
		{			
			string_type::const_iterator tuplestart = it;
			it = ForwardToNonSpace(it, v.end());
			if (it == v.end())
				break;
			char_type c1 = *it++;
			it = ForwardToNonSpace(it, v.end());
			if (it == v.end())
				throw altova::StringParseException(_T("base64Binary"), string_type(tuplestart, it));
			char_type c2 = *it++;
			it = ForwardToNonSpace(it, v.end());
			if (it == v.end())
				throw altova::StringParseException(_T("base64Binary"), string_type(tuplestart, it));
			char_type c3 = *it++;
			it = ForwardToNonSpace(it, v.end());
			if (it == v.end())
				throw altova::StringParseException(_T("base64Binary"), string_type(tuplestart, it));
			char_type c4 = *it++;

			if (c1 < 0x20 || c1 > 0x7F)
				throw altova::StringParseException(_T("base64Binary"), string_type(tuplestart, it));
			unsigned char d1 = DecodeTable[c1-0x20];
			if (d1 > 63)
				throw altova::StringParseException(_T("base64Binary"), string_type(tuplestart, it));

			if (c2 < 0x20 || c2 > 0x7F)
				throw altova::StringParseException(_T("base64Binary"), string_type(tuplestart, it));
			unsigned char d2 = DecodeTable[c2-0x20];			
			if (d2 > 63)
				throw altova::StringParseException(_T("base64Binary"), string_type(tuplestart, it));

			result.push_back((d1 << 2)|(d2 >> 4));
		
			if (c3 == '=')
			{
				if (c4 != '=')
					throw altova::StringParseException(_T("base64Binary"), string_type(tuplestart, it));
				
			}
			else
			{
				if (c3 < 0x20 || c3 > 0x7F)
					throw altova::StringParseException(_T("base64Binary"), string_type(tuplestart, it));
				unsigned char d3 = DecodeTable[c3-0x20];
				if (d3 > 63)
					throw altova::StringParseException(_T("base64Binary"), string_type(tuplestart, it));

				result.push_back((d2 << 4)|(d3 >> 2));
				if (c4 != '=')
				{
					if (c4 < 0x20 || c4 > 0x7F)
						throw altova::StringParseException(_T("base64Binary"), string_type(tuplestart, it));
					unsigned char d4 = DecodeTable[c4-0x20];
					if (d4 > 63)
						throw altova::StringParseException(_T("base64Binary"), string_type(tuplestart, it));
					result.push_back((d3 << 6)|d4);
				}
			}
		}

		return result;
	}

	class XmlTimeFormatter : public XmlFormatter
	{
	public:
		virtual string_type Format(const altova::DateTime& dt)
		{
			string_type result;
			__int64 intraday = dt.Value() % (86400 * altova::TicksPerSecond);
			if (intraday < 0) intraday += (86400 * altova::TicksPerSecond);
			unsigned fraction = (unsigned)(intraday % altova::TicksPerSecond);
			intraday /= altova::TicksPerSecond;
			unsigned second = (unsigned)(intraday % 60);
			intraday /= 60;
			unsigned minute = (unsigned)(intraday % 60);
			intraday /= 60;
			unsigned hour = (unsigned)intraday;

			CoreTypes::FormatNumber(result, hour, 2);
			result.append(1, _T(':'));
			CoreTypes::FormatNumber(result, minute, 2);
			result.append(1, _T(':'));
			CoreTypes::FormatNumber(result, second, 2);
			CoreTypes::FormatFraction(result, fraction, 7);
			if (dt.HasTimezone())
				CoreTypes::FormatTimezone(result, dt.Timezone());
			return result;			
		}
	};


	class XmlDateFormatter : public XmlFormatter
	{
	public:
		virtual string_type Format(const altova::DateTime& dt)
		{
			string_type result;
			int year, month, day;
			DateTime::GetDateFromTimeValue(dt.Value(), year, month, day);
			if (year < 0)
			{
				result.append(1, _T('-'));
				year = -year;
			}

			CoreTypes::FormatNumber(result, year, 4);
			result.append(1, _T('-'));
			CoreTypes::FormatNumber(result, month, 2);
			result.append(1, _T('-'));
			CoreTypes::FormatNumber(result, day, 2);
			if (dt.HasTimezone())
				CoreTypes::FormatTimezone(result, dt.Timezone());
			return result;
		}
	};

	class XmlGYearFormatter : public XmlFormatter
	{
		virtual string_type Format(const altova::DateTime& dt)
		{
			string_type result;
			int year, month, day;
			DateTime::GetDateFromTimeValue(dt.Value(), year, month, day);
			if (year < 0)
			{
				result.append(1, _T('-'));
				year = -year;
			}

			CoreTypes::FormatNumber(result, year, 4);
			if (dt.HasTimezone())
				CoreTypes::FormatTimezone(result, dt.Timezone());
			return result;
		}
	};


	class XmlGMonthFormatter : public XmlFormatter
	{
		virtual string_type Format(const altova::DateTime& dt)
		{
			string_type result(_T("--"));
			int year, month, day;
			DateTime::GetDateFromTimeValue(dt.Value(), year, month, day);			
			CoreTypes::FormatNumber(result, month, 2);
			if (dt.HasTimezone())
				CoreTypes::FormatTimezone(result, dt.Timezone());
			return result;
		}
	};


	class XmlGDayFormatter : public XmlFormatter
	{
		virtual string_type Format(const altova::DateTime& dt)
		{
			string_type result(_T("---"));
			int year, month, day;
			DateTime::GetDateFromTimeValue(dt.Value(), year, month, day);			
			CoreTypes::FormatNumber(result, day, 2);
			if (dt.HasTimezone())
				CoreTypes::FormatTimezone(result, dt.Timezone());
			return result;
		}
	};

	class XmlGYearMonthFormatter : public XmlFormatter
	{
		virtual string_type Format(const altova::DateTime& dt)
		{
			string_type result;
			int year, month, day;
			DateTime::GetDateFromTimeValue(dt.Value(), year, month, day);			
			if (year < 0)
			{
				result.append(1, _T('-'));
				year = -year;
			}

			CoreTypes::FormatNumber(result, year, 4);
			result.append(1, _T('-'));
			CoreTypes::FormatNumber(result, month, 2);
			if (dt.HasTimezone())
				CoreTypes::FormatTimezone(result, dt.Timezone());
			return result;
		}
	};


	class XmlGMonthDayFormatter : public XmlFormatter
	{
		virtual string_type Format(const altova::DateTime& dt)
		{
			string_type result(_T("--"));
			int year, month, day;
			DateTime::GetDateFromTimeValue(dt.Value(), year, month, day);			
			CoreTypes::FormatNumber(result, month, 2);
			result.append(1, _T('-'));
			CoreTypes::FormatNumber(result, day, 2);
			if (dt.HasTimezone())
				CoreTypes::FormatTimezone(result, dt.Timezone());
			return result;
		}
	};


	class XmlHexBinaryFormatter : public XmlFormatter
	{
	public:
		virtual string_type Format(const std::vector<unsigned char>& v)
		{
			static char_type EncodingTable[] = _T("0123456789ABCDEF");
			string_type result;
			for (std::vector<unsigned char>::const_iterator it = v.begin(); it != v.end(); ++it)
			{
				unsigned char v = *it;
				result.append(1, EncodingTable[(v >> 4)]);
				result.append(1, EncodingTable[(v & 15)]);		
			}
			return result;
		}

		static bool IsXDigit(char_type c)
		{
			return (c >= '0' && c <= '9') || (c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'f');
		}

		static unsigned char GetValue(char_type c)
		{
			if (c >= '0' && c <= '9')
				return c - '0';
			if (c >= 'A' && c <= 'F')
				return c - 'A' + 10;
			return c - 'a' + 10;
		}

		virtual std::vector<unsigned char> ParseBinary(const string_type& v)
		{
			std::vector<unsigned char> result;
			string_type::const_iterator it = ForwardToNonSpace(v.begin(), v.end());
			while (it != v.end())
			{
				string_type::const_iterator tuplestart = it;
				char_type c1 = *it++;
				if (!IsXDigit(c1))
					break;
				if (it == v.end())
					throw altova::StringParseException(_T("hexBinary"), string_type(tuplestart, it));
				char_type c2 = *it++;
				if (!IsXDigit(c2))
					throw altova::StringParseException(_T("hexBinary"), string_type(tuplestart, it));
				result.push_back(GetValue(c1) << 4 | GetValue(c2));
				
			}

			string_type::const_iterator end = ForwardToNonSpace(it, v.end());
			if (end != v.end())
				throw altova::StringParseException(_T("hexBinary"), string_type(end, end + 1));
			return result;
		}
	};

	class XmlIntegerFormatter : public XmlFormatter
	{
	public:
		virtual string_type Format(double v)
		{
			return CoreTypes::CastToString(static_cast<__int64>(v));
		}
	};


	static XmlFormatter Instance_StandardFormatter;
	static XmlTimeFormatter Instance_TimeFormatter;
	static XmlDateFormatter Instance_DateFormatter;
	static XmlGYearFormatter Instance_GYearFormatter;
	static XmlGMonthFormatter Instance_GMonthFormatter;
	static XmlGDayFormatter Instance_GDayFormatter;
	static XmlGYearMonthFormatter Instance_GYearMonthFormatter;
	static XmlGMonthDayFormatter Instance_GMonthDayFormatter;
	static XmlHexBinaryFormatter Instance_HexBinaryFormatter;
	static XmlIntegerFormatter Instance_IntegerFormatter;

	ValueFormatter* Exported_TimeFormatter = &Instance_TimeFormatter;
	ValueFormatter* Exported_DateFormatter = &Instance_DateFormatter;
	ValueFormatter* Exported_DateTimeFormatter = &Instance_StandardFormatter;
	ValueFormatter* Exported_GYearFormatter = &Instance_GYearFormatter;
	ValueFormatter* Exported_GMonthFormatter = &Instance_GMonthFormatter;
	ValueFormatter* Exported_GDayFormatter = &Instance_GDayFormatter;
	ValueFormatter* Exported_GYearMonthFormatter = &Instance_GYearMonthFormatter;
	ValueFormatter* Exported_GMonthDayFormatter = &Instance_GMonthDayFormatter;
	ValueFormatter* Exported_IntegerFormatter = &Instance_IntegerFormatter;
	ValueFormatter* Exported_DecimalFormatter = &Instance_StandardFormatter;
	ValueFormatter* Exported_AnySimpleTypeFormatter = &Instance_StandardFormatter;
	ValueFormatter* Exported_DurationFormatter = &Instance_StandardFormatter;
	ValueFormatter* Exported_DoubleFormatter = &Instance_StandardFormatter;
	ValueFormatter* Exported_Base64BinaryFormatter = &Instance_StandardFormatter;
	ValueFormatter* Exported_HexBinaryFormatter = &Instance_HexBinaryFormatter;
}
