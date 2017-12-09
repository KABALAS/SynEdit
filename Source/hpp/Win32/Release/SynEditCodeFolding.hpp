// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'SynEditCodeFolding.pas' rev: 32.00 (Windows)

#ifndef SyneditcodefoldingHPP
#define SyneditcodefoldingHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Types.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Generics.Collections.hpp>
#include <SynEditHighlighter.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Syneditcodefolding
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TSynCodeFoldingException;
struct TSynFoldRange;
class DELPHICLASS TSynFoldRanges;
class DELPHICLASS TSynCodeFolding;
class DELPHICLASS TSynCustomCodeFoldingHighlighter;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TSynCodeFoldingException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall TSynCodeFoldingException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall TSynCodeFoldingException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall TSynCodeFoldingException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall TSynCodeFoldingException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall TSynCodeFoldingException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall TSynCodeFoldingException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall TSynCodeFoldingException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall TSynCodeFoldingException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall TSynCodeFoldingException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall TSynCodeFoldingException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall TSynCodeFoldingException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall TSynCodeFoldingException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~TSynCodeFoldingException(void) { }
	
};

#pragma pack(pop)

struct DECLSPEC_DRECORD TSynFoldRange
{
public:
	int FromLine;
	int ToLine;
	int FoldType;
	int Indent;
	bool Collapsed;
	
private:
	int __fastcall GetLinesCollapsed(void);
	
public:
	void __fastcall Move(int Count);
	__property int LinesCollapsed = {read=GetLinesCollapsed};
	__fastcall TSynFoldRange(int AFromLine, int AToLine, int AFoldType, int AIndent, bool ACollapsed);
	TSynFoldRange() {}
};


typedef TSynFoldRange *PSynFoldRange;

enum DECLSPEC_DENUM TSynCodeFoldingMode : unsigned char { cfmStandard, cfmIndentation };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSynFoldRanges : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	enum DECLSPEC_DENUM TFoldOpenClose : unsigned char { focOpen, focClose };
	
	#pragma pack(push,8)
	struct DECLSPEC_DRECORD TLineFoldInfo
	{
	public:
		int Line;
		TSynFoldRanges::TFoldOpenClose FoldOpenClose;
		int FoldType;
		int Indent;
		__fastcall TLineFoldInfo(int ALine, TSynFoldRanges::TFoldOpenClose AFoldOpenClose, int AFoldType, int AIndent);
		TLineFoldInfo() {}
	};
	#pragma pack(pop)
	
	
	
public:
	TSynFoldRange operator[](int Index) { return this->FoldRange[Index]; }
	
private:
	TSynCodeFoldingMode fCodeFoldingMode;
	bool fRangesNeedFixing;
	System::Generics::Collections::TList__1<TSynFoldRange>* fRanges;
	System::Generics::Collections::TList__1<int>* fCollapsedState;
	System::Generics::Collections::TList__1<TLineFoldInfo>* fFoldInfoList;
	TSynFoldRange __fastcall Get(int Index);
	int __fastcall GetCount(void);
	
public:
	__fastcall TSynFoldRanges(void);
	__fastcall virtual ~TSynFoldRanges(void);
	bool __fastcall FoldStartAtLine(int Line)/* overload */;
	bool __fastcall FoldStartAtLine(int Line, /* out */ int &Index)/* overload */;
	bool __fastcall CollapsedFoldStartAtLine(int Line)/* overload */;
	bool __fastcall CollapsedFoldStartAtLine(int Line, /* out */ int &Index)/* overload */;
	bool __fastcall FoldEndAtLine(int Line)/* overload */;
	bool __fastcall FoldEndAtLine(int Line, /* out */ int &Index)/* overload */;
	bool __fastcall FoldAroundLineEx(int Line, bool WantCollapsed, bool AcceptFromLine, bool AcceptToLine, /* out */ int &Index);
	bool __fastcall CollapsedFoldAroundLine(int Line)/* overload */;
	bool __fastcall CollapsedFoldAroundLine(int Line, /* out */ int &Index)/* overload */;
	bool __fastcall FoldAroundLine(int Line)/* overload */;
	bool __fastcall FoldAroundLine(int Line, /* out */ int &Index)/* overload */;
	bool __fastcall FoldHidesLine(int Line)/* overload */;
	bool __fastcall FoldHidesLine(int Line, /* out */ int &Index)/* overload */;
	System::DynamicArray<int> __fastcall FoldsAtLevel(int Level);
	System::DynamicArray<int> __fastcall FoldsOfType(int aType);
	void __fastcall StoreCollapsedState(void);
	void __fastcall RestoreCollapsedState(void);
	void __fastcall StartScanning(void);
	bool __fastcall StopScanning(System::Classes::TStrings* Lines);
	void __fastcall AddLineInfo(int ALine, int AFoldType, TFoldOpenClose AFoldOpenClose, int AIndent);
	void __fastcall StartFoldRange(int ALine, int AFoldType, int AIndent = 0xffffffff);
	void __fastcall StopFoldRange(int ALine, int AFoldType, int AIndent = 0xffffffff);
	void __fastcall NoFoldInfo(int ALine);
	int __fastcall GetIndentLevel(int Line);
	void __fastcall RecreateFoldRanges(System::Classes::TStrings* Lines);
	int __fastcall FoldLineToRow(int Line);
	int __fastcall FoldRowToLine(int Row);
	int __fastcall LinesInserted(int aIndex, int aCount);
	int __fastcall LinesDeleted(int aIndex, int aCount);
	int __fastcall LinesPutted(int aIndex, int aCount);
	void __fastcall Reset(void);
	void __fastcall AddByParts(int AFoldType, int AFromLine, int AToLine = 0xffffffff);
	void __fastcall AddFoldRange(const TSynFoldRange &FoldRange);
	__property TSynCodeFoldingMode CodeFoldingMode = {read=fCodeFoldingMode, write=fCodeFoldingMode, nodefault};
	__property int Count = {read=GetCount, nodefault};
	__property TSynFoldRange FoldRange[int Index] = {read=Get/*, default*/};
	__property System::Generics::Collections::TList__1<TSynFoldRange>* Ranges = {read=fRanges};
};

#pragma pack(pop)

typedef void __fastcall (__closure *TSynCodeFoldingChangeEvent)(System::TObject* Sender);

class PASCALIMPLEMENTATION TSynCodeFolding : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool fIndentGuides;
	System::Uitypes::TColor fCollapsedLineColor;
	System::Uitypes::TColor fFolderBarLinesColor;
	System::Uitypes::TColor fIndentGuidesColor;
	bool fShowCollapsedLine;
	bool fShowHintMark;
	int fGutterShapeSize;
	TSynCodeFoldingChangeEvent fOnChange;
	void __fastcall SetIndentGuides(const bool Value);
	void __fastcall SetCollapsedLineColor(const System::Uitypes::TColor Value);
	void __fastcall SetFolderBarLinesColor(const System::Uitypes::TColor Value);
	void __fastcall SetIndentGuidesColor(const System::Uitypes::TColor Value);
	void __fastcall SetShowCollapsedLine(const bool Value);
	void __fastcall SetShowHintMark(const bool Value);
	void __fastcall SetGutterShapeSize(const int Value);
	
public:
	__fastcall TSynCodeFolding(void);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property TSynCodeFoldingChangeEvent OnChange = {read=fOnChange, write=fOnChange};
	
__published:
	__property int GutterShapeSize = {read=fGutterShapeSize, write=SetGutterShapeSize, nodefault};
	__property System::Uitypes::TColor CollapsedLineColor = {read=fCollapsedLineColor, write=SetCollapsedLineColor, nodefault};
	__property System::Uitypes::TColor FolderBarLinesColor = {read=fFolderBarLinesColor, write=SetFolderBarLinesColor, nodefault};
	__property System::Uitypes::TColor IndentGuidesColor = {read=fIndentGuidesColor, write=SetIndentGuidesColor, nodefault};
	__property bool IndentGuides = {read=fIndentGuides, write=SetIndentGuides, nodefault};
	__property bool ShowCollapsedLine = {read=fShowCollapsedLine, write=SetShowCollapsedLine, nodefault};
	__property bool ShowHintMark = {read=fShowHintMark, write=SetShowHintMark, nodefault};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TSynCodeFolding(void) { }
	
};


class PASCALIMPLEMENTATION TSynCustomCodeFoldingHighlighter : public Synedithighlighter::TSynCustomHighlighter
{
	typedef Synedithighlighter::TSynCustomHighlighter inherited;
	
protected:
	void * __fastcall GetLineRange(System::Classes::TStrings* Lines, int Line);
	Synedithighlighter::TSynHighlighterAttributes* __fastcall GetHighlighterAttriAtRowCol(System::Classes::TStrings* const Lines, const int Line, const int Char);
	bool __fastcall GetHighlighterAttriAtRowColEx(System::Classes::TStrings* const Lines, const int Line, const int Char, System::UnicodeString &Token, int &TokenType, int &Start, Synedithighlighter::TSynHighlighterAttributes* &Attri);
	int __fastcall TabWidth(System::Classes::TStrings* LinesToScan);
	
public:
	virtual void __fastcall InitFoldRanges(TSynFoldRanges* FoldRanges);
	virtual void __fastcall ScanForFoldRanges(TSynFoldRanges* FoldRanges, System::Classes::TStrings* LinesToScan, int FromLine, int ToLine) = 0 ;
	virtual void __fastcall AdjustFoldRanges(TSynFoldRanges* FoldRanges, System::Classes::TStrings* LinesToScan);
public:
	/* TSynCustomHighlighter.Create */ inline __fastcall virtual TSynCustomCodeFoldingHighlighter(System::Classes::TComponent* AOwner) : Synedithighlighter::TSynCustomHighlighter(AOwner) { }
	/* TSynCustomHighlighter.Destroy */ inline __fastcall virtual ~TSynCustomCodeFoldingHighlighter(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE int FoldRegionType;
}	/* namespace Syneditcodefolding */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYNEDITCODEFOLDING)
using namespace Syneditcodefolding;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SyneditcodefoldingHPP
