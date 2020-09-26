#pragma once



namespace qif191
{

namespace t
{	

class CSweepType : public TypeBase
{
public:
	QIF191_EXPORT CSweepType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSweepType(CSweepType const& init);
	void operator=(CSweepType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSweepType); }
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CSweepType_altova_DirBeg> DirBeg;
	struct DirBeg { typedef Iterator<t::CUnitVectorType> iterator; };
	MemberElement<t::CAngleRangeType, _altova_mi_t_altova_CSweepType_altova_DomainAngle> DomainAngle;
	struct DomainAngle { typedef Iterator<t::CAngleRangeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSweepType
