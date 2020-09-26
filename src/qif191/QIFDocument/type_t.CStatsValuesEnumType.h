#pragma once



namespace qif191
{

namespace t
{	

class CStatsValuesEnumType : public TypeBase
{
public:
	QIF191_EXPORT CStatsValuesEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStatsValuesEnumType(CStatsValuesEnumType const& init);
	void operator=(CStatsValuesEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CStatsValuesEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_TOTNUM = 0, // TOTNUM
		k_EFFNUM = 1, // EFFNUM
		k_NUMSUB = 2, // NUMSUB
		k_AVG = 3, // AVG
		k_DIFF = 4, // DIFF
		k_RMS = 5, // RMS
		k_MAX = 6, // MAX
		k_MIN = 7, // MIN
		k_RANGE = 8, // RANGE
		k_AVGRNG = 9, // AVGRNG
		k_STDDEV = 10, // STDDEV
		k_SKEW = 11, // SKEW
		k_KURT = 12, // KURT
		k_NORM = 13, // NORM
		k_PROVAR = 14, // PROVAR
		k_ESTSTDV = 15, // ESTSTDV
		k_UCL = 16, // UCL
		k_LCL = 17, // LCL
		k_UCLRNG = 18, // UCLRNG
		k_LCLRNG = 19, // LCLRNG
		k_NUMOOC = 20, // NUMOOC
		k_NUMOOT = 21, // NUMOOT
		k_NOOTHI = 22, // NOOTHI
		k_NOOTLO = 23, // NOOTLO
		k_CP = 24, // CP
		k_CPK = 25, // CPK
		k_PP = 26, // PP
		k_PPK = 27, // PPK
		k_CM = 28, // CM
		k_CMK = 29, // CMK
		k_AV = 30, // AV
		k_REL_AV = 31, // REL_AV
		k_EV = 32, // EV
		k_REL_EV = 33, // REL_EV
		k_INTERACTION = 34, // INTERACTION
		k_REL_INTERACTION = 35, // REL_INTERACTION
		k_RANDR = 36, // RANDR
		k_REL_RANDR = 37, // REL_RANDR
		k_PV = 38, // PV
		k_REL_PV = 39, // REL_PV
		k_TV = 40, // TV
		k_REL_TV = 41, // REL_TV
		k_LNRTY = 42, // LNRTY
		k_BIAS = 43, // BIAS
		k_REL_LNRTY = 44, // REL_LNRTY
		k_REL_BIAS = 45, // REL_BIAS
		k_R_SQR = 46, // R_SQR
		k_SLOPE = 47, // SLOPE
		k_INTCPT = 48, // INTCPT
		k_UPRCONFLIM = 49, // UPRCONFLIM
		k_LWRCONFLIM = 50, // LWRCONFLIM
		k_TDIST = 51, // TDIST
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStatsValuesEnumType
