
#ifndef NTINFO_H
#define NTINFO_H

#include <iostream>
#include <windows.h>

typedef LONG NTSTATUS;
typedef DWORD KPRIORITY;
typedef WORD UWORD;

void* GetThreadStackTopAddress_x86(HANDLE hProcess, HANDLE hThread);

#endif
