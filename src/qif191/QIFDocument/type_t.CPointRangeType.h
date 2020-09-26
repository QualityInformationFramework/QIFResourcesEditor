#pragma once



namespace qif191
{

namespace t
{	

class CPointRangeType : public TypeBase
{
public:
	QIF191_EXPORT CPointRangeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointRangeType(CPointRangeType const& init);
	void operator=(CPointRangeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointRangeType); }
	MemberElement<xs::CpositiveIntegerType, _altova_mi_t_altova_CPointRangeType_altova_Start> Start;
	struct Start { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	MemberElement<xs::CpositiveIntegerType, _altova_mi_t_altova_CPointRangeType_altova_Stop> Stop;
	struct Stop { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointRangeType
