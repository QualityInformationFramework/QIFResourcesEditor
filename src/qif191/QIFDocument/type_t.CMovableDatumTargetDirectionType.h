#pragma once



namespace qif191
{

namespace t
{	

class CMovableDatumTargetDirectionType : public TypeBase
{
public:
	QIF191_EXPORT CMovableDatumTargetDirectionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CMovableDatumTargetDirectionType(CMovableDatumTargetDirectionType const& init);
	void operator=(CMovableDatumTargetDirectionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CMovableDatumTargetDirectionType); }
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CMovableDatumTargetDirectionType_altova_DatumTargetTranslationDirection> DatumTargetTranslationDirection;
	struct DatumTargetTranslationDirection { typedef Iterator<t::CUnitVectorType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CMovableDatumTargetDirectionType
