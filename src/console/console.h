#ifndef __CONSOLE_HEADER__
#define __CONSOLE_HEADER__

// Credit: Christopher Oicles
// http://stackoverflow.com/questions/16500726/open-write-to-console-from-a-c-dll
// Stack overflow post

#include <stdio.h>

class CConsole {
	FILE m_OldStdin, m_OldStdout;
	bool m_OwnConsole = false;
public:
	CConsole();
	~CConsole();
};

#endif