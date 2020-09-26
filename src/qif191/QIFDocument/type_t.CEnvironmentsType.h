#pragma once



namespace qif191
{

namespace t
{	

class CEnvironmentsType : public TypeBase
{
public:
	QIF191_EXPORT CEnvironmentsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CEnvironmentsType(CEnvironmentsType const& init);
	void operator=(CEnvironmentsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CEnvironmentsType); }
	MemberElement<t::CEnvironmentType, _altova_mi_t_altova_CEnvironmentsType_altova_Environment> Environment;
	struct Environment { typedef Iterator<t::CEnvironmentType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CEnvironmentsType
