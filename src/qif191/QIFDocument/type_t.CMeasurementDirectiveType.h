#pragma once



namespace qif191
{

namespace t
{	

class CMeasurementDirectiveType : public TypeBase
{
public:
	QIF191_EXPORT CMeasurementDirectiveType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CMeasurementDirectiveType(CMeasurementDirectiveType const& init);
	void operator=(CMeasurementDirectiveType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CMeasurementDirectiveType); }
	MemberElement<t::CMeasurementDirectiveEnumTypeType, _altova_mi_t_altova_CMeasurementDirectiveType_altova_MeasurementDirectiveEnum> MeasurementDirectiveEnum;
	struct MeasurementDirectiveEnum { typedef Iterator<t::CMeasurementDirectiveEnumTypeType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CMeasurementDirectiveType_altova_OtherMeasurementDirective> OtherMeasurementDirective;
	struct OtherMeasurementDirective { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CMeasurementDirectiveType
