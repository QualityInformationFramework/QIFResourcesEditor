#pragma once



namespace qif191
{

namespace t
{	

class CActionMethodsType : public TypeBase
{
public:
	QIF191_EXPORT CActionMethodsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CActionMethodsType(CActionMethodsType const& init);
	void operator=(CActionMethodsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CActionMethodsType); }
	MemberElement<t::CActionMethodBaseType, _altova_mi_t_altova_CActionMethodsType_altova_ActionMethod> ActionMethod;
	struct ActionMethod { typedef Iterator<t::CActionMethodBaseType> iterator; };
	MemberElement<t::CCoordinateMeasureFeatureMethodType, _altova_mi_t_altova_CActionMethodsType_altova_CoordinateMeasureFeatureMethod> CoordinateMeasureFeatureMethod;
	struct CoordinateMeasureFeatureMethod { typedef Iterator<t::CCoordinateMeasureFeatureMethodType> iterator; };
	MemberElement<t::CGageMeasureFeatureMethodType, _altova_mi_t_altova_CActionMethodsType_altova_GageMeasureFeatureMethod> GageMeasureFeatureMethod;
	struct GageMeasureFeatureMethod { typedef Iterator<t::CGageMeasureFeatureMethodType> iterator; };
	MemberElement<t::CManualMeasureFeatureMethodType, _altova_mi_t_altova_CActionMethodsType_altova_ManualMeasureFeatureMethod> ManualMeasureFeatureMethod;
	struct ManualMeasureFeatureMethod { typedef Iterator<t::CManualMeasureFeatureMethodType> iterator; };
	MemberElement<t::COtherMeasureFeatureMethodType, _altova_mi_t_altova_CActionMethodsType_altova_OtherMeasureFeatureMethod> OtherMeasureFeatureMethod;
	struct OtherMeasureFeatureMethod { typedef Iterator<t::COtherMeasureFeatureMethodType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CActionMethodsType
