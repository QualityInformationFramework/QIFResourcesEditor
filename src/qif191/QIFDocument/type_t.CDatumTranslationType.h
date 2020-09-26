#pragma once



namespace qif191
{

namespace t
{	

class CDatumTranslationType : public TypeBase
{
public:
	QIF191_EXPORT CDatumTranslationType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDatumTranslationType(CDatumTranslationType const& init);
	void operator=(CDatumTranslationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CDatumTranslationType); }
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CDatumTranslationType_altova_DatumTranslationAllowed> DatumTranslationAllowed;
	struct DatumTranslationAllowed { typedef Iterator<xs::CbooleanType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDatumTranslationType
