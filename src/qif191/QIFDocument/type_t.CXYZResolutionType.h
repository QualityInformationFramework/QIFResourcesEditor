#pragma once



namespace qif191
{

namespace t
{	

class CXYZResolutionType : public TypeBase
{
public:
	QIF191_EXPORT CXYZResolutionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CXYZResolutionType(CXYZResolutionType const& init);
	void operator=(CXYZResolutionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CXYZResolutionType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CXYZResolutionType_altova_XResolution> XResolution;
	struct XResolution { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CXYZResolutionType_altova_YResolution> YResolution;
	struct YResolution { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CXYZResolutionType_altova_ZResolution> ZResolution;
	struct ZResolution { typedef Iterator<t::CLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CXYZResolutionType
