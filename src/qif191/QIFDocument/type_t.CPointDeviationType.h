#pragma once



namespace qif191
{

namespace t
{	

class CPointDeviationType : public TypeBase
{
public:
	QIF191_EXPORT CPointDeviationType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointDeviationType(CPointDeviationType const& init);
	void operator=(CPointDeviationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointDeviationType); }
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CPointDeviationType_altova_MeasurePointActualId> MeasurePointActualId;
	struct MeasurePointActualId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CPointDeviationType_altova_Deviation> Deviation;
	struct Deviation { typedef Iterator<t::CLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointDeviationType
