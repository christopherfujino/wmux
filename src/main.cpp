#include <stdio.h>
#include <windows.h>

int main() {
  STARTUPINFO si;
  PROCESS_INFORMATION pi;

  ZeroMemory(&si, sizeof(si));
  si.cb = sizeof(si);
  ZeroMemory(&pi, sizeof(pi));

  char command[] = "ls";

  if (!CreateProcess(NULL,    // lpApplicationName
                     command, // lpCommandLine
                     NULL,    // lpProcessAttributes
                     NULL,    // lpThreadAttributes
                     TRUE,   // bInheritHandles
                     0,       // dwCreationFlags (no creation flags)
                     NULL,    // lpEnvironment (use parent's env)
                     NULL,    // lpCurrentDirectory (use parent)
                     &si,     // lpStartupInfo
                     &pi      // lpProcessInformation
                     )) {
    fprintf(stderr, "CreateProcess call failed (%ld)\n", GetLastError());
    return 1;
  }

  printf("Waiting for child process...\n");

  // Wait until process exits
  WaitForSingleObject(pi.hProcess, INFINITE);

  printf("Process exited!\n");
  // Close process and thread handles.
  CloseHandle(pi.hProcess);
  CloseHandle(pi.hThread);

  return 0;
}
