#pragma once



namespace qif191
{

namespace t
{	

class CDatumTargetDefinitionsType : public TypeBase
{
public:
	QIF191_EXPORT CDatumTargetDefinitionsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDatumTargetDefinitionsType(CDatumTargetDefinitionsType const& init);
	void operator=(CDatumTargetDefinitionsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CDatumTargetDefinitionsType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CDatumTargetDefinitionsType_altova_N, 0, 0> N;	// N CunsignedInt
	MemberElement<t::CDatumTargetDefinitionBaseType, _altova_mi_t_altova_CDatumTargetDefinitionsType_altova_DatumTarget> DatumTarget;
	struct DatumTarget { typedef Iterator<t::CDatumTargetDefinitionBaseType> iterator; };
	MemberElement<t::CDatumTargetCircularAreaDefinitionType, _altova_mi_t_altova_CDatumTargetDefinitionsType_altova_DatumTargetCircularAreaDefinition> DatumTargetCircularAreaDefinition;
	struct DatumTargetCircularAreaDefinition { typedef Iterator<t::CDatumTargetCircularAreaDefinitionType> iterator; };
	MemberElement<t::CDatumTargetCircularLineDefinitionType, _altova_mi_t_altova_CDatumTargetDefinitionsType_altova_DatumTargetCircularLineDefinition> DatumTargetCircularLineDefinition;
	struct DatumTargetCircularLineDefinition { typedef Iterator<t::CDatumTargetCircularLineDefinitionType> iterator; };
	MemberElement<t::CDatumTargetCylindricalAreaDefinitionType, _altova_mi_t_altova_CDatumTargetDefinitionsType_altova_DatumTargetCylindricalAreaDefinition> DatumTargetCylindricalAreaDefinition;
	struct DatumTargetCylindricalAreaDefinition { typedef Iterator<t::CDatumTargetCylindricalAreaDefinitionType> iterator; };
	MemberElement<t::CDatumTargetIrregularAreaDefinitionType, _altova_mi_t_altova_CDatumTargetDefinitionsType_altova_DatumTargetIrregularAreaDefinition> DatumTargetIrregularAreaDefinition;
	struct DatumTargetIrregularAreaDefinition { typedef Iterator<t::CDatumTargetIrregularAreaDefinitionType> iterator; };
	MemberElement<t::CDatumTargetLineDefinitionType, _altova_mi_t_altova_CDatumTargetDefinitionsType_altova_DatumTargetLineDefinition> DatumTargetLineDefinition;
	struct DatumTargetLineDefinition { typedef Iterator<t::CDatumTargetLineDefinitionType> iterator; };
	MemberElement<t::CDatumTargetPointDefinitionType, _altova_mi_t_altova_CDatumTargetDefinitionsType_altova_DatumTargetPointDefinition> DatumTargetPointDefinition;
	struct DatumTargetPointDefinition { typedef Iterator<t::CDatumTargetPointDefinitionType> iterator; };
	MemberElement<t::CDatumTargetRectangularAreaDefinitionType, _altova_mi_t_altova_CDatumTargetDefinitionsType_altova_DatumTargetRectangularAreaDefinition> DatumTargetRectangularAreaDefinition;
	struct DatumTargetRectangularAreaDefinition { typedef Iterator<t::CDatumTargetRectangularAreaDefinitionType> iterator; };
	MemberElement<t::CDatumTargetSphereDefinitionType, _altova_mi_t_altova_CDatumTargetDefinitionsType_altova_DatumTargetSphereDefinition> DatumTargetSphereDefinition;
	struct DatumTargetSphereDefinition { typedef Iterator<t::CDatumTargetSphereDefinitionType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDatumTargetDefinitionsType
