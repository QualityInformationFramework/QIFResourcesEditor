#pragma once



namespace qif191
{

namespace t
{	

class CLinearErrorType : public TypeBase
{
public:
	QIF191_EXPORT CLinearErrorType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLinearErrorType(CLinearErrorType const& init);
	void operator=(CLinearErrorType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLinearErrorType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CLinearErrorType_altova_BaseError> BaseError;
	struct BaseError { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<xs::CdecimalType, _altova_mi_t_altova_CLinearErrorType_altova_ErrorRate> ErrorRate;
	struct ErrorRate { typedef Iterator<xs::CdecimalType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLinearErrorType
