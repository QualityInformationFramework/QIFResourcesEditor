#pragma once



namespace qif191
{

namespace t
{	

class CToolsType : public TypeBase
{
public:
	QIF191_EXPORT CToolsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CToolsType(CToolsType const& init);
	void operator=(CToolsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CToolsType); }
	MemberElement<t::CToolType, _altova_mi_t_altova_CToolsType_altova_Tool> Tool;
	struct Tool { typedef Iterator<t::CToolType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CToolsType
