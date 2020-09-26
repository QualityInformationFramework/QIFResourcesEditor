#pragma once



namespace qif191
{

namespace t
{	

class CCharacteristicDirectionalZoneLimitType : public TypeBase
{
public:
	QIF191_EXPORT CCharacteristicDirectionalZoneLimitType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCharacteristicDirectionalZoneLimitType(CCharacteristicDirectionalZoneLimitType const& init);
	void operator=(CCharacteristicDirectionalZoneLimitType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCharacteristicDirectionalZoneLimitType); }
	MemberElement<t::CPointWithNameType, _altova_mi_t_altova_CCharacteristicDirectionalZoneLimitType_altova_FromPoint> FromPoint;
	struct FromPoint { typedef Iterator<t::CPointWithNameType> iterator; };
	MemberElement<t::CPointWithNameType, _altova_mi_t_altova_CCharacteristicDirectionalZoneLimitType_altova_ToPoint> ToPoint;
	struct ToPoint { typedef Iterator<t::CPointWithNameType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CCharacteristicDirectionalZoneLimitType_altova_StartDirection> StartDirection;
	struct StartDirection { typedef Iterator<t::CUnitVectorType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CCharacteristicDirectionalZoneLimitType_altova_PlaneNormal> PlaneNormal;
	struct PlaneNormal { typedef Iterator<t::CUnitVectorType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCharacteristicDirectionalZoneLimitType
