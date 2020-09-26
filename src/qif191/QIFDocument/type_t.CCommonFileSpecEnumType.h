#pragma once



namespace qif191
{

namespace t
{	

class CCommonFileSpecEnumType : public TypeBase
{
public:
	QIF191_EXPORT CCommonFileSpecEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCommonFileSpecEnumType(CCommonFileSpecEnumType const& init);
	void operator=(CCommonFileSpecEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CCommonFileSpecEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_AVI = 0, // AVI
		k_BMP = 1, // BMP
		k_DOC = 2, // DOC
		k_DOCX = 3, // DOCX
		k_DXF = 4, // DXF
		k_DTD = 5, // DTD
		k_GIF = 6, // GIF
		k_GZIP = 7, // GZIP
		k_HTML = 8, // HTML
		k_IGES = 9, // IGES
		k_JPEG = 10, // JPEG
		k_JPG = 11, // JPG
		k_MOV = 12, // MOV
		k_MPEG = 13, // MPEG
		k_MPG = 14, // MPG
		k_PDF = 15, // PDF
		k_PNG = 16, // PNG
		k_PPM = 17, // PPM
		k_PPT = 18, // PPT
		k_PRT = 19, // PRT
		k_RAR = 20, // RAR
		k_RTF = 21, // RTF
		k_STL = 22, // STL
		k_STEP = 23, // STEP
		k_STP = 24, // STP
		k_TAR = 25, // TAR
		k_TIF = 26, // TIF
		k_TIFF = 27, // TIFF
		k_TXT = 28, // TXT
		k_WMV = 29, // WMV
		k_XLS = 30, // XLS
		k_XLSX = 31, // XLSX
		k_XML = 32, // XML
		k_XSD = 33, // XSD
		k_X_T = 34, // X_T
		k_ZIP = 35, // ZIP
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCommonFileSpecEnumType
