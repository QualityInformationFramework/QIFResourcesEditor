#pragma once



namespace qif191
{

namespace t
{	

class CSequencedDatumType : public TypeBase
{
public:
	QIF191_EXPORT CSequencedDatumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSequencedDatumType(CSequencedDatumType const& init);
	void operator=(CSequencedDatumType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSequencedDatumType); }
	MemberElement<t::CDatumType, _altova_mi_t_altova_CSequencedDatumType_altova_SimpleDatum> SimpleDatum;
	struct SimpleDatum { typedef Iterator<t::CDatumType> iterator; };
	MemberElement<xs::CpositiveIntegerType, _altova_mi_t_altova_CSequencedDatumType_altova_SequenceNumber> SequenceNumber;
	struct SequenceNumber { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSequencedDatumType
