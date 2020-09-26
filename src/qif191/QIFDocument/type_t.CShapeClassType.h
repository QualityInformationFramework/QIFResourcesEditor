#pragma once



namespace qif191
{

namespace t
{	

class CShapeClassType : public TypeBase
{
public:
	QIF191_EXPORT CShapeClassType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CShapeClassType(CShapeClassType const& init);
	void operator=(CShapeClassType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CShapeClassType); }
	MemberElement<t::CShapeClassEnumTypeType, _altova_mi_t_altova_CShapeClassType_altova_ShapeClassEnum> ShapeClassEnum;
	struct ShapeClassEnum { typedef Iterator<t::CShapeClassEnumTypeType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CShapeClassType_altova_OtherShapeClass> OtherShapeClass;
	struct OtherShapeClass { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CShapeClassType
