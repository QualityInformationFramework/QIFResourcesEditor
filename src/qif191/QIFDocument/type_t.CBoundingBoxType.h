#pragma once



namespace qif191
{

namespace t
{	

class CBoundingBoxType : public TypeBase
{
public:
	QIF191_EXPORT CBoundingBoxType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CBoundingBoxType(CBoundingBoxType const& init);
	void operator=(CBoundingBoxType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CBoundingBoxType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CBoundingBoxType_altova_Length> Length;
	struct Length { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CBoundingBoxType_altova_Width> Width;
	struct Width { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CBoundingBoxType_altova_Height> Height;
	struct Height { typedef Iterator<t::CLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CBoundingBoxType
