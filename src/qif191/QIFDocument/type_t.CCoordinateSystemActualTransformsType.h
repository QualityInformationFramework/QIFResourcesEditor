#pragma once



namespace qif191
{

namespace t
{	

class CCoordinateSystemActualTransformsType : public TypeBase
{
public:
	QIF191_EXPORT CCoordinateSystemActualTransformsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCoordinateSystemActualTransformsType(CCoordinateSystemActualTransformsType const& init);
	void operator=(CCoordinateSystemActualTransformsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCoordinateSystemActualTransformsType); }
	MemberElement<t::CCoordinateSystemActualTransformType, _altova_mi_t_altova_CCoordinateSystemActualTransformsType_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CCoordinateSystemActualTransformType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCoordinateSystemActualTransformsType
