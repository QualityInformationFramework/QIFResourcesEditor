#pragma once



namespace qif191
{

namespace t
{	

class CWorkInstructionsType : public TypeBase
{
public:
	QIF191_EXPORT CWorkInstructionsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CWorkInstructionsType(CWorkInstructionsType const& init);
	void operator=(CWorkInstructionsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CWorkInstructionsType); }
	MemberElement<t::CWorkInstructionBaseType, _altova_mi_t_altova_CWorkInstructionsType_altova_WorkInstruction> WorkInstruction;
	struct WorkInstruction { typedef Iterator<t::CWorkInstructionBaseType> iterator; };
	MemberElement<t::CDocumentFileInstructionType, _altova_mi_t_altova_CWorkInstructionsType_altova_DocumentFileInstruction> DocumentFileInstruction;
	struct DocumentFileInstruction { typedef Iterator<t::CDocumentFileInstructionType> iterator; };
	MemberElement<t::CImageInstructionType, _altova_mi_t_altova_CWorkInstructionsType_altova_ImageInstruction> ImageInstruction;
	struct ImageInstruction { typedef Iterator<t::CImageInstructionType> iterator; };
	MemberElement<t::CTextInstructionType, _altova_mi_t_altova_CWorkInstructionsType_altova_TextInstruction> TextInstruction;
	struct TextInstruction { typedef Iterator<t::CTextInstructionType> iterator; };
	MemberElement<t::CVideoInstructionType, _altova_mi_t_altova_CWorkInstructionsType_altova_VideoInstruction> VideoInstruction;
	struct VideoInstruction { typedef Iterator<t::CVideoInstructionType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CWorkInstructionsType
