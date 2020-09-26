#pragma once



namespace qif191
{

namespace t
{	

class CTargetPointsActualType : public TypeBase
{
public:
	QIF191_EXPORT CTargetPointsActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTargetPointsActualType(CTargetPointsActualType const& init);
	void operator=(CTargetPointsActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTargetPointsActualType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CTargetPointsActualType_altova_linearUnit, 0, 0> linearUnit;	// linearUnit Ctoken

	MemberAttribute<unsigned __int64,_altova_mi_t_altova_CTargetPointsActualType_altova_decimalPlaces, 0, 0> decimalPlaces;	// decimalPlaces CnonNegativeInteger

	MemberAttribute<unsigned __int64,_altova_mi_t_altova_CTargetPointsActualType_altova_significantFigures, 0, 0> significantFigures;	// significantFigures CnonNegativeInteger
	MemberAttribute<string_type,_altova_mi_t_altova_CTargetPointsActualType_altova_validity, 1, 5> validity;	// validity CValidityEnumType

	MemberAttribute<unsigned __int64,_altova_mi_t_altova_CTargetPointsActualType_altova_xDecimalPlaces, 0, 0> xDecimalPlaces;	// xDecimalPlaces CnonNegativeInteger

	MemberAttribute<unsigned __int64,_altova_mi_t_altova_CTargetPointsActualType_altova_xSignificantFigures, 0, 0> xSignificantFigures;	// xSignificantFigures CnonNegativeInteger
	MemberAttribute<string_type,_altova_mi_t_altova_CTargetPointsActualType_altova_xValidity, 1, 5> xValidity;	// xValidity CValidityEnumType

	MemberAttribute<unsigned __int64,_altova_mi_t_altova_CTargetPointsActualType_altova_yDecimalPlaces, 0, 0> yDecimalPlaces;	// yDecimalPlaces CnonNegativeInteger

	MemberAttribute<unsigned __int64,_altova_mi_t_altova_CTargetPointsActualType_altova_ySignificantFigures, 0, 0> ySignificantFigures;	// ySignificantFigures CnonNegativeInteger
	MemberAttribute<string_type,_altova_mi_t_altova_CTargetPointsActualType_altova_yValidity, 1, 5> yValidity;	// yValidity CValidityEnumType

	MemberAttribute<unsigned __int64,_altova_mi_t_altova_CTargetPointsActualType_altova_zDecimalPlaces, 0, 0> zDecimalPlaces;	// zDecimalPlaces CnonNegativeInteger

	MemberAttribute<unsigned __int64,_altova_mi_t_altova_CTargetPointsActualType_altova_zSignificantFigures, 0, 0> zSignificantFigures;	// zSignificantFigures CnonNegativeInteger
	MemberAttribute<string_type,_altova_mi_t_altova_CTargetPointsActualType_altova_zValidity, 1, 5> zValidity;	// zValidity CValidityEnumType

	MemberAttribute<double,_altova_mi_t_altova_CTargetPointsActualType_altova_combinedUncertainty, 0, 0> combinedUncertainty;	// combinedUncertainty Cdecimal

	MemberAttribute<double,_altova_mi_t_altova_CTargetPointsActualType_altova_meanError, 0, 0> meanError;	// meanError Cdecimal

	MemberAttribute<double,_altova_mi_t_altova_CTargetPointsActualType_altova_xCombinedUncertainty, 0, 0> xCombinedUncertainty;	// xCombinedUncertainty Cdecimal

	MemberAttribute<double,_altova_mi_t_altova_CTargetPointsActualType_altova_xMeanError, 0, 0> xMeanError;	// xMeanError Cdecimal

	MemberAttribute<double,_altova_mi_t_altova_CTargetPointsActualType_altova_yCombinedUncertainty, 0, 0> yCombinedUncertainty;	// yCombinedUncertainty Cdecimal

	MemberAttribute<double,_altova_mi_t_altova_CTargetPointsActualType_altova_yMeanError, 0, 0> yMeanError;	// yMeanError Cdecimal

	MemberAttribute<double,_altova_mi_t_altova_CTargetPointsActualType_altova_zCombinedUncertainty, 0, 0> zCombinedUncertainty;	// zCombinedUncertainty Cdecimal

	MemberAttribute<double,_altova_mi_t_altova_CTargetPointsActualType_altova_zMeanError, 0, 0> zMeanError;	// zMeanError Cdecimal
	MemberElement<t::CTargetPointActualType, _altova_mi_t_altova_CTargetPointsActualType_altova_TargetPoint> TargetPoint;
	struct TargetPoint { typedef Iterator<t::CTargetPointActualType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTargetPointsActualType
