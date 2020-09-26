#pragma once



namespace qif191
{

namespace t
{	

class CSurfaceOfRevolutionCheckedFeatureType : public TypeBase
{
public:
	QIF191_EXPORT CSurfaceOfRevolutionCheckedFeatureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSurfaceOfRevolutionCheckedFeatureType(CSurfaceOfRevolutionCheckedFeatureType const& init);
	void operator=(CSurfaceOfRevolutionCheckedFeatureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSurfaceOfRevolutionCheckedFeatureType); }
	MemberElement<t::CSurfaceOfRevolutionCheckedType, _altova_mi_t_altova_CSurfaceOfRevolutionCheckedFeatureType_altova_CheckDetails> CheckDetails;
	struct CheckDetails { typedef Iterator<t::CSurfaceOfRevolutionCheckedType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSurfaceOfRevolutionCheckedFeatureType
