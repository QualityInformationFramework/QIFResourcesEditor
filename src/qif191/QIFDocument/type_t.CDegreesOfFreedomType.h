#pragma once



namespace qif191
{

namespace t
{	

class CDegreesOfFreedomType : public TypeBase
{
public:
	QIF191_EXPORT CDegreesOfFreedomType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDegreesOfFreedomType(CDegreesOfFreedomType const& init);
	void operator=(CDegreesOfFreedomType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CDegreesOfFreedomType); }
	MemberElement<t::CDegreeOfFreedomEnumTypeType, _altova_mi_t_altova_CDegreesOfFreedomType_altova_DegreeOfFreedom> DegreeOfFreedom;
	struct DegreeOfFreedom { typedef Iterator<t::CDegreeOfFreedomEnumTypeType> iterator; };
	MemberElement<t::CISODegreeOfFreedomEnumTypeType, _altova_mi_t_altova_CDegreesOfFreedomType_altova_ISODegreeOfFreedom> ISODegreeOfFreedom;
	struct ISODegreeOfFreedom { typedef Iterator<t::CISODegreeOfFreedomEnumTypeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDegreesOfFreedomType
