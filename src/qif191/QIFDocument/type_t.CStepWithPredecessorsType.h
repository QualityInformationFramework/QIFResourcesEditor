#pragma once



namespace qif191
{

namespace t
{	

class CStepWithPredecessorsType : public TypeBase
{
public:
	QIF191_EXPORT CStepWithPredecessorsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStepWithPredecessorsType(CStepWithPredecessorsType const& init);
	void operator=(CStepWithPredecessorsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStepWithPredecessorsType); }
	MemberElement<t::CPredecessorsType, _altova_mi_t_altova_CStepWithPredecessorsType_altova_Predecessors> Predecessors;
	struct Predecessors { typedef Iterator<t::CPredecessorsType> iterator; };
	MemberElement<t::CNumberedPlanElementType, _altova_mi_t_altova_CStepWithPredecessorsType_altova_Step> Step;
	struct Step { typedef Iterator<t::CNumberedPlanElementType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStepWithPredecessorsType
