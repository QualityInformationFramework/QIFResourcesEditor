#pragma once



namespace qif191
{

namespace t
{	

class CEndRadiusType : public TypeBase
{
public:
	QIF191_EXPORT CEndRadiusType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CEndRadiusType(CEndRadiusType const& init);
	void operator=(CEndRadiusType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CEndRadiusType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CEndRadiusType_altova_EndRadius> EndRadius;
	struct EndRadius { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CEndRadiusType_altova_Expanded> Expanded;
	struct Expanded { typedef Iterator<xs::CbooleanType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CEndRadiusType
