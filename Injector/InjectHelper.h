﻿#pragma once
#include <Windows.h>

BOOL InjectHelper_SetPrivilege(LPCWSTR lpszPrivilege, BOOL bEnablePrivilege);
BOOL InjectHelper_LoadRemoteLibrary(HANDLE hProcess, LPVOID lpRemoteDllWideNameAddr);
BOOL InjectHelper_InjectIntoProcess(HANDLE hProcess, LPCWSTR lpDllName);
