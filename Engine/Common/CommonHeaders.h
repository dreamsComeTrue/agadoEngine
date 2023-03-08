// Copyright AGADO Studio. All Rights Reserved.

#ifndef _COMMON_HEADERS_H_
#define _COMMON_HEADERS_H_

#define WIN32_LEAN_AND_MEAN // Exclude rarely-used stuff from Windows headers
// Windows Header Files
#include <windows.h>

#include <algorithm>
#include <chrono>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <memory>
#include <sstream>
#include <string>
#include <vector>

#ifdef AGADOENGINE_EXPORTS
#define AGADOENGINE_API __declspec(dllexport)
#define AGADOENGINE_EXTERN
#else
#define AGADOENGINE_API __declspec(dllimport)
#define AGADOENGINE_EXTERN extern
#endif

#endif // _COMMON_HEADERS_H_