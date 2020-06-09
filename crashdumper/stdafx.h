#pragma once

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN  // �� Windows ͷ���ų�����ʹ�õ�����
#endif

#include <SDKDDKVer.h>

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS  // ĳЩ CString ���캯��������ʽ��

// �ر� MFC ��һЩ�����Ҿ����ɷ��ĺ��Ե����ؾ�����Ϣ
#define _AFX_ALL_WARNINGS

#include <afxwin.h>  // MFC ��������ͱ�׼���
#include <afxext.h>  // MFC ��չ

#include <afxdisp.h>  // MFC �Զ�����

#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>  // MFC �� Internet Explorer 4 �����ؼ���֧��
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>  // MFC �� Windows �����ؼ���֧��
#endif               // _AFX_NO_AFXCMN_SUPPORT

#include <afxcontrolbars.h>  // MFC ֧�ֹ������Ϳ�����


#include <errno.h>
#include <winsock2.h>
#include <ws2tcpip.h>


#include <string>
#include <vector>
#include <map>
#include <set>
#include <iostream>
#include <fstream>

#include "dbghelp.h"
#include <wininet.h>
#include <mapi.h>          // MAPI function defs
#include <sys/stat.h>
#include <shellapi.h>
#include <Windns.h>
#include <Wspiapi.h>
#include <time.h>
#include <Psapi.h>
#include <tlhelp32.h>

#if _MSC_VER<1400
#define _TCSCPY_S(strDestination, numberOfElements, strSource) _tcscpy(strDestination, strSource)
#define _TCSNCPY_S(strDest, sizeInBytes, strSource, count) _tcsncpy(strDest, strSource, count)
#define STRCPY_S(strDestination, numberOfElements, strSource) strcpy(strDestination, strSource)
#define _TFOPEN_S(_File, _Filename, _Mode) _File = _tfopen(_Filename, _Mode);
#else
#define _TCSCPY_S(strDestination, numberOfElements, strSource) _tcscpy_s(strDestination, numberOfElements, strSource)
#define _TCSNCPY_S(strDest, sizeInBytes, strSource, count) _tcsncpy_s(strDest, sizeInBytes, strSource, count)
#define STRCPY_S(strDestination, numberOfElements, strSource) strcpy_s(strDestination, numberOfElements, strSource)
#define _TFOPEN_S(_File, _Filename, _Mode) _tfopen_s(&(_File), _Filename, _Mode);
#endif

#if _MSC_VER>=1400
#if defined _M_IX86
#pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_IA64
#pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='ia64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_X64
#pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
#pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif

#endif 