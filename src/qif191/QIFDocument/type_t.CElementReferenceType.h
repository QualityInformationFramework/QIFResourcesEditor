#pragma once



namespace qif191
{

namespace t
{	

class CElementReferenceType : public TypeBase
{
public:
	QIF191_EXPORT CElementReferenceType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CElementReferenceType(CElementReferenceType const& init);
	void operator=(CElementReferenceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CElementReferenceType); }
	MemberElement<t::CQIFReferenceType, _altova_mi_t_altova_CElementReferenceType_altova_Id> Id;
	struct Id { typedef Iterator<t::CQIFReferenceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CElementReferenceType
