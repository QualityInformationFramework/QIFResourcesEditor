#pragma once



namespace qif191
{

namespace t
{	

class CArrayReferenceFullType : public TypeBase
{
public:
	QIF191_EXPORT CArrayReferenceFullType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CArrayReferenceFullType(CArrayReferenceFullType const& init);
	void operator=(CArrayReferenceFullType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CArrayReferenceFullType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CArrayReferenceFullType_altova_N, 0, 0> N;	// N CNaturalType
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CArrayReferenceFullType_altova_Id> Id;
	struct Id { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CArrayReferenceFullType
