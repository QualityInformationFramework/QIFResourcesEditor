#pragma once



namespace qif191
{

namespace t
{	

class CLesserErrorType : public TypeBase
{
public:
	QIF191_EXPORT CLesserErrorType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLesserErrorType(CLesserErrorType const& init);
	void operator=(CLesserErrorType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLesserErrorType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CLesserErrorType_altova_MaxErrorConstant> MaxErrorConstant;
	struct MaxErrorConstant { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CLinearErrorType, _altova_mi_t_altova_CLesserErrorType_altova_LinearError> LinearError;
	struct LinearError { typedef Iterator<t::CLinearErrorType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLesserErrorType
