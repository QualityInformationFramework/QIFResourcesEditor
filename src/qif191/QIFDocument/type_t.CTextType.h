#pragma once



namespace qif191
{

namespace t
{	

class CTextType : public TypeBase
{
public:
	QIF191_EXPORT CTextType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTextType(CTextType const& init);
	void operator=(CTextType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTextType); }
	MemberElement<xs::CstringType, _altova_mi_t_altova_CTextType_altova_Data> Data;
	struct Data { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<t::CPoint2dSimpleTypeType, _altova_mi_t_altova_CTextType_altova_XY> XY;
	struct XY { typedef Iterator<t::CPoint2dSimpleTypeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTextType
