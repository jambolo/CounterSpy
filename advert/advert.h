#if !defined( ADVERT_H_INCLUDED )
#define ADVERT_H_INCLUDED

#include < windows.h >

#ifdef ADVERT_EXPORTS
#define ADVERT_API __declspec( dllexport )
#else
#define ADVERT_API __declspec( dllimport )
#endif

struct advert_data
{
  long *last_error;
  void *reserved;
};

typedef void ( __cdecl * advert_callback )( void * p );

ADVERT_API BOOL __cdecl _Startup( struct advert_data * data, HINSTANCE hInstance, HWND hWnd, long program_id, short ad_size, unsigned long options );
ADVERT_API BOOL __cdecl _Paint( struct advert_data * data, HDC hDC, int x, int y );
ADVERT_API BOOL __cdecl _OnClick( struct advert_data * data );
ADVERT_API BOOL __cdecl _SetCallback( struct advert_data * data, advert_callback callback, void * p );
ADVERT_API BOOL __cdecl _SetAdRecordedCallback( struct advert_data * data, advert_callback callback , void * p );
ADVERT_API BOOL __cdecl _SetNetworkCallback( struct advert_data * data, advert_callback callback, void * p );
ADVERT_API BOOL __cdecl _SetBandwidthThrottle( struct advert_data * data, long bytes_per_sec );
ADVERT_API BOOL __cdecl _SetMinimumAdDisplayTime( struct advert_data * data, long seconds );
ADVERT_API BOOL __cdecl _IsConnectOkay( struct advert_data * data, int * okay );
ADVERT_API BOOL __cdecl _RetryConnect( struct advert_data * data );
ADVERT_API BOOL __cdecl _SetNetworkState( struct advert_data * data, BOOL isNetUp );
ADVERT_API BOOL __cdecl _SetProxy( struct advert_data * data, char const * server, long port, char const * additional );
ADVERT_API BOOL __cdecl _GetStatus( struct advert_data * data, unsigned long* status, BOOL clear );
ADVERT_API BOOL __cdecl _UseDefaultAd( struct advert_data * data, char const * image_file, char const * url_file );
ADVERT_API BOOL __cdecl _Shutdown( struct advert_data * data );
ADVERT_API BOOL __cdecl _debugTriggerEvent( struct advert_data * data, int num );

// Standard calling convention versions ( for Visual Basic, et. al. )

ADVERT_API BOOL __stdcall std_Startup( struct advert_data * data, HINSTANCE hInstance, HWND hWnd, long program_id, short ad_size, unsigned long options );
ADVERT_API BOOL __stdcall std_Paint( struct advert_data * data, HDC hDC, int x, int y );
ADVERT_API BOOL __stdcall std_OnClick( struct advert_data * data );
ADVERT_API BOOL __stdcall std_SetCallback( struct advert_data * data, advert_callback callback, void * p );
ADVERT_API BOOL __stdcall std_SetAdRecordedCallback( struct advert_data * data, advert_callback callback, void * p );
ADVERT_API BOOL __stdcall std_SetNetworkCallback( struct advert_data * data, advert_callback callback, void * p );
ADVERT_API BOOL __stdcall std_SetBandwidthThrottle( struct advert_data * data, long bytes_per_sec );
ADVERT_API BOOL __stdcall std_SetMinimumAdDisplayTime( struct advert_data * data, long seconds );
ADVERT_API BOOL __stdcall std_IsConnectOkay( struct advert_data * data, int * okay );
ADVERT_API BOOL __stdcall std_RetryConnect( struct advert_data * data );
ADVERT_API BOOL __stdcall std_SetNetworkState( struct advert_data * data, BOOL isNetUp );
ADVERT_API BOOL __stdcall std_SetProxy( struct advert_data * data, char const * server, long port, char const * additional );
ADVERT_API BOOL __stdcall std_GetStatus( struct advert_data * data, unsigned long* status, BOOL clear );
ADVERT_API BOOL __stdcall std_UseDefaultAd( struct advert_data * data, char const * image_file, char const * url_file );
ADVERT_API BOOL __stdcall std_Shutdown( struct advert_data * data );
ADVERT_API BOOL __stdcall std_debugTriggerEvent( struct advert_data * data, int num );


#endif // !defined( ADVERT_H_INCLUDED )