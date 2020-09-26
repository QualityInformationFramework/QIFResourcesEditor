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
// Node.h
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

#pragma once

#include "AltovaXMLAPI.h"
#include "../Altova/xs-types.h"
#include "../Altova/SchemaTypes.h"

#include <xercesc/dom/DOMNode.hpp>

QIFBASE_EXPORT string_type FindPrefixForNamespace(xercesc::DOMNode* node, const string_type& uri);
QIFBASE_EXPORT string_type GetUnusedPrefix(xercesc::DOMNode* node, const string_type& prefixHint);

class QIFBASE_EXPORT XercesTreeOperations
{
public:

	static void CopyAll(const xercesc::DOMNode* src, xercesc::DOMNode* tgt);

	class AllIterator
	{
		xercesc::DOMNode* m_Current;
	public:
		operator bool() const { return m_Current != 0; }
		bool operator++() { m_Current = m_Current->getNextSibling(); return m_Current != 0; }
		bool operator--() { m_Current = m_Current->getPreviousSibling(); return m_Current != 0; }
		xercesc::DOMNode* operator*() const { return m_Current; }

		AllIterator( xercesc::DOMNode* start ) : m_Current( start ) {}
	};

	class MemberIterator 
	{
		AllIterator m_AllIterator;
		const altova::MemberInfo* m_MemberInfo;

	public:
		operator bool() const { return m_AllIterator; }

		bool operator++() 
		{ 
			while (++m_AllIterator)
			{
				if (IsMember(*m_AllIterator, m_MemberInfo))
					return true;
			}			
			return false;
		}

		bool operator--() 
		{ 
			while (--m_AllIterator)
			{
				if (IsMember(*m_AllIterator, m_MemberInfo))
					return true;
			}			
			return false;
		}

		xercesc::DOMNode* operator*() const { return *m_AllIterator; }		

		MemberIterator(xercesc::DOMNode* pNode, const altova::MemberInfo* pMemberInfo)
			: m_AllIterator( pNode ), m_MemberInfo( pMemberInfo )
		{
			while (m_AllIterator && !IsMember(*m_AllIterator, m_MemberInfo))
				++m_AllIterator;
		}
	};

	static bool IsEqualString(const XMLCh* a, const char_type* b);
	static bool IsMember(xercesc::DOMNode* pNode, const altova::MemberInfo* pMember);
	static bool IsValid(xercesc::DOMNode*  pNode);
	static AllIterator GetElements(xercesc::DOMNode* pNode);
	static MemberIterator GetElements(xercesc::DOMNode* pNode, const altova::MemberInfo* pMemberInfo);
	static void SetTextValue(xercesc::DOMNode* pNode, const string_type& sText);
	static string_type GetTextValue(xercesc::DOMNode* pNode);
	static void SetValue(xercesc::DOMNode* pNode, const altova::MemberInfo* pMemberInfo, const XMLCh* sValue);
	static void SetValue(xercesc::DOMNode* pNode, const altova::MemberInfo* pMemberInfo, const string_type& sValue);
	static void SetValue(xercesc::DOMNode* pNode, const altova::MemberInfo* pMemberInfo, bool b);
	static void SetValue(xercesc::DOMNode* pNode, const altova::MemberInfo* pMemberInfo, int b);
	static void SetValue(xercesc::DOMNode* pNode, const altova::MemberInfo* pMemberInfo, unsigned b);
	static void SetValue(xercesc::DOMNode* pNode, const altova::MemberInfo* pMemberInfo, __int64 b);
	static void SetValue(xercesc::DOMNode* pNode, const altova::MemberInfo* pMemberInfo, unsigned __int64 b);
	static void SetValue(xercesc::DOMNode* pNode, const altova::MemberInfo* pMemberInfo, double b);
	static void SetValue(xercesc::DOMNode* pNode, const altova::MemberInfo* pMemberInfo, altova::DateTime b);
	static void SetValue(xercesc::DOMNode* pNode, const altova::MemberInfo* pMemberInfo, altova::Duration b);
	static void SetValue(xercesc::DOMNode* pNode, const altova::MemberInfo* pMemberInfo, const std::vector<unsigned char>& b);
	static void SetValue(xercesc::DOMNode* pNode, const altova::MemberInfo* pMemberInfo, const xercesc::DOMNode* b);
	static void SetValue(xercesc::DOMNode* pNode, const altova::MemberInfo* pMemberInfo, const altova::QName& qn);
	static xercesc::DOMNode* AddElement(xercesc::DOMNode* pNode, const altova::MemberInfo* pMemberInfo);

	static double CastToDouble(const xercesc::DOMNode* pNode, const altova::MemberInfo* pMemberInfo);
	static string_type CastToString(const xercesc::DOMNode* pNode, const altova::MemberInfo* pMemberInfo);
	static __int64 CastToInt64(const xercesc::DOMNode* pNode, const altova::MemberInfo* pMemberInfo);
	static unsigned __int64 CastToUInt64(const xercesc::DOMNode* pNode, const altova::MemberInfo* pMemberInfo);
	static unsigned CastToUInt(const xercesc::DOMNode* pNode, const altova::MemberInfo* pMemberInfo);
	static int CastToInt(const xercesc::DOMNode* pNode, const altova::MemberInfo* pMemberInfo);
	static bool CastToBool(const xercesc::DOMNode* pNode, const altova::MemberInfo* pMemberInfo);
	static altova::DateTime CastToDateTime(const xercesc::DOMNode* pNode, const altova::MemberInfo* pMemberInfo);
	static altova::Duration CastToDuration(const xercesc::DOMNode* pNode, const altova::MemberInfo* pMemberInfo);
	static std::vector<unsigned char> CastToBinary(const xercesc::DOMNode* pNode, const altova::MemberInfo* pMemberInfo);
	static altova::QName CastToQName(const xercesc::DOMNode* pNode, const altova::MemberInfo* pMemberInfo);
	static xercesc::DOMNode* FindAttribute(xercesc::DOMNode* pNode, const altova::MemberInfo* member);

	static xercesc::DOMNode* GetParent(xercesc::DOMNode* pNode);
	static void SetValue(xercesc::DOMNode* pNode, const string_type& sValue);
	static void RemoveAttribute(xercesc::DOMNode* pNode, const altova::MemberInfo* member);
	static void RemoveElements(xercesc::DOMNode* pNode, const altova::MemberInfo* member);
	static void RemoveElement(xercesc::DOMNode* pNode, const altova::MemberInfo* member, unsigned index);

	typedef xercesc::DOMDocument* DocumentType;

	static DocumentType LoadDocument(const string_type& filename);
	static void FreeDocument(DocumentType& document);
	static void FreeDocument(xercesc::DOMNode*& document);
	static void SaveDocument( const DocumentType& document, const string_type& filename, bool prettyPrint, const string_type& lineend );
	static void SaveDocument( const DocumentType& document, const string_type& filename, bool prettyPrint, bool omitXmlDecl, const string_type& lineend );
	static void SaveDocument( const DocumentType& document, const string_type& filename, bool prettyPrint, const string_type& encoding, bool bBigEndian, bool bBOM, const string_type& lineend );
	static void SaveDocument( const DocumentType& document, const string_type& filename, bool prettyPrint, bool omitXmlDecl, const string_type& encoding, bool bBigEndian, bool bBOM, const string_type& lineend );

	static DocumentType LoadXml(const string_type& xml);
	static DocumentType LoadFromBinary(const std::vector<unsigned char>& binary);
	static string_type SaveXml(const DocumentType& document, bool prettyPrint, const string_type& lineend);
	static string_type SaveXml(const DocumentType& document, bool prettyPrint, bool omitXmlDecl, const string_type& lineend);
	static std::vector<unsigned char> SaveToBinary(const DocumentType& document, bool prettyPrint, const string_type& lineend);
	static std::vector<unsigned char> SaveToBinary(const DocumentType& document, bool prettyPrint, bool omitXmlDecl, const string_type& lineend);
	static void SaveToBinary( std::vector<unsigned char>& result, const DocumentType& document, bool prettyPrint, const string_type& encoding, bool bBigEndian, bool bBOM, const string_type& lineend, bool bIncludeEncoding = true );

	static DocumentType CreateDocument();

	static void AddProcessingInstruction(xercesc::DOMNode* node, const string_type& target, const string_type& value);

	static void SetAttribute(xercesc::DOMNode* node, const string_type& localName, const string_type& namespaceURI, const string_type& value);
	static void SetAttribute(xercesc::DOMNode* node, const string_type& localName, const string_type& namespaceURI, const string_type& valueLocalName, const string_type& valueURI);

protected:
	static void CorrectByteOrderAndBOM( std::vector<unsigned char>& bytes, const string_type& encoding, bool bBigEndian, bool bBOM );
	static int GetEncodingAndByteOrderFromXml( std::vector<unsigned char>& sourceBytes );
	static int GetEncodingAndByteOrderFromXml( unsigned char* sourceBytes, int sourceLength );
	static int GetUnicodeSizeFromEncodingName( const string_type& encodingIn );
	static string_type Uppercase( const string_type& str );
};


//#endif // ALTOVA_NODE_H_INCLUDED
