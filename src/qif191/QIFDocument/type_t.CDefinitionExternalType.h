#pragma once



namespace qif191
{

namespace t
{	

class CDefinitionExternalType : public TypeBase
{
public:
	QIF191_EXPORT CDefinitionExternalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDefinitionExternalType(CDefinitionExternalType const& init);
	void operator=(CDefinitionExternalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CDefinitionExternalType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CDefinitionExternalType_altova_id, 0, 0> id;	// id CQIFIdType
	MemberElement<t::CPrintedDrawingType, _altova_mi_t_altova_CDefinitionExternalType_altova_PrintedDrawing> PrintedDrawing;
	struct PrintedDrawing { typedef Iterator<t::CPrintedDrawingType> iterator; };
	MemberElement<t::CDigitalDrawingType, _altova_mi_t_altova_CDefinitionExternalType_altova_DigitalDrawing> DigitalDrawing;
	struct DigitalDrawing { typedef Iterator<t::CDigitalDrawingType> iterator; };
	MemberElement<t::CDigitalModelType, _altova_mi_t_altova_CDefinitionExternalType_altova_DigitalModel> DigitalModel;
	struct DigitalModel { typedef Iterator<t::CDigitalModelType> iterator; };
	MemberElement<t::CPhysicalModelType, _altova_mi_t_altova_CDefinitionExternalType_altova_PhysicalModel> PhysicalModel;
	struct PhysicalModel { typedef Iterator<t::CPhysicalModelType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDefinitionExternalType
