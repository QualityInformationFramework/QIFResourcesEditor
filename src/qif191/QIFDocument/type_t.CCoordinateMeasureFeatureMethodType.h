#pragma once

#include "type_t.CMeasureFeatureMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CCoordinateMeasureFeatureMethodType : public ::qif191::t::CMeasureFeatureMethodBaseType
{
public:
	QIF191_EXPORT CCoordinateMeasureFeatureMethodType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCoordinateMeasureFeatureMethodType(CCoordinateMeasureFeatureMethodType const& init);
	void operator=(CCoordinateMeasureFeatureMethodType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCoordinateMeasureFeatureMethodType); }
	MemberElement<xs::CpositiveIntegerType, _altova_mi_t_altova_CCoordinateMeasureFeatureMethodType_altova_NumberOfMeasurementPoints> NumberOfMeasurementPoints;
	struct NumberOfMeasurementPoints { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCoordinateMeasureFeatureMethodType
