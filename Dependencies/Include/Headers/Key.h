#pragma once

#ifdef KEY_EXPORTS
#define KEY_API __declspec(dllexport)
#else
#define KEY_API __declspec(dllimport)
#endif

#include <vector>
#include <string>

extern "C" KEY_API void setKeyVec();
extern "C" KEY_API char getKeyVec(int);
extern "C" KEY_API int getCharIndex(char);
extern "C" KEY_API void setKey(std::string);
extern "C" KEY_API int getKeyVecSize();
extern "C" KEY_API char getCharAt(int);
