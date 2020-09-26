#pragma once



namespace qif191
{

namespace t
{	

class CSamplingMethodType : public TypeBase
{
public:
	QIF191_EXPORT CSamplingMethodType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSamplingMethodType(CSamplingMethodType const& init);
	void operator=(CSamplingMethodType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSamplingMethodType); }
	MemberElement<xs::CpositiveIntegerType, _altova_mi_t_altova_CSamplingMethodType_altova_SampleSize> SampleSize;
	struct SampleSize { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	MemberElement<xs::CpositiveIntegerType, _altova_mi_t_altova_CSamplingMethodType_altova_SamplingPeriod> SamplingPeriod;
	struct SamplingPeriod { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	MemberElement<xs::CpositiveIntegerType, _altova_mi_t_altova_CSamplingMethodType_altova_SamplingFrequency> SamplingFrequency;
	struct SamplingFrequency { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	MemberElement<t::CSamplingIntervalType, _altova_mi_t_altova_CSamplingMethodType_altova_SamplingInterval> SamplingInterval;
	struct SamplingInterval { typedef Iterator<t::CSamplingIntervalType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSamplingMethodType
