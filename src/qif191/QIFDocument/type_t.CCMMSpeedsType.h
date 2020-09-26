#pragma once



namespace qif191
{

namespace t
{	

class CCMMSpeedsType : public TypeBase
{
public:
	QIF191_EXPORT CCMMSpeedsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCMMSpeedsType(CCMMSpeedsType const& init);
	void operator=(CCMMSpeedsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCMMSpeedsType); }
	MemberElement<t::CSpeedValueType, _altova_mi_t_altova_CCMMSpeedsType_altova_MaxXTraverseSpeed> MaxXTraverseSpeed;
	struct MaxXTraverseSpeed { typedef Iterator<t::CSpeedValueType> iterator; };
	MemberElement<t::CSpeedValueType, _altova_mi_t_altova_CCMMSpeedsType_altova_MaxYTraverseSpeed> MaxYTraverseSpeed;
	struct MaxYTraverseSpeed { typedef Iterator<t::CSpeedValueType> iterator; };
	MemberElement<t::CSpeedValueType, _altova_mi_t_altova_CCMMSpeedsType_altova_MaxZTraverseSpeed> MaxZTraverseSpeed;
	struct MaxZTraverseSpeed { typedef Iterator<t::CSpeedValueType> iterator; };
	MemberElement<t::CSpeedValueType, _altova_mi_t_altova_CCMMSpeedsType_altova_MaxXProbingSpeed> MaxXProbingSpeed;
	struct MaxXProbingSpeed { typedef Iterator<t::CSpeedValueType> iterator; };
	MemberElement<t::CSpeedValueType, _altova_mi_t_altova_CCMMSpeedsType_altova_MaxYProbingSpeed> MaxYProbingSpeed;
	struct MaxYProbingSpeed { typedef Iterator<t::CSpeedValueType> iterator; };
	MemberElement<t::CSpeedValueType, _altova_mi_t_altova_CCMMSpeedsType_altova_MaxZProbingSpeed> MaxZProbingSpeed;
	struct MaxZProbingSpeed { typedef Iterator<t::CSpeedValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCMMSpeedsType
