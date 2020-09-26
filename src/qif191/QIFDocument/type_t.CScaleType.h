#pragma once



namespace qif191
{

namespace t
{	

class CScaleType : public TypeBase
{
public:
	QIF191_EXPORT CScaleType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CScaleType(CScaleType const& init);
	void operator=(CScaleType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CScaleType); }
	MemberElement<t::CPointType, _altova_mi_t_altova_CScaleType_altova_Origin> Origin;
	struct Origin { typedef Iterator<t::CPointType> iterator; };
	MemberElement<t::CUniformScaleType, _altova_mi_t_altova_CScaleType_altova_UniformScale> UniformScale;
	struct UniformScale { typedef Iterator<t::CUniformScaleType> iterator; };
	MemberElement<t::CRadialDifferentialScaleType, _altova_mi_t_altova_CScaleType_altova_RadialDifferentialScale> RadialDifferentialScale;
	struct RadialDifferentialScale { typedef Iterator<t::CRadialDifferentialScaleType> iterator; };
	MemberElement<t::CAxialDifferentialScaleType, _altova_mi_t_altova_CScaleType_altova_AxialDifferentialScale> AxialDifferentialScale;
	struct AxialDifferentialScale { typedef Iterator<t::CAxialDifferentialScaleType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CScaleType
