#pragma once
#include <iostream>
#include <Windows.h>
#include <include/yyjson.h>
//#define int64 (long long)
std::wstring GetResourceEntry();
std::wstring GetCurrentPath();
std::wstring ResolvePathAndTrimFile(std::wstring path);
bool WebViewIsInstall();
std::wstring GetResourcePath(LPCWSTR _path);
std::wstring Get7ZipInstallPath();
std::wstring Utf8ToUtf16(const std::string& utf8);
std::string Utf16ToUtf8(const std::wstring& utf16);
bool CompareWchatText(const std::wstring& text1, const std::wstring& text2);
std::string U8GetUserDefaultLocaleName();
std::string NuCatGetRealDefaultLocaleName();
bool FileExists(const std::wstring& fileName);
std::string getCurrentDate();
std::string getCurrentTimestamp();