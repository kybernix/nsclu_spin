#include <windows.h>

int APIENTRY WinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPTSTR    lpCmdLine,
                     int       nCmdShow)
{
	HANDLE h = OpenEvent( EVENT_ALL_ACCESS, FALSE, "NSCLU_EXTCALL_EVENT" );
	if( h == NULL )
		return -1;

	SetEvent( h );

	return 0;
}
