// [2021y-06m-15d][00:05:00] Idrisov Denis R. 001 PRE
#pragma once
#ifndef dTOOLS_BI_GCC_USED_
#define dTOOLS_BI_GCC_USED_ 001 PRE
//==============================================================================
//==============================================================================

#if !defined(dX64) && !defined(dX32)
    #error unknown address-model
#endif

#if !defined(dCRT_VAL)
    #error unknown runtime-c++
#endif

#ifndef __GNUC__
    #error not specified: __GNUC__
#endif

// __GNUC__            - MAJOR
// __GNUC_MINOR__      - MINOR
// __GNUC_PATCHLEVEL__ - PATCH

#define dCOMPILER_INT (__GNUC__ * 10000  + __GNUC_MINOR__ * 100  + __GNUC_PATCHLEVEL__)
#define dCOMPILER_VER __GNUC__.__GNUC_MINOR__.__GNUC_PATCHLEVEL__
#define dCOMPILER_TAG gcc

// example: 
#if dCOMPILER_INT > 30200
    // 3.2.X
#endif

//==============================================================================
//=== SHOW CONFIG-DATA =========================================================

#ifndef dHIDE_CGG_MESSAGE

    #include "../../dmessage.hpp"
    #pragma message("gcc: " dSSTRINGIZE(dCOMPILER_VER))

#endif // !dHIDE_CGG_MESSAGE

//==============================================================================
//==============================================================================
#endif // !dTOOLS_BI_GCC_USED_
