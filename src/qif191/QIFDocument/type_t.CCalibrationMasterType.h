#pragma once



namespace qif191
{

namespace t
{	

class CCalibrationMasterType : public TypeBase
{
public:
	QIF191_EXPORT CCalibrationMasterType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCalibrationMasterType(CCalibrationMasterType const& init);
	void operator=(CCalibrationMasterType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCalibrationMasterType); }
	MemberElement<xs::CstringType, _altova_mi_t_altova_CCalibrationMasterType_altova_SerialNumber> SerialNumber;
	struct SerialNumber { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CCalibrationMasterType_altova_description> description;
	struct description { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCalibrationMasterType
