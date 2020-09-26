#pragma once



namespace qif191
{

namespace t
{	

class CPlanElementBaseType : public TypeBase
{
public:
	QIF191_EXPORT CPlanElementBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPlanElementBaseType(CPlanElementBaseType const& init);
	void operator=(CPlanElementBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPlanElementBaseType); }
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CPlanElementBaseType_altova_WorkInstructionIds> WorkInstructionIds;
	struct WorkInstructionIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPlanElementBaseType
