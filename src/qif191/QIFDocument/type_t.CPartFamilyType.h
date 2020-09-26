#pragma once



namespace qif191
{

namespace t
{	

class CPartFamilyType : public TypeBase
{
public:
	QIF191_EXPORT CPartFamilyType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPartFamilyType(CPartFamilyType const& init);
	void operator=(CPartFamilyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPartFamilyType); }
	MemberElement<t::CShapeClassType, _altova_mi_t_altova_CPartFamilyType_altova_PrimaryShapeClass> PrimaryShapeClass;
	struct PrimaryShapeClass { typedef Iterator<t::CShapeClassType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CPartFamilyType_altova_MinimumTolerance> MinimumTolerance;
	struct MinimumTolerance { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CBoundingBoxType, _altova_mi_t_altova_CPartFamilyType_altova_MinimumBoundingBox> MinimumBoundingBox;
	struct MinimumBoundingBox { typedef Iterator<t::CBoundingBoxType> iterator; };
	MemberElement<t::CManufacturingMethodType, _altova_mi_t_altova_CPartFamilyType_altova_PrimaryManufacturingMethod> PrimaryManufacturingMethod;
	struct PrimaryManufacturingMethod { typedef Iterator<t::CManufacturingMethodType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPartFamilyType
