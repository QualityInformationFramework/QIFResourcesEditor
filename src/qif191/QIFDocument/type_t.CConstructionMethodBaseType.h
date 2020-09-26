#pragma once



namespace qif191
{

namespace t
{	

class CConstructionMethodBaseType : public TypeBase
{
public:
	QIF191_EXPORT CConstructionMethodBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CConstructionMethodBaseType(CConstructionMethodBaseType const& init);
	void operator=(CConstructionMethodBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CConstructionMethodBaseType); }
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CConstructionMethodBaseType_altova_NominalsCalculated> NominalsCalculated;
	struct NominalsCalculated { typedef Iterator<xs::CbooleanType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CConstructionMethodBaseType
