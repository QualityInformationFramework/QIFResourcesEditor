#pragma once



namespace qif191
{

namespace t
{	

class CPointWithNameType : public TypeBase
{
public:
	QIF191_EXPORT CPointWithNameType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointWithNameType(CPointWithNameType const& init);
	void operator=(CPointWithNameType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointWithNameType); }
	MemberElement<t::CPointType, _altova_mi_t_altova_CPointWithNameType_altova_Point> Point;
	struct Point { typedef Iterator<t::CPointType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CPointWithNameType_altova_Name> Name;
	struct Name { typedef Iterator<xs::CtokenType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointWithNameType
