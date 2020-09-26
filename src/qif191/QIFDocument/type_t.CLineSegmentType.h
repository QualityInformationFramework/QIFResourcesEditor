#pragma once



namespace qif191
{

namespace t
{	

class CLineSegmentType : public TypeBase
{
public:
	QIF191_EXPORT CLineSegmentType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLineSegmentType(CLineSegmentType const& init);
	void operator=(CLineSegmentType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLineSegmentType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CLineSegmentType_altova_linearUnit, 0, 0> linearUnit;	// linearUnit Ctoken

	MemberAttribute<unsigned __int64,_altova_mi_t_altova_CLineSegmentType_altova_decimalPlaces, 0, 0> decimalPlaces;	// decimalPlaces CnonNegativeInteger

	MemberAttribute<unsigned __int64,_altova_mi_t_altova_CLineSegmentType_altova_significantFigures, 0, 0> significantFigures;	// significantFigures CnonNegativeInteger
	MemberAttribute<string_type,_altova_mi_t_altova_CLineSegmentType_altova_validity, 1, 5> validity;	// validity CValidityEnumType

	MemberAttribute<unsigned __int64,_altova_mi_t_altova_CLineSegmentType_altova_xDecimalPlaces, 0, 0> xDecimalPlaces;	// xDecimalPlaces CnonNegativeInteger

	MemberAttribute<unsigned __int64,_altova_mi_t_altova_CLineSegmentType_altova_xSignificantFigures, 0, 0> xSignificantFigures;	// xSignificantFigures CnonNegativeInteger
	MemberAttribute<string_type,_altova_mi_t_altova_CLineSegmentType_altova_xValidity, 1, 5> xValidity;	// xValidity CValidityEnumType

	MemberAttribute<unsigned __int64,_altova_mi_t_altova_CLineSegmentType_altova_yDecimalPlaces, 0, 0> yDecimalPlaces;	// yDecimalPlaces CnonNegativeInteger

	MemberAttribute<unsigned __int64,_altova_mi_t_altova_CLineSegmentType_altova_ySignificantFigures, 0, 0> ySignificantFigures;	// ySignificantFigures CnonNegativeInteger
	MemberAttribute<string_type,_altova_mi_t_altova_CLineSegmentType_altova_yValidity, 1, 5> yValidity;	// yValidity CValidityEnumType

	MemberAttribute<unsigned __int64,_altova_mi_t_altova_CLineSegmentType_altova_zDecimalPlaces, 0, 0> zDecimalPlaces;	// zDecimalPlaces CnonNegativeInteger

	MemberAttribute<unsigned __int64,_altova_mi_t_altova_CLineSegmentType_altova_zSignificantFigures, 0, 0> zSignificantFigures;	// zSignificantFigures CnonNegativeInteger
	MemberAttribute<string_type,_altova_mi_t_altova_CLineSegmentType_altova_zValidity, 1, 5> zValidity;	// zValidity CValidityEnumType
	MemberElement<t::CPointSimpleTypeType, _altova_mi_t_altova_CLineSegmentType_altova_StartPoint> StartPoint;
	struct StartPoint { typedef Iterator<t::CPointSimpleTypeType> iterator; };
	MemberElement<t::CPointSimpleTypeType, _altova_mi_t_altova_CLineSegmentType_altova_EndPoint> EndPoint;
	struct EndPoint { typedef Iterator<t::CPointSimpleTypeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLineSegmentType
