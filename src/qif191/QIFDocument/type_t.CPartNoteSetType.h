#pragma once



namespace qif191
{

namespace t
{	

class CPartNoteSetType : public TypeBase
{
public:
	QIF191_EXPORT CPartNoteSetType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPartNoteSetType(CPartNoteSetType const& init);
	void operator=(CPartNoteSetType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPartNoteSetType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CPartNoteSetType_altova_N, 0, 0> N;	// N CNaturalType
	MemberElement<t::CPartNoteType, _altova_mi_t_altova_CPartNoteSetType_altova_PartNote> PartNote;
	struct PartNote { typedef Iterator<t::CPartNoteType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPartNoteSetType
