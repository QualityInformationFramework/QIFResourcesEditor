#pragma once

#include "type_t.CFeatureNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CThreadedFeatureNominalType : public ::qif191::t::CFeatureNominalBaseType
{
public:
	QIF191_EXPORT CThreadedFeatureNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CThreadedFeatureNominalType(CThreadedFeatureNominalType const& init);
	void operator=(CThreadedFeatureNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CThreadedFeatureNominalType); }
	MemberElement<t::CAxisType, _altova_mi_t_altova_CThreadedFeatureNominalType_altova_Axis> Axis;
	struct Axis { typedef Iterator<t::CAxisType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CThreadedFeatureNominalType
