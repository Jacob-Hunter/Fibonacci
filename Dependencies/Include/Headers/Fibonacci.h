#pragma once

#ifdef FIBONACCILIBRARY_EXPORTS
@define FIBONACCILIBRARY_API __declspec(dllexport)
#else
#define FIBONACCILIBRARY_API __declspec(dllimport)
#endif

#include <vector>

extern "C" FIBONACCILIBRARY_API void setKeyLength(int);
extern "C" FIBONACCILIBRARY_API unsigned long long getFibVal(int);
extern "C" FIBONACCILIBRARY_API void fillFibArray();
extern "C" FIBONACCILIBRARY_API int getFibIndex(unsigned long long);

