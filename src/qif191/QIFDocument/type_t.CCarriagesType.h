#pragma once



namespace qif191
{

namespace t
{	

class CCarriagesType : public TypeBase
{
public:
	QIF191_EXPORT CCarriagesType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCarriagesType(CCarriagesType const& init);
	void operator=(CCarriagesType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCarriagesType); }
	MemberElement<t::CCarriageType, _altova_mi_t_altova_CCarriagesType_altova_Carriage> Carriage;
	struct Carriage { typedef Iterator<t::CCarriageType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCarriagesType
