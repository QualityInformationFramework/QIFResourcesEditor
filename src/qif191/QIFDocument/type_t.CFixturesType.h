#pragma once



namespace qif191
{

namespace t
{	

class CFixturesType : public TypeBase
{
public:
	QIF191_EXPORT CFixturesType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFixturesType(CFixturesType const& init);
	void operator=(CFixturesType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFixturesType); }
	MemberElement<t::CFixtureType, _altova_mi_t_altova_CFixturesType_altova_Fixture> Fixture;
	struct Fixture { typedef Iterator<t::CFixtureType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFixturesType
