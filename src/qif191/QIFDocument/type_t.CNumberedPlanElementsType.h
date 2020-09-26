#pragma once



namespace qif191
{

namespace t
{	

class CNumberedPlanElementsType : public TypeBase
{
public:
	QIF191_EXPORT CNumberedPlanElementsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CNumberedPlanElementsType(CNumberedPlanElementsType const& init);
	void operator=(CNumberedPlanElementsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CNumberedPlanElementsType); }
	MemberElement<t::CNumberedPlanElementType, _altova_mi_t_altova_CNumberedPlanElementsType_altova_NumberedPlanElement> NumberedPlanElement;
	struct NumberedPlanElement { typedef Iterator<t::CNumberedPlanElementType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CNumberedPlanElementsType
