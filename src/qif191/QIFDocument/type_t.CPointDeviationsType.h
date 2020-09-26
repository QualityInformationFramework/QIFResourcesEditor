#pragma once



namespace qif191
{

namespace t
{	

class CPointDeviationsType : public TypeBase
{
public:
	QIF191_EXPORT CPointDeviationsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointDeviationsType(CPointDeviationsType const& init);
	void operator=(CPointDeviationsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointDeviationsType); }
	MemberElement<t::CPointDeviationType, _altova_mi_t_altova_CPointDeviationsType_altova_PointDeviation> PointDeviation;
	struct PointDeviation { typedef Iterator<t::CPointDeviationType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointDeviationsType
