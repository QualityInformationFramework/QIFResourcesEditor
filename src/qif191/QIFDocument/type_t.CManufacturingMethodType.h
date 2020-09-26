#pragma once



namespace qif191
{

namespace t
{	

class CManufacturingMethodType : public TypeBase
{
public:
	QIF191_EXPORT CManufacturingMethodType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CManufacturingMethodType(CManufacturingMethodType const& init);
	void operator=(CManufacturingMethodType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CManufacturingMethodType); }
	MemberElement<t::CManufacturingMethodEnumTypeType, _altova_mi_t_altova_CManufacturingMethodType_altova_ManufacturingMethodEnum> ManufacturingMethodEnum;
	struct ManufacturingMethodEnum { typedef Iterator<t::CManufacturingMethodEnumTypeType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CManufacturingMethodType_altova_OtherManufacturingMethod> OtherManufacturingMethod;
	struct OtherManufacturingMethod { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CManufacturingMethodType
