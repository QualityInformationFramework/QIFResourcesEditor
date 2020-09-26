#pragma once



namespace qif191
{

namespace t
{	

class CStepsWithPredecessorsType : public TypeBase
{
public:
	QIF191_EXPORT CStepsWithPredecessorsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStepsWithPredecessorsType(CStepsWithPredecessorsType const& init);
	void operator=(CStepsWithPredecessorsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStepsWithPredecessorsType); }
	MemberElement<t::CStepWithPredecessorsType, _altova_mi_t_altova_CStepsWithPredecessorsType_altova_StepWithPredecessors> StepWithPredecessors;
	struct StepWithPredecessors { typedef Iterator<t::CStepWithPredecessorsType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStepsWithPredecessorsType
