// adimage.cpp : Defines the entry point for the DLL application.
//

#include "adimage.h"

#include <windows.h>

BOOL APIENTRY DllMain( HANDLE hModule, 
                       DWORD  ul_reason_for_call, 
                       LPVOID lpReserved
					 )
{
    switch (ul_reason_for_call)
	{
		case DLL_PROCESS_ATTACH:
		case DLL_THREAD_ATTACH:
		case DLL_THREAD_DETACH:
		case DLL_PROCESS_DETACH:
			break;
    }
    return TRUE;
}


ADIMAGE_API	BOOL __cdecl Initialize( HWND hWnd, unsigned long software_id, unsigned long version, unsigned long ad_size_id, unsigned long flags )
{
	return TRUE;
}



ADIMAGE_API BOOL __cdecl StartMessaging( unsigned long software_id )
{
	return TRUE;
}

