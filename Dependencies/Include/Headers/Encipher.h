#pragma once

#ifdef ENCIPHER_EXPORTS
#define ENCIPHER_API __declspec(dllexport)
#else
#define ENCIPHER_API __declspec(dllimport)
#endif

#include <iostream>
#include <vector>
#include <string>

extern "C" ENCIPHER_API void encipher(std::string, std::string);
extern "C" ENCIPHER_API int getIndexEnc(char);
extern "C" ENCIPHER_API void encipheredMsg(std::string);
extern "C" ENCIPHER_API void printCipheredText();

