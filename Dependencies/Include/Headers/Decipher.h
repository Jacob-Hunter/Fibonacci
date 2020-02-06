#pragma once

#ifdef DECIPHER_EXPORTS
#define DECIPHER_API __declspec(dllexport)
#else
#define DECIPHER_API __declspec(dllimport)
#endif

#include <vector>
#include <string>
#include <iostream>

extern "C" DECIPHER_API void decipher(std::string, std::string);
extern "C" DECIPHER_API int getIndexDec(unsigned long long);
extern "C" DECIPHER_API void decipherMsg(std::string);
extern "C" DECIPHER_API void printDecipheredText();


