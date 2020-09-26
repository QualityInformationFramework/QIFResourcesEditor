#pragma once



namespace qif191
{

namespace t
{	

class CMeasureActionGroupFunctionType : public TypeBase
{
public:
	QIF191_EXPORT CMeasureActionGroupFunctionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CMeasureActionGroupFunctionType(CMeasureActionGroupFunctionType const& init);
	void operator=(CMeasureActionGroupFunctionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CMeasureActionGroupFunctionType); }
	MemberElement<t::CMeasureActionGroupFunctionEnumTypeType, _altova_mi_t_altova_CMeasureActionGroupFunctionType_altova_MeasureActionGroupFunctionEnum> MeasureActionGroupFunctionEnum;
	struct MeasureActionGroupFunctionEnum { typedef Iterator<t::CMeasureActionGroupFunctionEnumTypeType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CMeasureActionGroupFunctionType_altova_OtherMeasureActionGroupFunction> OtherMeasureActionGroupFunction;
	struct OtherMeasureActionGroupFunction { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CMeasureActionGroupFunctionType
