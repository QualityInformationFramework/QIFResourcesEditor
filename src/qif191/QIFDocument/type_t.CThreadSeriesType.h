#pragma once



namespace qif191
{

namespace t
{	

class CThreadSeriesType : public TypeBase
{
public:
	QIF191_EXPORT CThreadSeriesType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CThreadSeriesType(CThreadSeriesType const& init);
	void operator=(CThreadSeriesType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CThreadSeriesType); }
	MemberElement<t::CThreadSeriesEnumTypeType, _altova_mi_t_altova_CThreadSeriesType_altova_ThreadSeriesEnum> ThreadSeriesEnum;
	struct ThreadSeriesEnum { typedef Iterator<t::CThreadSeriesEnumTypeType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CThreadSeriesType_altova_OtherThreadSeries> OtherThreadSeries;
	struct OtherThreadSeries { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CThreadSeriesType
