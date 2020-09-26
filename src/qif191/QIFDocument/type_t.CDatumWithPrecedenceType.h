#pragma once



namespace qif191
{

namespace t
{	

class CDatumWithPrecedenceType : public TypeBase
{
public:
	QIF191_EXPORT CDatumWithPrecedenceType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDatumWithPrecedenceType(CDatumWithPrecedenceType const& init);
	void operator=(CDatumWithPrecedenceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CDatumWithPrecedenceType); }
	MemberElement<t::CDatumType, _altova_mi_t_altova_CDatumWithPrecedenceType_altova_SimpleDatum> SimpleDatum;
	struct SimpleDatum { typedef Iterator<t::CDatumType> iterator; };
	MemberElement<t::CNominalDatumFeatureType, _altova_mi_t_altova_CDatumWithPrecedenceType_altova_NominalDatumFeature> NominalDatumFeature;
	struct NominalDatumFeature { typedef Iterator<t::CNominalDatumFeatureType> iterator; };
	MemberElement<t::CActualDatumFeatureType, _altova_mi_t_altova_CDatumWithPrecedenceType_altova_ActualDatumFeature> ActualDatumFeature;
	struct ActualDatumFeature { typedef Iterator<t::CActualDatumFeatureType> iterator; };
	MemberElement<t::CCompoundDatumType, _altova_mi_t_altova_CDatumWithPrecedenceType_altova_CompoundDatum> CompoundDatum;
	struct CompoundDatum { typedef Iterator<t::CCompoundDatumType> iterator; };
	MemberElement<t::CPrecedenceType, _altova_mi_t_altova_CDatumWithPrecedenceType_altova_Precedence> Precedence;
	struct Precedence { typedef Iterator<t::CPrecedenceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDatumWithPrecedenceType
