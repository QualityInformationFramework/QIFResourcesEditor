#pragma once



namespace qif191
{

namespace t
{	

class CCharacteristicGroupStatusesType : public TypeBase
{
public:
	QIF191_EXPORT CCharacteristicGroupStatusesType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCharacteristicGroupStatusesType(CCharacteristicGroupStatusesType const& init);
	void operator=(CCharacteristicGroupStatusesType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCharacteristicGroupStatusesType); }
	MemberElement<t::CCharacteristicGroupStatusType, _altova_mi_t_altova_CCharacteristicGroupStatusesType_altova_CharacteristicGroupStatus> CharacteristicGroupStatus;
	struct CharacteristicGroupStatus { typedef Iterator<t::CCharacteristicGroupStatusType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCharacteristicGroupStatusesType
