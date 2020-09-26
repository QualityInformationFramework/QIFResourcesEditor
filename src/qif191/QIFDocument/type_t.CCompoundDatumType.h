#pragma once



namespace qif191
{

namespace t
{	

class CCompoundDatumType : public TypeBase
{
public:
	QIF191_EXPORT CCompoundDatumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCompoundDatumType(CCompoundDatumType const& init);
	void operator=(CCompoundDatumType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCompoundDatumType); }
	MemberElement<t::CSequencedDatumType, _altova_mi_t_altova_CCompoundDatumType_altova_Datum> Datum;
	struct Datum { typedef Iterator<t::CSequencedDatumType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCompoundDatumType
