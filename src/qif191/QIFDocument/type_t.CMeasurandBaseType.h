#pragma once



namespace qif191
{

namespace t
{	

class CMeasurandBaseType : public TypeBase
{
public:
	QIF191_EXPORT CMeasurandBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CMeasurandBaseType(CMeasurandBaseType const& init);
	void operator=(CMeasurandBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CMeasurandBaseType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CMeasurandBaseType_altova_id, 0, 0> id;	// id CQIFIdType
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CMeasurandBaseType
