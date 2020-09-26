#pragma once



namespace qif191
{

namespace t
{	

class CPointCloudSetType : public TypeBase
{
public:
	QIF191_EXPORT CPointCloudSetType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointCloudSetType(CPointCloudSetType const& init);
	void operator=(CPointCloudSetType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointCloudSetType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CPointCloudSetType_altova_N, 0, 0> N;	// N CNaturalType
	MemberElement<t::CPointCloudType, _altova_mi_t_altova_CPointCloudSetType_altova_PointCloud> PointCloud;
	struct PointCloud { typedef Iterator<t::CPointCloudType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointCloudSetType
