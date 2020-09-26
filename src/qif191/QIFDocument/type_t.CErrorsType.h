#pragma once



namespace qif191
{

namespace t
{	

class CErrorsType : public TypeBase
{
public:
	QIF191_EXPORT CErrorsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CErrorsType(CErrorsType const& init);
	void operator=(CErrorsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CErrorsType); }
	MemberElement<xs::CstringType, _altova_mi_t_altova_CErrorsType_altova_Error> Error;
	struct Error { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CErrorsType
