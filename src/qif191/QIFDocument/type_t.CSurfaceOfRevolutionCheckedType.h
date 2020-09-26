#pragma once



namespace qif191
{

namespace t
{	

class CSurfaceOfRevolutionCheckedType : public TypeBase
{
public:
	QIF191_EXPORT CSurfaceOfRevolutionCheckedType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSurfaceOfRevolutionCheckedType(CSurfaceOfRevolutionCheckedType const& init);
	void operator=(CSurfaceOfRevolutionCheckedType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSurfaceOfRevolutionCheckedType); }
	MemberElement<t::CMeasuredFeatureType, _altova_mi_t_altova_CSurfaceOfRevolutionCheckedType_altova_Measured> Measured;
	struct Measured { typedef Iterator<t::CMeasuredFeatureType> iterator; };
	MemberElement<t::CSurfaceOfRevolutionConstructionMethodType, _altova_mi_t_altova_CSurfaceOfRevolutionCheckedType_altova_Constructed> Constructed;
	struct Constructed { typedef Iterator<t::CSurfaceOfRevolutionConstructionMethodType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSurfaceOfRevolutionCheckedType
