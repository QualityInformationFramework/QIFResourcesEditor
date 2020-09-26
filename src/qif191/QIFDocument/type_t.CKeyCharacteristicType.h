#pragma once



namespace qif191
{

namespace t
{	

class CKeyCharacteristicType : public TypeBase
{
public:
	QIF191_EXPORT CKeyCharacteristicType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CKeyCharacteristicType(CKeyCharacteristicType const& init);
	void operator=(CKeyCharacteristicType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CKeyCharacteristicType); }
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CKeyCharacteristicType_altova_Designator> Designator;
	struct Designator { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CKeyCharacteristicType_altova_Criticality> Criticality;
	struct Criticality { typedef Iterator<xs::CtokenType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CKeyCharacteristicType
