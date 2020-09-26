#pragma once



namespace qif191
{

namespace t
{	

class CTableErrorsType : public TypeBase
{
public:
	QIF191_EXPORT CTableErrorsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTableErrorsType(CTableErrorsType const& init);
	void operator=(CTableErrorsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTableErrorsType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CTableErrorsType_altova_AxialError> AxialError;
	struct AxialError { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CTableErrorsType_altova_RadialError> RadialError;
	struct RadialError { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CTableErrorsType_altova_TangentialError> TangentialError;
	struct TangentialError { typedef Iterator<t::CLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTableErrorsType
