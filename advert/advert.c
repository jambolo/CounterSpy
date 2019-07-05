#include "advert.h"

#include <windows.h>

#ifdef __cplusplus
#error cplusplus
#endif

BOOL APIENTRY DllMain( HANDLE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
    switch ( ul_reason_for_call )
	{
		case DLL_PROCESS_ATTACH:
		case DLL_THREAD_ATTACH:
		case DLL_THREAD_DETACH:
		case DLL_PROCESS_DETACH:
			break;
    }
    return TRUE;
}


ADVERT_API BOOL __cdecl _Startup( struct advert_data * data, HINSTANCE hInstance, HWND hWnd, long program_id, short ad_size, unsigned long options )
{
	// Make sure the error field is cleared (if supplied) in case the app expects this

	if ( data->last_error )
		*data->last_error = 0;

	// Do nothing, return success

	return TRUE;
}



ADVERT_API BOOL __cdecl _Paint( struct advert_data * data, HDC hDC, int x, int y )
{

	// Do nothing, return success

	return TRUE;
}



ADVERT_API BOOL __cdecl _OnClick( struct advert_data * data )
{

	// Do nothing, return success

	return TRUE;
}



ADVERT_API BOOL __cdecl _SetCallback( struct advert_data * data, advert_callback callback, void * p )
{

	// Do nothing, return success

	return TRUE;
}



ADVERT_API BOOL __cdecl _SetAdRecordedCallback( struct advert_data * data, advert_callback callback, void * p )
{

	// Do nothing, return success

	return TRUE;
}



ADVERT_API BOOL __cdecl _SetNetworkCallback( struct advert_data * data, advert_callback callback, void * p )
{

	// Do nothing, return success

	return TRUE;
}



ADVERT_API BOOL __cdecl _SetBandwidthThrottle( struct advert_data * data, long bytes_per_second )
{

	// Do nothing, return success

	return TRUE;
}



ADVERT_API BOOL __cdecl _SetMinimumAdDisplayTime( struct advert_data * data, long seconds )
{

	// Do nothing, return success

	return TRUE;
}



ADVERT_API BOOL __cdecl _IsConnectOkay( struct advert_data * data, int * okay )
{
	// Gee, no matter how hard I try, I just can't connect to the ad server.

	*okay = 0;

	// Return success

	return TRUE;
}



ADVERT_API BOOL __cdecl _RetryConnect( struct advert_data * data )
{

	// Do nothing, return success

	return TRUE;
}



ADVERT_API BOOL __cdecl _SetNetworkState( struct advert_data * data, BOOL isNetUp )
{

	// Do nothing, return success

	return TRUE;
}



ADVERT_API BOOL __cdecl _SetProxy( struct advert_data * data, char const * server, long port, char const * additional )
{

	// Do nothing, return success

	return TRUE;
}



ADVERT_API BOOL __cdecl _GetStatus( struct advert_data * data, unsigned long * status, BOOL clear )
{
	// Return the following status: winsock is not started, network is not up,
	//								connect failed, proxy failed, click failed, idle
	// Those ad servers are so unreliable!

	*status = 0x00000010 | 0x00000040 | 0x00000100 | 0x00001000;

	// Return success

	return TRUE;
}



ADVERT_API BOOL __cdecl _UseDefaultAd( struct advert_data * data, char const * image_file, char const * url_file )
{

	// Do nothing, return success

	return TRUE;
}



ADVERT_API BOOL __cdecl _Shutdown( struct advert_data * data )
{
	// Do nothing, return success

	return TRUE;
}



ADVERT_API BOOL __cdecl _debugTriggerEvent( struct advert_data * data, int num )
{

	// Do nothing, return success

	return TRUE;
}



// Standard calling convention versions ( for Visual Basic, et. al. )


ADVERT_API BOOL __stdcall std_Startup( struct advert_data * data, HINSTANCE hInstance, HWND hWnd, long program_id, short ad_size, unsigned long options )
{
	return _Startup( data, hInstance, hWnd, program_id, ad_size, options );
}



ADVERT_API BOOL __stdcall std_Paint( struct advert_data * data, HDC hDC, int x, int y )
{
	return _Paint( data, hDC, x, y );
}



ADVERT_API BOOL __stdcall std_OnClick( struct advert_data * data )
{
	return _OnClick( data );
}



ADVERT_API BOOL __stdcall std_SetCallback( struct advert_data * data, advert_callback callback, void * p )
{
	return _SetCallback( data, callback, p );
}



ADVERT_API BOOL __stdcall std_SetAdRecordedCallback( struct advert_data * data, advert_callback callback, void * p )
{
	return _SetAdRecordedCallback( data, callback, p );
}



ADVERT_API BOOL __stdcall std_SetNetworkCallback( struct advert_data * data, advert_callback callback, void * p )
{
	return _SetNetworkCallback( data, callback, p );
}



ADVERT_API BOOL __stdcall std_SetBandwidthThrottle( struct advert_data * data, long bytes_per_sec )
{
	return _SetBandwidthThrottle( data, bytes_per_sec );
}



ADVERT_API BOOL __stdcall std_SetMinimumAdDisplayTime( struct advert_data * data, long seconds )
{
	return _SetMinimumAdDisplayTime( data, seconds );
}



ADVERT_API BOOL __stdcall std_IsConnectOkay( struct advert_data * data, int * okay )
{
	return _IsConnectOkay( data, okay );
}



ADVERT_API BOOL __stdcall std_RetryConnect( struct advert_data * data )
{
	return _RetryConnect( data );
}



ADVERT_API BOOL __stdcall std_SetNetworkState( struct advert_data * data, BOOL isNetUp )
{
	return _SetNetworkState( data, isNetUp );
}



ADVERT_API BOOL __stdcall std_SetProxy( struct advert_data * data, char const * server, long port, char const * additional )
{
	return _SetProxy( data, server, port, additional );
}



ADVERT_API BOOL __stdcall std_GetStatus( struct advert_data * data, unsigned long * status, BOOL clear )
{
	return _GetStatus( data, status, clear );
}



ADVERT_API BOOL __stdcall std_UseDefaultAd( struct advert_data * data, char const * image_file, char const * url_file )
{
	return _UseDefaultAd( data, image_file, url_file );
}



ADVERT_API BOOL __stdcall std_Shutdown( struct advert_data * data )
{
	return _Shutdown( data );
}



ADVERT_API BOOL __stdcall std_debugTriggerEvent( struct advert_data * data, int num )
{
	return _debugTriggerEvent( data, num );
}



