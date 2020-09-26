#pragma once



namespace qif191
{

namespace t
{	

class CAlignmentOperationBaseType : public TypeBase
{
public:
	QIF191_EXPORT CAlignmentOperationBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAlignmentOperationBaseType(CAlignmentOperationBaseType const& init);
	void operator=(CAlignmentOperationBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAlignmentOperationBaseType); }
	MemberElement<xs::CpositiveIntegerType, _altova_mi_t_altova_CAlignmentOperationBaseType_altova_SequenceNumber> SequenceNumber;
	struct SequenceNumber { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAlignmentOperationBaseType
