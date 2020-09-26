#pragma once



namespace qif191
{

namespace t
{	

class CAsmPathType : public TypeBase
{
public:
	QIF191_EXPORT CAsmPathType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAsmPathType(CAsmPathType const& init);
	void operator=(CAsmPathType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAsmPathType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CAsmPathType_altova_id, 0, 0> id;	// id CQIFIdType
	MemberElement<t::CArrayReferenceType, _altova_mi_t_altova_CAsmPathType_altova_ComponentIds> ComponentIds;
	struct ComponentIds { typedef Iterator<t::CArrayReferenceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAsmPathType
