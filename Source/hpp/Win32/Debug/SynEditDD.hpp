﻿// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'SynEditDD.dpk' rev: 32.00 (Windows)

#ifndef SyneditddHPP
#define SyneditddHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// (rtl)
#include <SysInit.hpp>
#include <SynEditReg.hpp>
#include <SynEditPropertyReg.hpp>
#include <SynHighlighterManager.hpp>
#include <Winapi.Windows.hpp>	// (rtl)
#include <Winapi.PsAPI.hpp>	// (rtl)
#include <System.Character.hpp>	// (rtl)
#include <System.Internal.ExcUtils.hpp>	// (rtl)
#include <System.SysUtils.hpp>	// (rtl)
#include <System.VarUtils.hpp>	// (rtl)
#include <System.Variants.hpp>	// (rtl)
#include <System.Math.hpp>	// (rtl)
#include <System.Rtti.hpp>	// (rtl)
#include <System.TypInfo.hpp>	// (rtl)
#include <System.Generics.Defaults.hpp>	// (rtl)
#include <System.Classes.hpp>	// (rtl)
#include <System.TimeSpan.hpp>	// (rtl)
#include <System.DateUtils.hpp>	// (rtl)
#include <System.IOUtils.hpp>	// (rtl)
#include <System.Win.Registry.hpp>	// (rtl)
#include <Vcl.Graphics.hpp>	// (vcl)
#include <System.Actions.hpp>	// (rtl)
#include <Vcl.ActnList.hpp>	// (vcl)
#include <System.HelpIntfs.hpp>	// (rtl)
#include <System.SyncObjs.hpp>	// (rtl)
#include <Winapi.UxTheme.hpp>	// (rtl)
#include <Vcl.GraphUtil.hpp>	// (vcl)
#include <Vcl.StdCtrls.hpp>	// (vcl)
#include <Winapi.ShellAPI.hpp>	// (rtl)
#include <Vcl.Printers.hpp>	// (vcl)
#include <Vcl.Clipbrd.hpp>	// (vcl)
#include <Vcl.ComCtrls.hpp>	// (vcl)
#include <Vcl.Dialogs.hpp>	// (vcl)
#include <Vcl.ExtCtrls.hpp>	// (vcl)
#include <Vcl.Themes.hpp>	// (vcl)
#include <System.AnsiStrings.hpp>	// (rtl)
#include <System.Win.ComObj.hpp>	// (rtl)
#include <Winapi.FlatSB.hpp>	// (rtl)
#include <Vcl.Forms.hpp>	// (vcl)
#include <Vcl.Menus.hpp>	// (vcl)
#include <Winapi.MsCTF.hpp>	// (rtl)
#include <Vcl.Controls.hpp>	// (vcl)
#include <SynEditMiscClasses.hpp>	// (SynEditDR)
#include <SynEditHighlighter.hpp>	// (SynEditDR)
#include <SynRegExpr.hpp>	// (SynEditDR)
#include <SynUnicode.hpp>	// (SynEditDR)
#include <SynTextDrawer.hpp>	// (SynEditDR)
#include <SynEditKeyCmds.hpp>	// (SynEditDR)
#include <SynEdit.hpp>	// (SynEditDR)
#include <Vcl.Buttons.hpp>	// (vcl)
#include <Data.SqlTimSt.hpp>	// (dbrtl)
#include <Data.FmtBcd.hpp>	// (dbrtl)
#include <Data.DB.hpp>	// (dbrtl)
#include <Vcl.DBLogDlg.hpp>	// (vcldb)
#include <Vcl.DBPWDlg.hpp>	// (vcldb)
#include <Vcl.DBCtrls.hpp>	// (vcldb)
#include <SynEditExport.hpp>	// (SynEditDR)
#include <SynExportHTML.hpp>	// (SynEditDR)
#include <SynExportRTF.hpp>	// (SynEditDR)
#include <Vcl.CheckLst.hpp>	// (vclx)
#include <SynHighlighterADSP21xx.hpp>	// (SynEditDR)
#include <SynHighlighterAsm.hpp>	// (SynEditDR)
#include <SynHighlighterAWK.hpp>	// (SynEditDR)
#include <SynHighlighterBaan.hpp>	// (SynEditDR)
#include <SynHighlighterBat.hpp>	// (SynEditDR)
#include <SynHighlighterCAC.hpp>	// (SynEditDR)
#include <SynHighlighterCache.hpp>	// (SynEditDR)
#include <SynHighlighterCobol.hpp>	// (SynEditDR)
#include <SynHighlighterCpp.hpp>	// (SynEditDR)
#include <SynHighlighterCS.hpp>	// (SynEditDR)
#include <SynHighlighterCSS.hpp>	// (SynEditDR)
#include <SynHighlighterDfm.hpp>	// (SynEditDR)
#include <SynHighlighterDml.hpp>	// (SynEditDR)
#include <SynHighlighterDOT.hpp>	// (SynEditDR)
#include <SynHighlighterDWS.hpp>	// (SynEditDR)
#include <SynHighlighterEiffel.hpp>	// (SynEditDR)
#include <SynHighlighterFortran.hpp>	// (SynEditDR)
#include <SynHighlighterFoxpro.hpp>	// (SynEditDR)
#include <SynHighlighterGalaxy.hpp>	// (SynEditDR)
#include <SynHighlighterGeneral.hpp>	// (SynEditDR)
#include <SynHighlighterHaskell.hpp>	// (SynEditDR)
#include <SynHighlighterHC11.hpp>	// (SynEditDR)
#include <SynHighlighterHP48.hpp>	// (SynEditDR)
#include <SynHighlighterHtml.hpp>	// (SynEditDR)
#include <SynHighlighterIni.hpp>	// (SynEditDR)
#include <SynHighlighterInno.hpp>	// (SynEditDR)
#include <SynHighlighterJava.hpp>	// (SynEditDR)
#include <SynHighlighterJScript.hpp>	// (SynEditDR)
#include <SynHighlighterJSON.hpp>	// (SynEditDR)
#include <SynHighlighterKix.hpp>	// (SynEditDR)
#include <SynHighlighterModelica.hpp>	// (SynEditDR)
#include <SynHighlighterM3.hpp>	// (SynEditDR)
#include <SynHighlighterPas.hpp>	// (SynEditDR)
#include <SynHighlighterPerl.hpp>	// (SynEditDR)
#include <SynHighlighterPHP.hpp>	// (SynEditDR)
#include <SynHighlighterProgress.hpp>	// (SynEditDR)
#include <SynHighlighterPython.hpp>	// (SynEditDR)
#include <SynHighlighterRC.hpp>	// (SynEditDR)
#include <SynHighlighterRuby.hpp>	// (SynEditDR)
#include <SynHighlighterSml.hpp>	// (SynEditDR)
#include <SynHighlighterSQL.hpp>	// (SynEditDR)
#include <SynHighlighterTclTk.hpp>	// (SynEditDR)
#include <SynHighlighterTeX.hpp>	// (SynEditDR)
#include <SynHighlighterUNIXShellScript.hpp>	// (SynEditDR)
#include <SynHighlighterURI.hpp>	// (SynEditDR)
#include <SynHighlighterVB.hpp>	// (SynEditDR)
#include <SynHighlighterVBScript.hpp>	// (SynEditDR)
#include <SynHighlighterVrml97.hpp>	// (SynEditDR)
#include <SynHighlighterGWS.hpp>	// (SynEditDR)
#include <SynHighlighterCPM.hpp>	// (SynEditDR)
#include <SynHighlighterSDD.hpp>	// (SynEditDR)
#include <SynHighlighterXML.hpp>	// (SynEditDR)
#include <SynHighlighterMsg.hpp>	// (SynEditDR)
#include <SynHighlighterIDL.hpp>	// (SynEditDR)
#include <SynHighlighterUnreal.hpp>	// (SynEditDR)
#include <SynHighlighterST.hpp>	// (SynEditDR)
#include <SynHighlighterLDraw.hpp>	// (SynEditDR)
#include <SynURIOpener.hpp>	// (SynEditDR)
#include <IDEMessages.hpp>	// (designide)
#include <Vcl.CaptionedDockTree.hpp>	// (vcl)
#include <Vcl.DockTabSet.hpp>	// (vcl)
#include <PercentageDockTree.hpp>	// (designide)
#include <BrandingAPI.hpp>	// (designide)
#include <Vcl.ExtDlgs.hpp>	// (vcl)
#include <Winapi.Mapi.hpp>	// (rtl)
#include <Vcl.ExtActns.hpp>	// (vcl)
#include <Vcl.ActnMenus.hpp>	// (vclactnband)
#include <Vcl.ActnMan.hpp>	// (vclactnband)
#include <Vcl.PlatformDefaultStyleActnCtrls.hpp>	// (vclactnband)
#include <BaseDock.hpp>	// (designide)
#include <DeskUtil.hpp>	// (designide)
#include <DeskForm.hpp>	// (designide)
#include <DockForm.hpp>	// (designide)
#include <Xml.Win.msxmldom.hpp>	// (xmlrtl)
#include <Xml.xmldom.hpp>	// (xmlrtl)
#include <ToolsAPI.hpp>	// (designide)
#include <Proxies.hpp>	// (designide)
#include <DesignEditors.hpp>	// (designide)
#include <System.Devices.hpp>	// (rtl)
#include <Vcl.AxCtrls.hpp>	// (vcl)
#include <Vcl.AppEvnts.hpp>	// (vcl)
#include <TreeIntf.hpp>	// (designide)
#include <TopLevels.hpp>	// (designide)
#include <StFilSys.hpp>	// (designide)
#include <IDEHelp.hpp>	// (designide)
#include <ComponentDesigner.hpp>	// (designide)
#include <VCLEditors.hpp>	// (designide)
#include <Vcl.Grids.hpp>	// (vcl)
// SO_SFX: 250
// PRG_EXT: .bpl
// BPI_DIR: C:\Users\Public\Documents\Embarcadero\Studio\19.0\Dcp
// OBJ_DIR: C:\Users\Public\Documents\Embarcadero\Studio\19.0\Dcp
// OBJ_EXT: .obj

//-- user supplied -----------------------------------------------------------

namespace Syneditdd
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
}	/* namespace Syneditdd */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYNEDITDD)
using namespace Syneditdd;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SyneditddHPP
