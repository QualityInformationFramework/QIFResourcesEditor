#pragma once



namespace qif191
{

namespace t
{	

class CTransformRotationType : public TypeBase
{
public:
	QIF191_EXPORT CTransformRotationType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTransformRotationType(CTransformRotationType const& init);
	void operator=(CTransformRotationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTransformRotationType); }
	MemberElement<t::CUnitVectorSimpleTypeType, _altova_mi_t_altova_CTransformRotationType_altova_XDirection> XDirection;
	struct XDirection { typedef Iterator<t::CUnitVectorSimpleTypeType> iterator; };
	MemberElement<t::CUnitVectorSimpleTypeType, _altova_mi_t_altova_CTransformRotationType_altova_YDirection> YDirection;
	struct YDirection { typedef Iterator<t::CUnitVectorSimpleTypeType> iterator; };
	MemberElement<t::CUnitVectorSimpleTypeType, _altova_mi_t_altova_CTransformRotationType_altova_ZDirection> ZDirection;
	struct ZDirection { typedef Iterator<t::CUnitVectorSimpleTypeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTransformRotationType
