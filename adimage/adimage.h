#if !defined( ADIMAGE_H_INCLUDED )
#define ADIMAGE_H_INCLUDED

#include <windows.h>

#ifdef ADIMAGE_EXPORTS
#define ADIMAGE_API __declspec( dllexport )
#else
#define ADIMAGE_API __declspec( dllimport )
#endif


ADIMAGE_API	BOOL __cdecl Initialize( HWND hWnd, unsigned long software_id, unsigned long version, unsigned long ad_size_id, unsigned long flags );
ADIMAGE_API BOOL __cdecl StartMessaging( unsigned long software_id );


#endif // !defined( ADIMAGE_H_INCLUDED )