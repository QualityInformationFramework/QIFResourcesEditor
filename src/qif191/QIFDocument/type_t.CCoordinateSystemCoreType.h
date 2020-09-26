#pragma once



namespace qif191
{

namespace t
{	

class CCoordinateSystemCoreType : public TypeBase
{
public:
	QIF191_EXPORT CCoordinateSystemCoreType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCoordinateSystemCoreType(CCoordinateSystemCoreType const& init);
	void operator=(CCoordinateSystemCoreType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCoordinateSystemCoreType); }
	MemberElement<t::CTransformRotationType, _altova_mi_t_altova_CCoordinateSystemCoreType_altova_Rotation> Rotation;
	struct Rotation { typedef Iterator<t::CTransformRotationType> iterator; };
	MemberElement<t::CPointSimpleTypeType, _altova_mi_t_altova_CCoordinateSystemCoreType_altova_Origin> Origin;
	struct Origin { typedef Iterator<t::CPointSimpleTypeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCoordinateSystemCoreType
