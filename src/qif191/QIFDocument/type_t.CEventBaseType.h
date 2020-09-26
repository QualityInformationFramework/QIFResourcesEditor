#pragma once



namespace qif191
{

namespace t
{	

class CEventBaseType : public TypeBase
{
public:
	QIF191_EXPORT CEventBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CEventBaseType(CEventBaseType const& init);
	void operator=(CEventBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CEventBaseType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CEventBaseType_altova_id, 0, 0> id;	// id CQIFIdType
	MemberElement<xs::CstringType, _altova_mi_t_altova_CEventBaseType_altova_Description> Description;
	struct Description { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CEventBaseType
