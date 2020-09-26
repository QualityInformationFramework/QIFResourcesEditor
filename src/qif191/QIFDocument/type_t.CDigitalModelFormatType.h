#pragma once



namespace qif191
{

namespace t
{	

class CDigitalModelFormatType : public TypeBase
{
public:
	QIF191_EXPORT CDigitalModelFormatType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDigitalModelFormatType(CDigitalModelFormatType const& init);
	void operator=(CDigitalModelFormatType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CDigitalModelFormatType); }
	MemberElement<t::CDigitalModelFormatEnumTypeType, _altova_mi_t_altova_CDigitalModelFormatType_altova_DigitalModelFormatEnum> DigitalModelFormatEnum;
	struct DigitalModelFormatEnum { typedef Iterator<t::CDigitalModelFormatEnumTypeType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CDigitalModelFormatType_altova_OtherDigitalModelFormat> OtherDigitalModelFormat;
	struct OtherDigitalModelFormat { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDigitalModelFormatType
