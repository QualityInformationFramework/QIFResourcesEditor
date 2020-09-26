#pragma once



namespace qif191
{

namespace t
{	

class CThreadClassType : public TypeBase
{
public:
	QIF191_EXPORT CThreadClassType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CThreadClassType(CThreadClassType const& init);
	void operator=(CThreadClassType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CThreadClassType); }
	MemberElement<t::CThreadClassEnumTypeType, _altova_mi_t_altova_CThreadClassType_altova_ThreadClassEnum> ThreadClassEnum;
	struct ThreadClassEnum { typedef Iterator<t::CThreadClassEnumTypeType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CThreadClassType_altova_OtherThreadClass> OtherThreadClass;
	struct OtherThreadClass { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CThreadClassType
