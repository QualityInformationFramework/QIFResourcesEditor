#pragma once



namespace qif191
{

namespace t
{	

class CTransformListType : public TypeBase
{
public:
	QIF191_EXPORT CTransformListType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTransformListType(CTransformListType const& init);
	void operator=(CTransformListType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTransformListType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CTransformListType_altova_N, 0, 0> N;	// N CunsignedInt
	MemberElement<t::CTransformInstanceType, _altova_mi_t_altova_CTransformListType_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CTransformInstanceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTransformListType
