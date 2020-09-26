#pragma once



namespace qif191
{

namespace t
{	

class CAsmPathsType : public TypeBase
{
public:
	QIF191_EXPORT CAsmPathsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAsmPathsType(CAsmPathsType const& init);
	void operator=(CAsmPathsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAsmPathsType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CAsmPathsType_altova_N, 0, 0> N;	// N CNaturalType
	MemberElement<t::CAsmPathType, _altova_mi_t_altova_CAsmPathsType_altova_AsmPath> AsmPath;
	struct AsmPath { typedef Iterator<t::CAsmPathType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAsmPathsType
