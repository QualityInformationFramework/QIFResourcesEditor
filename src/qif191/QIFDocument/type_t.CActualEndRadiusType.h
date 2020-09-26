#pragma once



namespace qif191
{

namespace t
{	

class CActualEndRadiusType : public TypeBase
{
public:
	QIF191_EXPORT CActualEndRadiusType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CActualEndRadiusType(CActualEndRadiusType const& init);
	void operator=(CActualEndRadiusType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CActualEndRadiusType); }
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CActualEndRadiusType_altova_EndRadius> EndRadius;
	struct EndRadius { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CActualEndRadiusType_altova_Expanded> Expanded;
	struct Expanded { typedef Iterator<xs::CbooleanType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CActualEndRadiusType
