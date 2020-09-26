#pragma once



namespace qif191
{

namespace t
{	

class CSurfaceCoreBaseType : public TypeBase
{
public:
	QIF191_EXPORT CSurfaceCoreBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSurfaceCoreBaseType(CSurfaceCoreBaseType const& init);
	void operator=(CSurfaceCoreBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSurfaceCoreBaseType); }
	MemberAttribute<string_type,_altova_mi_t_altova_CSurfaceCoreBaseType_altova_Form, 1, 6> Form;	// Form CAttr23CoreEnumType
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSurfaceCoreBaseType
