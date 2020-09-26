#pragma once

#include "type_t.CFeatureNominalBaseType.h"


namespace qif191
{

namespace t
{	

class COppositeLinesFeatureNominalType : public ::qif191::t::CFeatureNominalBaseType
{
public:
	QIF191_EXPORT COppositeLinesFeatureNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT COppositeLinesFeatureNominalType(COppositeLinesFeatureNominalType const& init);
	void operator=(COppositeLinesFeatureNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_COppositeLinesFeatureNominalType); }
	MemberElement<t::CPointAndVectorType, _altova_mi_t_altova_COppositeLinesFeatureNominalType_altova_CenterLine> CenterLine;
	struct CenterLine { typedef Iterator<t::CPointAndVectorType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_COppositeLinesFeatureNominalType_altova_Normal> Normal;
	struct Normal { typedef Iterator<t::CUnitVectorType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_COppositeLinesFeatureNominalType
