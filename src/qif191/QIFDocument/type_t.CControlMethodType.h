#pragma once



namespace qif191
{

namespace t
{	

class CControlMethodType : public TypeBase
{
public:
	QIF191_EXPORT CControlMethodType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CControlMethodType(CControlMethodType const& init);
	void operator=(CControlMethodType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CControlMethodType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CControlMethodType_altova_id, 0, 0> id;	// id CQIFIdType
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CControlMethodType_altova_AssignableCauseId> AssignableCauseId;
	struct AssignableCauseId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CCriterionIntegerType, _altova_mi_t_altova_CControlMethodType_altova_NumOutOfTolerance> NumOutOfTolerance;
	struct NumOutOfTolerance { typedef Iterator<t::CCriterionIntegerType> iterator; };
	MemberElement<t::CCriterionDecimalType, _altova_mi_t_altova_CControlMethodType_altova_CpThreshold> CpThreshold;
	struct CpThreshold { typedef Iterator<t::CCriterionDecimalType> iterator; };
	MemberElement<t::CCriterionDecimalType, _altova_mi_t_altova_CControlMethodType_altova_CpkThreshold> CpkThreshold;
	struct CpkThreshold { typedef Iterator<t::CCriterionDecimalType> iterator; };
	MemberElement<t::CCriterionDecimalType, _altova_mi_t_altova_CControlMethodType_altova_PpThreshold> PpThreshold;
	struct PpThreshold { typedef Iterator<t::CCriterionDecimalType> iterator; };
	MemberElement<t::CCriterionDecimalType, _altova_mi_t_altova_CControlMethodType_altova_PpkThreshold> PpkThreshold;
	struct PpkThreshold { typedef Iterator<t::CCriterionDecimalType> iterator; };
	MemberElement<t::CCriterionIntegerType, _altova_mi_t_altova_CControlMethodType_altova_NumOutOfControl> NumOutOfControl;
	struct NumOutOfControl { typedef Iterator<t::CCriterionIntegerType> iterator; };
	MemberElement<t::CCriterionIntegerType, _altova_mi_t_altova_CControlMethodType_altova_TrendGrouping> TrendGrouping;
	struct TrendGrouping { typedef Iterator<t::CCriterionIntegerType> iterator; };
	MemberElement<t::CCriterionIntegerType, _altova_mi_t_altova_CControlMethodType_altova_SkewGrouping> SkewGrouping;
	struct SkewGrouping { typedef Iterator<t::CCriterionIntegerType> iterator; };
	MemberElement<t::CCriterionOutOfType, _altova_mi_t_altova_CControlMethodType_altova_OneThirdGrouping> OneThirdGrouping;
	struct OneThirdGrouping { typedef Iterator<t::CCriterionOutOfType> iterator; };
	MemberElement<t::CCriterionOutOfType, _altova_mi_t_altova_CControlMethodType_altova_TwoThirdsGrouping> TwoThirdsGrouping;
	struct TwoThirdsGrouping { typedef Iterator<t::CCriterionOutOfType> iterator; };
	MemberElement<t::CCriterionOutOfType, _altova_mi_t_altova_CControlMethodType_altova_Oscillation> Oscillation;
	struct Oscillation { typedef Iterator<t::CCriterionOutOfType> iterator; };
	MemberElement<t::CCriterionOutOfType, _altova_mi_t_altova_CControlMethodType_altova_Stratification> Stratification;
	struct Stratification { typedef Iterator<t::CCriterionOutOfType> iterator; };
	MemberElement<t::CCriterionIntegerType, _altova_mi_t_altova_CControlMethodType_altova_NumOutOfControlRng> NumOutOfControlRng;
	struct NumOutOfControlRng { typedef Iterator<t::CCriterionIntegerType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CControlMethodType
