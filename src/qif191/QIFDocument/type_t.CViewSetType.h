#pragma once



namespace qif191
{

namespace t
{	

class CViewSetType : public TypeBase
{
public:
	QIF191_EXPORT CViewSetType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CViewSetType(CViewSetType const& init);
	void operator=(CViewSetType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CViewSetType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CViewSetType_altova_N, 0, 0> N;	// N CNaturalType
	MemberElement<t::CViewBaseType, _altova_mi_t_altova_CViewSetType_altova_ViewBase> ViewBase;
	struct ViewBase { typedef Iterator<t::CViewBaseType> iterator; };
	MemberElement<t::CCameraType, _altova_mi_t_altova_CViewSetType_altova_Camera> Camera;
	struct Camera { typedef Iterator<t::CCameraType> iterator; };
	MemberElement<t::CSavedViewType, _altova_mi_t_altova_CViewSetType_altova_SavedView> SavedView;
	struct SavedView { typedef Iterator<t::CSavedViewType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CViewSetType
