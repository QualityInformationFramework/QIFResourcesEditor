#pragma once



namespace qif191
{

namespace t
{	

class CThreadSpecificationDetailedBaseType : public TypeBase
{
public:
	QIF191_EXPORT CThreadSpecificationDetailedBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CThreadSpecificationDetailedBaseType(CThreadSpecificationDetailedBaseType const& init);
	void operator=(CThreadSpecificationDetailedBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CThreadSpecificationDetailedBaseType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CThreadSpecificationDetailedBaseType_altova_id, 0, 0> id;	// id CQIFIdType
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CThreadSpecificationDetailedBaseType_altova_Diameter> Diameter;
	struct Diameter { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CThreadSeriesType, _altova_mi_t_altova_CThreadSpecificationDetailedBaseType_altova_ThreadSeries> ThreadSeries;
	struct ThreadSeries { typedef Iterator<t::CThreadSeriesType> iterator; };
	MemberElement<t::CThreadClassType, _altova_mi_t_altova_CThreadSpecificationDetailedBaseType_altova_ThreadToleranceClass> ThreadToleranceClass;
	struct ThreadToleranceClass { typedef Iterator<t::CThreadClassType> iterator; };
	MemberElement<t::CThreadClassType, _altova_mi_t_altova_CThreadSpecificationDetailedBaseType_altova_CrestDiameterToleranceClass> CrestDiameterToleranceClass;
	struct CrestDiameterToleranceClass { typedef Iterator<t::CThreadClassType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CThreadSpecificationDetailedBaseType_altova_LeftHanded> LeftHanded;
	struct LeftHanded { typedef Iterator<xs::CbooleanType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CThreadSpecificationDetailedBaseType_altova_ModifiedThread> ModifiedThread;
	struct ModifiedThread { typedef Iterator<xs::CbooleanType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CThreadSpecificationDetailedBaseType_altova_ThreadLengthEngagement> ThreadLengthEngagement;
	struct ThreadLengthEngagement { typedef Iterator<t::CLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CThreadSpecificationDetailedBaseType
