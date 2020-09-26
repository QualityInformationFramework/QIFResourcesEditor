#pragma once



namespace qif191
{

namespace t
{	

class CMeasurementResourceBaseType : public TypeBase
{
public:
	QIF191_EXPORT CMeasurementResourceBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CMeasurementResourceBaseType(CMeasurementResourceBaseType const& init);
	void operator=(CMeasurementResourceBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CMeasurementResourceBaseType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CMeasurementResourceBaseType_altova_id, 0, 0> id;	// id CQIFIdType
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CMeasurementResourceBaseType_altova_Name> Name;
	struct Name { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CMeasurementResourceBaseType_altova_Description> Description;
	struct Description { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CMeasurementResourceBaseType_altova_Manufacturer> Manufacturer;
	struct Manufacturer { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CMeasurementResourceBaseType_altova_ModelNumber> ModelNumber;
	struct ModelNumber { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CMeasurementResourceBaseType_altova_SerialNumber> SerialNumber;
	struct SerialNumber { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CMeasurementResourceBaseType_altova_LocationId> LocationId;
	struct LocationId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CLocationType, _altova_mi_t_altova_CMeasurementResourceBaseType_altova_Location> Location;
	struct Location { typedef Iterator<t::CLocationType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CMeasurementResourceBaseType
