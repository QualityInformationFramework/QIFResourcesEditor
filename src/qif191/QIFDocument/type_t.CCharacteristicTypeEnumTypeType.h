#pragma once



namespace qif191
{

namespace t
{	

class CCharacteristicTypeEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CCharacteristicTypeEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCharacteristicTypeEnumTypeType(CCharacteristicTypeEnumTypeType const& init);
	void operator=(CCharacteristicTypeEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCharacteristicTypeEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_ANGLE = 0, // ANGLE
		k_ANGLECOORDINATE = 1, // ANGLECOORDINATE
		k_ANGLEFROM = 2, // ANGLEFROM
		k_ANGLEBETWEEN = 3, // ANGLEBETWEEN
		k_ANGULARITY = 4, // ANGULARITY
		k_CHORD = 5, // CHORD
		k_CIRCULARITY = 6, // CIRCULARITY
		k_CIRCULARRUNOUT = 7, // CIRCULARRUNOUT
		k_CONCENTRICITY = 8, // CONCENTRICITY
		k_CURVELENGTH = 9, // CURVELENGTH
		k_CYLINDRICITY = 10, // CYLINDRICITY
		k_DEPTH = 11, // DEPTH
		k_DIAMETER = 12, // DIAMETER
		k_DISTANCE = 13, // DISTANCE
		k_DISTANCEFROM = 14, // DISTANCEFROM
		k_FLATNESS = 15, // FLATNESS
		k_HEIGHT = 16, // HEIGHT
		k_LENGTH = 17, // LENGTH
		k_LENGTHCOORDINATE = 18, // LENGTHCOORDINATE
		k_LINEPROFILE = 19, // LINEPROFILE
		k_PERPENDICULARITY = 20, // PERPENDICULARITY
		k_PARALLELISM = 21, // PARALLELISM
		k_POINTPROFILE = 22, // POINTPROFILE
		k_POSITION = 23, // POSITION
		k_RADIUS = 24, // RADIUS
		k_SQUARE = 25, // SQUARE
		k_STRAIGHTNESS = 26, // STRAIGHTNESS
		k_SURFACEPROFILE = 27, // SURFACEPROFILE
		k_SURFACEPROFILENONUNIFORM = 28, // SURFACEPROFILENONUNIFORM
		k_SYMMETRY = 29, // SYMMETRY
		k_THICKNESS = 30, // THICKNESS
		k_THREAD = 31, // THREAD
		k_TOTALRUNOUT = 32, // TOTALRUNOUT
		k_WIDTH = 33, // WIDTH
		EnumValueCount
	};

	
	QIF191_EXPORT int GetEnumerationValue();
	QIF191_EXPORT void SetEnumerationValue( const int index);
	QIF191_EXPORT void operator=(const string_type& value);
	QIF191_EXPORT operator string_type();
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCharacteristicTypeEnumTypeType
