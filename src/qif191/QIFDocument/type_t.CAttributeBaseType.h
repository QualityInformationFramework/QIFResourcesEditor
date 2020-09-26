#pragma once



namespace qif191
{

namespace t
{	

class CAttributeBaseType : public TypeBase
{
public:
	QIF191_EXPORT CAttributeBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAttributeBaseType(CAttributeBaseType const& init);
	void operator=(CAttributeBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAttributeBaseType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CAttributeBaseType_altova_Name, 0, 0> Name;	// Name Cstring
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAttributeBaseType
