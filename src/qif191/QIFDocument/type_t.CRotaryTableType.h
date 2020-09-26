#pragma once



namespace qif191
{

namespace t
{	

class CRotaryTableType : public TypeBase
{
public:
	QIF191_EXPORT CRotaryTableType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CRotaryTableType(CRotaryTableType const& init);
	void operator=(CRotaryTableType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CRotaryTableType); }
	MemberElement<t::CPointType, _altova_mi_t_altova_CRotaryTableType_altova_LocationOnCMM> LocationOnCMM;
	struct LocationOnCMM { typedef Iterator<t::CPointType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CRotaryTableType_altova_AxisDirection> AxisDirection;
	struct AxisDirection { typedef Iterator<t::CUnitVectorType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CRotaryTableType_altova_ZeroIndexDirection> ZeroIndexDirection;
	struct ZeroIndexDirection { typedef Iterator<t::CUnitVectorType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CRotaryTableType_altova_TableRadius> TableRadius;
	struct TableRadius { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CTableErrorsType, _altova_mi_t_altova_CRotaryTableType_altova_TableErrors> TableErrors;
	struct TableErrors { typedef Iterator<t::CTableErrorsType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CRotaryTableType
