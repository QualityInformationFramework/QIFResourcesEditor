#pragma once



namespace qif191
{

namespace t
{	

class CPrintedDrawingType : public TypeBase
{
public:
	QIF191_EXPORT CPrintedDrawingType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPrintedDrawingType(CPrintedDrawingType const& init);
	void operator=(CPrintedDrawingType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPrintedDrawingType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CPrintedDrawingType_altova_id, 0, 0> id;	// id CQIFIdType
	MemberElement<xs::CstringType, _altova_mi_t_altova_CPrintedDrawingType_altova_Name> Name;
	struct Name { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CPrintedDrawingType_altova_Version> Version;
	struct Version { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CPrintedDrawingType_altova_Description> Description;
	struct Description { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<t::CAuthorType, _altova_mi_t_altova_CPrintedDrawingType_altova_Author> Author;
	struct Author { typedef Iterator<t::CAuthorType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CPrintedDrawingType_altova_DrawingNumber> DrawingNumber;
	struct DrawingNumber { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CPrintedDrawingType_altova_AdditionalChanges> AdditionalChanges;
	struct AdditionalChanges { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CPrintedDrawingType_altova_Location> Location;
	struct Location { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPrintedDrawingType
