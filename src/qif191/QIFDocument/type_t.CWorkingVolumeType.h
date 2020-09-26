#pragma once



namespace qif191
{

namespace t
{	

class CWorkingVolumeType : public TypeBase
{
public:
	QIF191_EXPORT CWorkingVolumeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CWorkingVolumeType(CWorkingVolumeType const& init);
	void operator=(CWorkingVolumeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CWorkingVolumeType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CWorkingVolumeType_altova_XAxisLength> XAxisLength;
	struct XAxisLength { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CWorkingVolumeType_altova_YAxisLength> YAxisLength;
	struct YAxisLength { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CWorkingVolumeType_altova_ZAxisLength> ZAxisLength;
	struct ZAxisLength { typedef Iterator<t::CLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CWorkingVolumeType
