#pragma once



namespace qif191
{

namespace t
{	

class CLocationOnDrawingType : public TypeBase
{
public:
	QIF191_EXPORT CLocationOnDrawingType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLocationOnDrawingType(CLocationOnDrawingType const& init);
	void operator=(CLocationOnDrawingType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLocationOnDrawingType); }
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CLocationOnDrawingType_altova_DrawingId> DrawingId;
	struct DrawingId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CLocationOnDrawingType_altova_SheetNumber> SheetNumber;
	struct SheetNumber { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CLocationOnDrawingType_altova_DrawingZone> DrawingZone;
	struct DrawingZone { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CLocationOnDrawingType_altova_ModelId> ModelId;
	struct ModelId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CLocationOnDrawingType_altova_View> View;
	struct View { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CLocationOnDrawingType_altova_ViewId> ViewId;
	struct ViewId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLocationOnDrawingType
