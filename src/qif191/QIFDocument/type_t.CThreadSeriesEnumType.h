#pragma once



namespace qif191
{

namespace t
{	

class CThreadSeriesEnumType : public TypeBase
{
public:
	QIF191_EXPORT CThreadSeriesEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CThreadSeriesEnumType(CThreadSeriesEnumType const& init);
	void operator=(CThreadSeriesEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CThreadSeriesEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_ACME = 0, // ACME
		k_ACME_C = 1, // ACME_C
		k_ACME_G = 2, // ACME_G
		k_AMO = 3, // AMO
		k_ANPT = 4, // ANPT
		k_BUTT = 5, // BUTT
		k_PUSH_BUTT = 6, // PUSH_BUTT
		k_F_PTF = 7, // F_PTF
		k_M = 8, // M
		k_MJ = 9, // MJ
		k_MJS = 10, // MJS
		k_NC5_HF = 11, // NC5_HF
		k_NC5_CSF = 12, // NC5_CSF
		k_NC5_ONF = 13, // NC5_ONF
		k_NC5_IF = 14, // NC5_IF
		k_NC5_INF = 15, // NC5_INF
		k_NGO = 16, // NGO
		k_NGS = 17, // NGS
		k_NGT = 18, // NGT
		k_NH = 19, // NH
		k_NHR = 20, // NHR
		k_NPSC = 21, // NPSC
		k_NPSF = 22, // NPSF
		k_NPSH = 23, // NPSH
		k_NPSI = 24, // NPSI
		k_NPSL = 25, // NPSL
		k_NPSM = 26, // NPSM
		k_NPT = 27, // NPT
		k_NPTF = 28, // NPTF
		k_PTF_SAE_SHORT = 29, // PTF_SAE_SHORT
		k_PTF_SPL_SHORT = 30, // PTF_SPL_SHORT
		k_PTF_SPL_EXTRA_SHORT = 31, // PTF_SPL_EXTRA_SHORT
		k_SGT = 32, // SGT
		k_SPL_PTF = 33, // SPL_PTF
		k_STUB_ACME = 34, // STUB_ACME
		k_UN = 35, // UN
		k_UNC = 36, // UNC
		k_UNF = 37, // UNF
		k_UNEF = 38, // UNEF
		k_UNJ = 39, // UNJ
		k_UNJC = 40, // UNJC
		k_UNJF = 41, // UNJF
		k_UNJEF = 42, // UNJEF
		k_UNR = 43, // UNR
		k_UNRC = 44, // UNRC
		k_UNRF = 45, // UNRF
		k_UNREF = 46, // UNREF
		k_UNM = 47, // UNM
		k_UNS = 48, // UNS
		k_G = 49, // G
		k_R = 50, // R
		k_RC = 51, // RC
		k_RP = 52, // RP
		k_S = 53, // S
		k_TR = 54, // TR
		k_UNDEFINED = 55, // UNDEFINED
		EnumValueCount
	};
	void operator= (const string_type& value) 
	{
		altova::XmlFormatter* Formatter = static_cast<altova::XmlFormatter*>(altova::AnySimpleTypeFormatter);
		XercesTreeOperations::SetValue(GetNode(), Formatter->Format(value));
	}	
		
	operator string_type()
	{
		return CastAs<string_type >::Do(GetNode(), 0);
	}
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CThreadSeriesEnumType
