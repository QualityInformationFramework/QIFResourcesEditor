#pragma once



namespace qif191
{

namespace t
{	

class CForceToleranceType : public TypeBase
{
public:
	QIF191_EXPORT CForceToleranceType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CForceToleranceType(CForceToleranceType const& init);
	void operator=(CForceToleranceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CForceToleranceType); }
	MemberElement<t::CForceValueType, _altova_mi_t_altova_CForceToleranceType_altova_MaxValue> MaxValue;
	struct MaxValue { typedef Iterator<t::CForceValueType> iterator; };
	MemberElement<t::CForceValueType, _altova_mi_t_altova_CForceToleranceType_altova_MinValue> MinValue;
	struct MinValue { typedef Iterator<t::CForceValueType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CForceToleranceType_altova_DefinedAsLimit> DefinedAsLimit;
	struct DefinedAsLimit { typedef Iterator<xs::CbooleanType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CForceToleranceType
