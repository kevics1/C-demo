; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CEx4View
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "ex4.h"
LastPage=0

ClassCount=9
Class1=CEx4App
Class2=CEx4Doc
Class3=CEx4View
Class4=CMainFrame

ResourceCount=6
Resource1=IDD_DLG_Tst
Class5=CAboutDlg
Resource2=IDD_DLG_InputCircle
Class6=CDlgInputPnt
Resource3=IDD_ABOUTBOX
Class7=CDlgInputCircle
Resource4=IDR_MAINFRAME
Class8=CDlgTst
Resource5=IDD_DLG_InputPnt
Class9=CDlgInputSquare
Resource6=IDD_DLG_InputSquare

[CLS:CEx4App]
Type=0
HeaderFile=ex4.h
ImplementationFile=ex4.cpp
Filter=N
LastObject=CEx4App

[CLS:CEx4Doc]
Type=0
HeaderFile=ex4Doc.h
ImplementationFile=ex4Doc.cpp
Filter=N
LastObject=CEx4Doc

[CLS:CEx4View]
Type=0
HeaderFile=ex4View.h
ImplementationFile=ex4View.cpp
Filter=C
BaseClass=CView
VirtualFilter=VWC
LastObject=CEx4View


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
LastObject=ID_MaxArea




[CLS:CAboutDlg]
Type=0
HeaderFile=ex4.cpp
ImplementationFile=ex4.cpp
Filter=D
LastObject=ID_EDIT_UNDO

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
Command10=ID_EDIT_UNDO
Command11=ID_EDIT_CUT
Command12=ID_EDIT_COPY
Command13=ID_EDIT_PASTE
Command14=ID_VIEW_TOOLBAR
Command15=ID_VIEW_STATUS_BAR
Command16=ID_APP_ABOUT
Command17=ID_NewCircle
Command18=ID_DrawPoint
Command19=ID_NewSquare
Command20=ID_ShowTstDlg
Command21=ID_MaxArea
Command22=ID_GT_NewPoint
Command23=ID_GT_NewCircle
Command24=ID_GT_NewRec
Command25=ID_GT_NewSquare
CommandCount=25

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[TB:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
Command9=ID_ReadData
Command10=ID_TestHit
Command11=ID_DrawPoint
Command12=ID_CDCTST
Command13=ID_NewPolyline
Command14=ID_GT_HitSel
CommandCount=14

[DLG:IDD_DLG_InputPnt]
Type=1
Class=CDlgInputPnt
ControlCount=6
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_PntX,static,1342308352
Control4=IDC_EDITX,edit,1350639744
Control5=IDC_PntX2,static,1342308352
Control6=IDC_EDITY,edit,1350639744

[CLS:CDlgInputPnt]
Type=0
HeaderFile=DlgInputPnt.h
ImplementationFile=DlgInputPnt.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC

[DLG:IDD_DLG_InputCircle]
Type=1
Class=CDlgInputCircle
ControlCount=8
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_PntX,static,1342308352
Control4=IDC_EDITX,edit,1350639744
Control5=IDC_PntX2,static,1342308352
Control6=IDC_EDITY,edit,1350639744
Control7=IDC_PntX3,static,1342308352
Control8=IDC_EDITRadius,edit,1350639744

[CLS:CDlgInputCircle]
Type=0
HeaderFile=DlgInputCircle.h
ImplementationFile=DlgInputCircle.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CDlgInputCircle

[DLG:IDD_DLG_Tst]
Type=1
Class=CDlgTst
ControlCount=6
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_EDIT1,edit,1350631552
Control4=IDC_BUTTON1,button,1342242816
Control5=IDC_BUTTON2,button,1342242816
Control6=IDC_BUTTON3,button,1342242816

[CLS:CDlgTst]
Type=0
HeaderFile=DlgTst.h
ImplementationFile=DlgTst.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CDlgTst

[DLG:IDD_DLG_InputSquare]
Type=1
Class=CDlgInputSquare
ControlCount=8
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_PntX,static,1342308352
Control4=IDC_EDITX,edit,1350639744
Control5=IDC_PntX2,static,1342308352
Control6=IDC_EDITY,edit,1350639744
Control7=IDC_PntX3,static,1342308352
Control8=IDC_EDITRadius,edit,1350639744

[CLS:CDlgInputSquare]
Type=0
HeaderFile=DlgInputSquare.h
ImplementationFile=DlgInputSquare.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_EDITX
VirtualFilter=dWC

