#pragma once



namespace qif191
{

namespace t
{	

class CPointWithNormalBaseType : public TypeBase
{
public:
	QIF191_EXPORT CPointWithNormalBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointWithNormalBaseType(CPointWithNormalBaseType const& init);
	void operator=(CPointWithNormalBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointWithNormalBaseType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CPointWithNormalBaseType_altova_id, 0, 0> id;	// id CQIFIdType
	MemberElement<t::CPointType, _altova_mi_t_altova_CPointWithNormalBaseType_altova_Point> Point;
	struct Point { typedef Iterator<t::CPointType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CPointWithNormalBaseType_altova_Normal> Normal;
	struct Normal { typedef Iterator<t::CUnitVectorType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointWithNormalBaseType
