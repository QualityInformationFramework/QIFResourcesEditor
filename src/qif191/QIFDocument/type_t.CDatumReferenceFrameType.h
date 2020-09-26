#pragma once



namespace qif191
{

namespace t
{	

class CDatumReferenceFrameType : public TypeBase
{
public:
	QIF191_EXPORT CDatumReferenceFrameType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDatumReferenceFrameType(CDatumReferenceFrameType const& init);
	void operator=(CDatumReferenceFrameType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CDatumReferenceFrameType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CDatumReferenceFrameType_altova_id, 0, 0> id;	// id CQIFIdType
	MemberElement<t::CAttributesType, _altova_mi_t_altova_CDatumReferenceFrameType_altova_Attributes> Attributes;
	struct Attributes { typedef Iterator<t::CAttributesType> iterator; };
	MemberElement<t::CDatumWithPrecedenceType, _altova_mi_t_altova_CDatumReferenceFrameType_altova_Datum> Datum;
	struct Datum { typedef Iterator<t::CDatumWithPrecedenceType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CDatumReferenceFrameType_altova_CoordinateSystemId> CoordinateSystemId;
	struct CoordinateSystemId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDatumReferenceFrameType
