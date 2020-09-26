#pragma once



namespace qif191
{

namespace t
{	

class CPredecessorsType : public TypeBase
{
public:
	QIF191_EXPORT CPredecessorsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPredecessorsType(CPredecessorsType const& init);
	void operator=(CPredecessorsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPredecessorsType); }
	MemberElement<xs::CpositiveIntegerType, _altova_mi_t_altova_CPredecessorsType_altova_Predecessor> Predecessor;
	struct Predecessor { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPredecessorsType
