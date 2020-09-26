#pragma once



namespace qif191
{

namespace t
{	

class CElementReferenceFullType : public TypeBase
{
public:
	QIF191_EXPORT CElementReferenceFullType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CElementReferenceFullType(CElementReferenceFullType const& init);
	void operator=(CElementReferenceFullType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CElementReferenceFullType); }
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CElementReferenceFullType_altova_Id> Id;
	struct Id { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CElementReferenceFullType
