// Copyright AGADO Studio. All Rights Reserved.

#ifndef _COMMON_HEADERS_H_
#define _COMMON_HEADERS_H_

#define WIN32_LEAN_AND_MEAN // Exclude rarely-used stuff from Windows headers
// Windows Header Files
#include <windows.h>

#include <iostream>


#ifdef AGADOENGINE_EXPORTS
#define AGADOENGINE_API __declspec(dllexport)
#else
#define AGADOENGINE_API __declspec(dllimport)
#endif

#endif // _COMMON_HEADERS_H_