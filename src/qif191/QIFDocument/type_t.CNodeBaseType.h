#pragma once



namespace qif191
{

namespace t
{	

class CNodeBaseType : public TypeBase
{
public:
	QIF191_EXPORT CNodeBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CNodeBaseType(CNodeBaseType const& init);
	void operator=(CNodeBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CNodeBaseType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CNodeBaseType_altova_Label, 0, 0> Label;	// Label Cstring
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CNodeBaseType
