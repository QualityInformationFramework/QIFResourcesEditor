#pragma once



namespace qif191
{

namespace t
{	

class CCoordinateSystemSetType : public TypeBase
{
public:
	QIF191_EXPORT CCoordinateSystemSetType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCoordinateSystemSetType(CCoordinateSystemSetType const& init);
	void operator=(CCoordinateSystemSetType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCoordinateSystemSetType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CCoordinateSystemSetType_altova_N, 0, 0> N;	// N CNaturalType
	MemberElement<t::CCADCoordinateSystemType, _altova_mi_t_altova_CCoordinateSystemSetType_altova_CoordinateSystem> CoordinateSystem;
	struct CoordinateSystem { typedef Iterator<t::CCADCoordinateSystemType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCoordinateSystemSetType
