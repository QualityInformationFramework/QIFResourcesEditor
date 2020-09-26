#pragma once



namespace qif191
{

namespace t
{	

class CCharacteristicGroupStatusType : public TypeBase
{
public:
	QIF191_EXPORT CCharacteristicGroupStatusType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCharacteristicGroupStatusType(CCharacteristicGroupStatusType const& init);
	void operator=(CCharacteristicGroupStatusType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCharacteristicGroupStatusType); }
	MemberElement<t::CCharacteristicStatusType, _altova_mi_t_altova_CCharacteristicGroupStatusType_altova_Status> Status;
	struct Status { typedef Iterator<t::CCharacteristicStatusType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CCharacteristicGroupStatusType_altova_GroupId> GroupId;
	struct GroupId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCharacteristicGroupStatusType
