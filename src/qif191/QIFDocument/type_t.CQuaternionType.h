#pragma once



namespace qif191
{

namespace t
{	

class CQuaternionType : public TypeBase
{
public:
	QIF191_EXPORT CQuaternionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CQuaternionType(CQuaternionType const& init);
	void operator=(CQuaternionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CQuaternionType); }
	MemberElement<t::CD4TypeType, _altova_mi_t_altova_CQuaternionType_altova_Value2> Value2;
	struct Value2 { typedef Iterator<t::CD4TypeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CQuaternionType
