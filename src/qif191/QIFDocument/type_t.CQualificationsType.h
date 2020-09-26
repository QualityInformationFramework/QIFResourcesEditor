#pragma once



namespace qif191
{

namespace t
{	

class CQualificationsType : public TypeBase
{
public:
	QIF191_EXPORT CQualificationsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CQualificationsType(CQualificationsType const& init);
	void operator=(CQualificationsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CQualificationsType); }
	MemberElement<t::CQualificationType, _altova_mi_t_altova_CQualificationsType_altova_Qualification> Qualification;
	struct Qualification { typedef Iterator<t::CQualificationType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CQualificationsType
