#pragma once



namespace qif191
{

namespace t
{	

class CSamplingIntervalType : public TypeBase
{
public:
	QIF191_EXPORT CSamplingIntervalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSamplingIntervalType(CSamplingIntervalType const& init);
	void operator=(CSamplingIntervalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSamplingIntervalType); }
	MemberElement<t::CSamplingIntervalEnumTypeType, _altova_mi_t_altova_CSamplingIntervalType_altova_SamplingIntervalEnum> SamplingIntervalEnum;
	struct SamplingIntervalEnum { typedef Iterator<t::CSamplingIntervalEnumTypeType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CSamplingIntervalType_altova_OtherSamplingInterval> OtherSamplingInterval;
	struct OtherSamplingInterval { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSamplingIntervalType
