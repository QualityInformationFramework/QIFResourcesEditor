#pragma once



namespace qif191
{

namespace t
{	

class CPointIndexType : public TypeBase
{
public:
	QIF191_EXPORT CPointIndexType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointIndexType(CPointIndexType const& init);
	void operator=(CPointIndexType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointIndexType); }
	MemberElement<xs::CpositiveIntegerType, _altova_mi_t_altova_CPointIndexType_altova_Single> Single;
	struct Single { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	MemberElement<t::CPointRangeType, _altova_mi_t_altova_CPointIndexType_altova_Range> Range;
	struct Range { typedef Iterator<t::CPointRangeType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CPointIndexType_altova_All> All;
	struct All { typedef Iterator<xs::CtokenType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointIndexType
