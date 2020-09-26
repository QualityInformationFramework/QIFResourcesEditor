#pragma once



namespace qif191
{

namespace t
{	

class CCMMGeometryType : public TypeBase
{
public:
	QIF191_EXPORT CCMMGeometryType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCMMGeometryType(CCMMGeometryType const& init);
	void operator=(CCMMGeometryType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCMMGeometryType); }
	MemberElement<t::CCMMGeometryEnumTypeType, _altova_mi_t_altova_CCMMGeometryType_altova_CMMGeometryEnum> CMMGeometryEnum;
	struct CMMGeometryEnum { typedef Iterator<t::CCMMGeometryEnumTypeType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CCMMGeometryType_altova_OtherCMMGeometry> OtherCMMGeometry;
	struct OtherCMMGeometry { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCMMGeometryType
