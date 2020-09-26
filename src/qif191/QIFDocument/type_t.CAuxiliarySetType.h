#pragma once



namespace qif191
{

namespace t
{	

class CAuxiliarySetType : public TypeBase
{
public:
	QIF191_EXPORT CAuxiliarySetType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAuxiliarySetType(CAuxiliarySetType const& init);
	void operator=(CAuxiliarySetType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAuxiliarySetType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CAuxiliarySetType_altova_N, 0, 0> N;	// N CNaturalType
	MemberElement<t::CAuxiliaryBaseType, _altova_mi_t_altova_CAuxiliarySetType_altova_Auxiliary> Auxiliary;
	struct Auxiliary { typedef Iterator<t::CAuxiliaryBaseType> iterator; };
	MemberElement<t::CLineAuxiliaryType, _altova_mi_t_altova_CAuxiliarySetType_altova_LineAuxiliary> LineAuxiliary;
	struct LineAuxiliary { typedef Iterator<t::CLineAuxiliaryType> iterator; };
	MemberElement<t::CPlaneClippingType, _altova_mi_t_altova_CAuxiliarySetType_altova_PlaneClipping> PlaneClipping;
	struct PlaneClipping { typedef Iterator<t::CPlaneClippingType> iterator; };
	MemberElement<t::CPlaneReferenceType, _altova_mi_t_altova_CAuxiliarySetType_altova_PlaneReference> PlaneReference;
	struct PlaneReference { typedef Iterator<t::CPlaneReferenceType> iterator; };
	MemberElement<t::CPointAuxiliaryType, _altova_mi_t_altova_CAuxiliarySetType_altova_PointAuxiliary> PointAuxiliary;
	struct PointAuxiliary { typedef Iterator<t::CPointAuxiliaryType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAuxiliarySetType
