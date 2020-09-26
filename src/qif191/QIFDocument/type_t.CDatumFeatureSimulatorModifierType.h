#pragma once



namespace qif191
{

namespace t
{	

class CDatumFeatureSimulatorModifierType : public TypeBase
{
public:
	QIF191_EXPORT CDatumFeatureSimulatorModifierType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDatumFeatureSimulatorModifierType(CDatumFeatureSimulatorModifierType const& init);
	void operator=(CDatumFeatureSimulatorModifierType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CDatumFeatureSimulatorModifierType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CDatumFeatureSimulatorModifierType_altova_LinearSize> LinearSize;
	struct LinearSize { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CDatumFeatureSimulatorModifierType_altova_DiametricalSize> DiametricalSize;
	struct DiametricalSize { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CDatumFeatureSimulatorModifierType_altova_BasicSize> BasicSize;
	struct BasicSize { typedef Iterator<xs::CtokenType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDatumFeatureSimulatorModifierType
