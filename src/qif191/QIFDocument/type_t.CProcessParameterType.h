#pragma once



namespace qif191
{

namespace t
{	

class CProcessParameterType : public TypeBase
{
public:
	QIF191_EXPORT CProcessParameterType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CProcessParameterType(CProcessParameterType const& init);
	void operator=(CProcessParameterType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CProcessParameterType); }
	MemberElement<xs::CstringType, _altova_mi_t_altova_CProcessParameterType_altova_ParameterType> ParameterType;
	struct ParameterType { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CProcessParameterType_altova_ParameterValue> ParameterValue;
	struct ParameterValue { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CProcessParameterType
