#pragma once



namespace qif191
{

namespace t
{	

class CTypeOfCoordinatesType : public TypeBase
{
public:
	QIF191_EXPORT CTypeOfCoordinatesType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTypeOfCoordinatesType(CTypeOfCoordinatesType const& init);
	void operator=(CTypeOfCoordinatesType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTypeOfCoordinatesType); }
	MemberElement<t::CCoordinateEnumTypeType, _altova_mi_t_altova_CTypeOfCoordinatesType_altova_CoordinateEnum> CoordinateEnum;
	struct CoordinateEnum { typedef Iterator<t::CCoordinateEnumTypeType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CTypeOfCoordinatesType_altova_OtherCoordinate> OtherCoordinate;
	struct OtherCoordinate { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTypeOfCoordinatesType
