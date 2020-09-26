#pragma once



namespace qif191
{

namespace t
{	

class CPMIDisplayType : public TypeBase
{
public:
	QIF191_EXPORT CPMIDisplayType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPMIDisplayType(CPMIDisplayType const& init);
	void operator=(CPMIDisplayType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPMIDisplayType); }
	MemberElement<t::CColorTypeType, _altova_mi_t_altova_CPMIDisplayType_altova_Color> Color;
	struct Color { typedef Iterator<t::CColorTypeType> iterator; };
	MemberElement<t::CPlaneXType, _altova_mi_t_altova_CPMIDisplayType_altova_Plane> Plane;
	struct Plane { typedef Iterator<t::CPlaneXType> iterator; };
	MemberElement<t::CTextsType, _altova_mi_t_altova_CPMIDisplayType_altova_Texts> Texts;
	struct Texts { typedef Iterator<t::CTextsType> iterator; };
	MemberElement<t::CLeaderType, _altova_mi_t_altova_CPMIDisplayType_altova_Leader> Leader;
	struct Leader { typedef Iterator<t::CLeaderType> iterator; };
	MemberElement<t::CLeaderCircularType, _altova_mi_t_altova_CPMIDisplayType_altova_LeaderCircular> LeaderCircular;
	struct LeaderCircular { typedef Iterator<t::CLeaderCircularType> iterator; };
	MemberElement<t::CLeaderDoubleHeadType, _altova_mi_t_altova_CPMIDisplayType_altova_LeaderDoubleHead> LeaderDoubleHead;
	struct LeaderDoubleHead { typedef Iterator<t::CLeaderDoubleHeadType> iterator; };
	MemberElement<t::CLeaderDoubleHeadCircularType, _altova_mi_t_altova_CPMIDisplayType_altova_LeaderDoubleHeadCircular> LeaderDoubleHeadCircular;
	struct LeaderDoubleHeadCircular { typedef Iterator<t::CLeaderDoubleHeadCircularType> iterator; };
	MemberElement<t::CLeaderDoubleHeadExtendType, _altova_mi_t_altova_CPMIDisplayType_altova_LeaderDoubleHeadExtend> LeaderDoubleHeadExtend;
	struct LeaderDoubleHeadExtend { typedef Iterator<t::CLeaderDoubleHeadExtendType> iterator; };
	MemberElement<t::CLeaderExtendType, _altova_mi_t_altova_CPMIDisplayType_altova_LeaderExtend> LeaderExtend;
	struct LeaderExtend { typedef Iterator<t::CLeaderExtendType> iterator; };
	MemberElement<t::CWitnessLinesType, _altova_mi_t_altova_CPMIDisplayType_altova_WitnessLines> WitnessLines;
	struct WitnessLines { typedef Iterator<t::CWitnessLinesType> iterator; };
	MemberElement<t::CFramesType, _altova_mi_t_altova_CPMIDisplayType_altova_Frames> Frames;
	struct Frames { typedef Iterator<t::CFramesType> iterator; };
	MemberElement<t::CBalloonType, _altova_mi_t_altova_CPMIDisplayType_altova_Balloon> Balloon;
	struct Balloon { typedef Iterator<t::CBalloonType> iterator; };
	MemberElement<t::CElementReferenceFullType, _altova_mi_t_altova_CPMIDisplayType_altova_Reference> Reference;
	struct Reference { typedef Iterator<t::CElementReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPMIDisplayType
