#pragma once



namespace qif191
{

namespace t
{	

class CCoordinateSystemListType : public TypeBase
{
public:
	QIF191_EXPORT CCoordinateSystemListType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCoordinateSystemListType(CCoordinateSystemListType const& init);
	void operator=(CCoordinateSystemListType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCoordinateSystemListType); }
	MemberElement<t::CCoordinateSystemType, _altova_mi_t_altova_CCoordinateSystemListType_altova_CoordinateSystem> CoordinateSystem;
	struct CoordinateSystem { typedef Iterator<t::CCoordinateSystemType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CCoordinateSystemListType_altova_CommonCoordinateSystemId> CommonCoordinateSystemId;
	struct CommonCoordinateSystemId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CCoordinateSystemListType_altova_MachineCoordinateSystemId> MachineCoordinateSystemId;
	struct MachineCoordinateSystemId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCoordinateSystemListType
