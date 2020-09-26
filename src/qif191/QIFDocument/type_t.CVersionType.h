#pragma once



namespace qif191
{

namespace t
{	

class CVersionType : public TypeBase
{
public:
	QIF191_EXPORT CVersionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CVersionType(CVersionType const& init);
	void operator=(CVersionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CVersionType); }
	MemberElement<t::CQPIdReferenceTypeType, _altova_mi_t_altova_CVersionType_altova_VersionQPId> VersionQPId;
	struct VersionQPId { typedef Iterator<t::CQPIdReferenceTypeType> iterator; };
	MemberElement<xs::CdateTimeType, _altova_mi_t_altova_CVersionType_altova_TimeCreated> TimeCreated;
	struct TimeCreated { typedef Iterator<xs::CdateTimeType> iterator; };
	MemberElement<t::CSignOffsType, _altova_mi_t_altova_CVersionType_altova_SignOffs> SignOffs;
	struct SignOffs { typedef Iterator<t::CSignOffsType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CVersionType
