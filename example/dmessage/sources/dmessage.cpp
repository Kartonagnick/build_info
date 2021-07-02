// [2021y-06m-15d][20:05:00] Idrisov Denis R. 001 PRE

// -ftrack-macro-expansion=1 -fno-diagnostics-show-caret

//==============================================================================
//==============================================================================

#define dSTRINGIZE(...) #__VA_ARGS__
#define dSSTRINGIZE(x) dSTRINGIZE(x)

#if defined(_MSC_VER)
    #define dCOMPILER_MESSAGE(...)  __pragma(message(__VA_ARGS__))
#else
    #define dCOMPILER_MESSAGE(...)  _Pragma(dSTRINGIZE(message __VA_ARGS__))
#endif

#ifdef __cplusplus
    dCOMPILER_MESSAGE("[dmessage] __cplusplus: " dSSTRINGIZE(__cplusplus)) 
#endif

int main(){}

//==============================================================================
//==============================================================================


