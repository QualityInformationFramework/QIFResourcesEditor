#pragma once



namespace qif191
{

namespace t
{	

class CCalibrationsType : public TypeBase
{
public:
	QIF191_EXPORT CCalibrationsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCalibrationsType(CCalibrationsType const& init);
	void operator=(CCalibrationsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCalibrationsType); }
	MemberElement<t::CCalibrationType, _altova_mi_t_altova_CCalibrationsType_altova_Calibration> Calibration;
	struct Calibration { typedef Iterator<t::CCalibrationType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCalibrationsType
