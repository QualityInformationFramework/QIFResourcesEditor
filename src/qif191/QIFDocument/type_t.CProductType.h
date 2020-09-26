#pragma once



namespace qif191
{

namespace t
{	

class CProductType : public TypeBase
{
public:
	QIF191_EXPORT CProductType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CProductType(CProductType const& init);
	void operator=(CProductType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CProductType); }
	MemberElement<t::CInternalHeaderType, _altova_mi_t_altova_CProductType_altova_Header> Header;
	struct Header { typedef Iterator<t::CInternalHeaderType> iterator; };
	MemberElement<t::CGeometrySetType, _altova_mi_t_altova_CProductType_altova_GeometrySet> GeometrySet;
	struct GeometrySet { typedef Iterator<t::CGeometrySetType> iterator; };
	MemberElement<t::CTopologySetType, _altova_mi_t_altova_CProductType_altova_TopologySet> TopologySet;
	struct TopologySet { typedef Iterator<t::CTopologySetType> iterator; };
	MemberElement<t::CPartNoteSetType, _altova_mi_t_altova_CProductType_altova_PartNoteSet> PartNoteSet;
	struct PartNoteSet { typedef Iterator<t::CPartNoteSetType> iterator; };
	MemberElement<t::CViewSetType, _altova_mi_t_altova_CProductType_altova_ViewSet> ViewSet;
	struct ViewSet { typedef Iterator<t::CViewSetType> iterator; };
	MemberElement<t::CLayerSetType, _altova_mi_t_altova_CProductType_altova_LayerSet> LayerSet;
	struct LayerSet { typedef Iterator<t::CLayerSetType> iterator; };
	MemberElement<t::CCoordinateSystemSetType, _altova_mi_t_altova_CProductType_altova_CoordinateSystemSet> CoordinateSystemSet;
	struct CoordinateSystemSet { typedef Iterator<t::CCoordinateSystemSetType> iterator; };
	MemberElement<t::CVisualizationSetType, _altova_mi_t_altova_CProductType_altova_VisualizationSet> VisualizationSet;
	struct VisualizationSet { typedef Iterator<t::CVisualizationSetType> iterator; };
	MemberElement<t::CAuxiliarySetType, _altova_mi_t_altova_CProductType_altova_AuxiliarySet> AuxiliarySet;
	struct AuxiliarySet { typedef Iterator<t::CAuxiliarySetType> iterator; };
	MemberElement<t::CPartSetType, _altova_mi_t_altova_CProductType_altova_PartSet> PartSet;
	struct PartSet { typedef Iterator<t::CPartSetType> iterator; };
	MemberElement<t::CAssemblySetType, _altova_mi_t_altova_CProductType_altova_AssemblySet> AssemblySet;
	struct AssemblySet { typedef Iterator<t::CAssemblySetType> iterator; };
	MemberElement<t::CComponentSetType, _altova_mi_t_altova_CProductType_altova_ComponentSet> ComponentSet;
	struct ComponentSet { typedef Iterator<t::CComponentSetType> iterator; };
	MemberElement<t::CElementReferenceType, _altova_mi_t_altova_CProductType_altova_RootPart> RootPart;
	struct RootPart { typedef Iterator<t::CElementReferenceType> iterator; };
	MemberElement<t::CElementReferenceType, _altova_mi_t_altova_CProductType_altova_RootAssembly> RootAssembly;
	struct RootAssembly { typedef Iterator<t::CElementReferenceType> iterator; };
	MemberElement<t::CElementReferenceType, _altova_mi_t_altova_CProductType_altova_RootComponent> RootComponent;
	struct RootComponent { typedef Iterator<t::CElementReferenceType> iterator; };
	MemberElement<t::CAsmPathsType, _altova_mi_t_altova_CProductType_altova_AsmPaths> AsmPaths;
	struct AsmPaths { typedef Iterator<t::CAsmPathsType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CProductType
