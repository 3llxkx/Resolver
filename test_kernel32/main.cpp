#include <windows.h>
#include <stdio.h>
#include "2.hpp"

int main() {
	auto base = reinterpret_cast<std::uintptr_t>(LI_FIND(LoadLibraryA)("user32.dll"));
	LI_GET(base, MessageBoxA)(nullptr, "I have no imports", "yes", 0);

	uintptr_t msvcrtLib = reinterpret_cast<uintptr_t>(LI_FIND(LoadLibraryA)(("msvcrt.dll")));
	LI_GET(msvcrtLib, printf)("This is a message from dynamically loaded printf.\n");
	return 0;
}