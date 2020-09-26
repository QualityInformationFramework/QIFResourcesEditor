#pragma once



namespace qif191
{

namespace t
{	

class CFramesType : public TypeBase
{
public:
	QIF191_EXPORT CFramesType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFramesType(CFramesType const& init);
	void operator=(CFramesType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFramesType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CFramesType_altova_N, 0, 0> N;	// N CNaturalType
	MemberElement<t::CFrameType, _altova_mi_t_altova_CFramesType_altova_Frame> Frame;
	struct Frame { typedef Iterator<t::CFrameType> iterator; };
	MemberElement<t::CFrameCircularType, _altova_mi_t_altova_CFramesType_altova_FrameCircular> FrameCircular;
	struct FrameCircular { typedef Iterator<t::CFrameCircularType> iterator; };
	MemberElement<t::CFrameFlagType, _altova_mi_t_altova_CFramesType_altova_FrameFlag> FrameFlag;
	struct FrameFlag { typedef Iterator<t::CFrameFlagType> iterator; };
	MemberElement<t::CFrameIrregularFormType, _altova_mi_t_altova_CFramesType_altova_FrameIrregularForm> FrameIrregularForm;
	struct FrameIrregularForm { typedef Iterator<t::CFrameIrregularFormType> iterator; };
	MemberElement<t::CFrameRectangularType, _altova_mi_t_altova_CFramesType_altova_FrameRectangular> FrameRectangular;
	struct FrameRectangular { typedef Iterator<t::CFrameRectangularType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFramesType
