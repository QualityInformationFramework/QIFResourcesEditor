#pragma once



namespace qif191
{

namespace t
{	

class CExtentType : public TypeBase
{
public:
	QIF191_EXPORT CExtentType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CExtentType(CExtentType const& init);
	void operator=(CExtentType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CExtentType); }
	MemberElement<t::CExtentEnumTypeType, _altova_mi_t_altova_CExtentType_altova_ExtentEnum> ExtentEnum;
	struct ExtentEnum { typedef Iterator<t::CExtentEnumTypeType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CExtentType_altova_OtherExtent> OtherExtent;
	struct OtherExtent { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CExtentType
