#pragma once



namespace qif191
{

namespace t
{	

class CMeasuredCharacteristicsType : public TypeBase
{
public:
	QIF191_EXPORT CMeasuredCharacteristicsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CMeasuredCharacteristicsType(CMeasuredCharacteristicsType const& init);
	void operator=(CMeasuredCharacteristicsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CMeasuredCharacteristicsType); }
	MemberElement<t::CCharacteristicActualsType, _altova_mi_t_altova_CMeasuredCharacteristicsType_altova_CharacteristicActuals> CharacteristicActuals;
	struct CharacteristicActuals { typedef Iterator<t::CCharacteristicActualsType> iterator; };
	MemberElement<t::CCharacteristicGroupStatusesType, _altova_mi_t_altova_CMeasuredCharacteristicsType_altova_CharacteristicGroupStatuses> CharacteristicGroupStatuses;
	struct CharacteristicGroupStatuses { typedef Iterator<t::CCharacteristicGroupStatusesType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CMeasuredCharacteristicsType
