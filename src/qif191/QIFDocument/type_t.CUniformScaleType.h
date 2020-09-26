#pragma once



namespace qif191
{

namespace t
{	

class CUniformScaleType : public TypeBase
{
public:
	QIF191_EXPORT CUniformScaleType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUniformScaleType(CUniformScaleType const& init);
	void operator=(CUniformScaleType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUniformScaleType); }
	MemberElement<xs::CdecimalType, _altova_mi_t_altova_CUniformScaleType_altova_ScaleFactor> ScaleFactor;
	struct ScaleFactor { typedef Iterator<xs::CdecimalType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUniformScaleType
