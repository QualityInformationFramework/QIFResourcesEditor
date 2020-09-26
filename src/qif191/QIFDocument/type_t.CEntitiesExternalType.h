#pragma once



namespace qif191
{

namespace t
{	

class CEntitiesExternalType : public TypeBase
{
public:
	QIF191_EXPORT CEntitiesExternalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CEntitiesExternalType(CEntitiesExternalType const& init);
	void operator=(CEntitiesExternalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CEntitiesExternalType); }
	MemberElement<t::CEntityExternalType, _altova_mi_t_altova_CEntitiesExternalType_altova_Entity> Entity;
	struct Entity { typedef Iterator<t::CEntityExternalType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CEntitiesExternalType
