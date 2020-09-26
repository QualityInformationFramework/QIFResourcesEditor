#pragma once



namespace qif191
{

namespace t
{	

class CThreadSpecificationsType : public TypeBase
{
public:
	QIF191_EXPORT CThreadSpecificationsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CThreadSpecificationsType(CThreadSpecificationsType const& init);
	void operator=(CThreadSpecificationsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CThreadSpecificationsType); }
	MemberElement<t::CThreadSpecificationType, _altova_mi_t_altova_CThreadSpecificationsType_altova_ThreadSpecification> ThreadSpecification;
	struct ThreadSpecification { typedef Iterator<t::CThreadSpecificationType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CThreadSpecificationsType
