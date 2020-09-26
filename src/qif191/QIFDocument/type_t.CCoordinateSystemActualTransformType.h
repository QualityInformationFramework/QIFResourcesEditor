#pragma once



namespace qif191
{

namespace t
{	

class CCoordinateSystemActualTransformType : public TypeBase
{
public:
	QIF191_EXPORT CCoordinateSystemActualTransformType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCoordinateSystemActualTransformType(CCoordinateSystemActualTransformType const& init);
	void operator=(CCoordinateSystemActualTransformType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCoordinateSystemActualTransformType); }
	MemberElement<t::CTransformMatrixType, _altova_mi_t_altova_CCoordinateSystemActualTransformType_altova_ActualTransform> ActualTransform;
	struct ActualTransform { typedef Iterator<t::CTransformMatrixType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CCoordinateSystemActualTransformType_altova_CoordinateSystemId> CoordinateSystemId;
	struct CoordinateSystemId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCoordinateSystemActualTransformType
