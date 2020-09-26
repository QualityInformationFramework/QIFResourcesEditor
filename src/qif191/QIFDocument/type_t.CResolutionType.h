#pragma once



namespace qif191
{

namespace t
{	

class CResolutionType : public TypeBase
{
public:
	QIF191_EXPORT CResolutionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CResolutionType(CResolutionType const& init);
	void operator=(CResolutionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CResolutionType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CResolutionType_altova_CombinedResolution> CombinedResolution;
	struct CombinedResolution { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CXYZResolutionType, _altova_mi_t_altova_CResolutionType_altova_XYZResolution> XYZResolution;
	struct XYZResolution { typedef Iterator<t::CXYZResolutionType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CResolutionType
