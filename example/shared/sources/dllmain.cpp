// [2021y-06m-15d][20:05:00] Idrisov Denis R. 001 PRE
//==============================================================================
//=== [pch] ====================================================================
// #define dPCH_USED 1
#include <build_info/build_info.hpp>
#include <build_info/build_info.ver>
dSHOW_BUILD("[dll]", dBUILD_INFO)

//==============================================================================
//==============================================================================

#if defined(dMSVC_COMPILER) || defined(dMINGW_COMPILER)

#if defined(_MSC_VER) && !defined(WIN32_LEAN_AND_MEAN)
    #define WIN32_LEAN_AND_MEAN
#endif

#include <windows.h>

BOOL WINAPI DllMain(
    HINSTANCE hinstDLL,  // handle to DLL module
    DWORD fdwReason,     // reason for calling function
    LPVOID lpReserved )  // reserved
{
    (void) hinstDLL;
    (void) fdwReason;
    (void) lpReserved;

    // Perform actions based on the reason for calling.
    switch(fdwReason) 
    { 
        case DLL_PROCESS_ATTACH:
            // Initialize once for each new process.
            // Return FALSE to fail DLL load.
            break;

        case DLL_THREAD_ATTACH:
            // Do thread-specific initialization.
            break;

        case DLL_THREAD_DETACH:
            // Do thread-specific cleanup.
            break;

        case DLL_PROCESS_DETACH:
            // Perform any necessary cleanup.
            break;
    }
    return TRUE;  // Successful DLL_PROCESS_ATTACH.
}

#else

dMESSAGE("skip non-Windows OS")

#endif // defined(dMSVC_COMPILER) || defined(dMINGW_COMPILER)

