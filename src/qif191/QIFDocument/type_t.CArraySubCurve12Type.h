#pragma once



namespace qif191
{

namespace t
{	

class CArraySubCurve12Type : public TypeBase
{
public:
	QIF191_EXPORT CArraySubCurve12Type(xercesc::DOMNode* const& init);
	QIF191_EXPORT CArraySubCurve12Type(CArraySubCurve12Type const& init);
	void operator=(CArraySubCurve12Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CArraySubCurve12Type); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CArraySubCurve12Type_altova_N, 0, 0> N;	// N CNaturalType
	MemberElement<t::CCurve12OrientedType, _altova_mi_t_altova_CArraySubCurve12Type_altova_SubCurve> SubCurve;
	struct SubCurve { typedef Iterator<t::CCurve12OrientedType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CArraySubCurve12Type
