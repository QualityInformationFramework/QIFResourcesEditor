#pragma once



namespace qif191
{

namespace t
{	

class CDatumReferenceFramesType : public TypeBase
{
public:
	QIF191_EXPORT CDatumReferenceFramesType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDatumReferenceFramesType(CDatumReferenceFramesType const& init);
	void operator=(CDatumReferenceFramesType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CDatumReferenceFramesType); }
	MemberElement<t::CDatumReferenceFrameType, _altova_mi_t_altova_CDatumReferenceFramesType_altova_DatumReferenceFrame> DatumReferenceFrame;
	struct DatumReferenceFrame { typedef Iterator<t::CDatumReferenceFrameType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDatumReferenceFramesType
