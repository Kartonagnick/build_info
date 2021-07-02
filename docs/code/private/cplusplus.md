[M]: #main  "печатает версию используемого стандарта с++"
[P]: ../../icons/progress.png
[S]: ../../icons/success.png
[F]: ../../icons/failed.png
[D]: ../../icons/danger.png
[E]: ../../icons/empty.png
[B]: ../../icons/bug.png
[N]: ../../icons/na.png

<a name="main"></a>
[![S]][M] cplusplus v0.0.1
==========================
Приватный хэдер, задача которого:  
напечатать в лог компиляции версию стандарта с++,  
который используется в данной сборке.  

```
#ifdef __cplusplus
    dMESSAGE("__cplusplus: " dSSTRINGIZE(__cplusplus)) 

    #if __cplusplus >= 202002L
        dMESSAGE("c++20: enabled") 
    #elif __cplusplus >= 201703L
        dMESSAGE("c++17: enabled") 
    #elif __cplusplus >= 201402L
        dMESSAGE("c++14: enabled") 
    #elif __cplusplus >= 201103L
        dMESSAGE("c++11: enabled") 
    #else
        dMESSAGE("c++old: enabled") 
    #endif
#else
    dMESSAGE("__cplusplus: not specified") 
#endif
```

<br/>

--------------------------------------------------------------------------------

История изменений 
-----------------

| **ID** | версия          |     дата      |  время   |   ветка    | status  |  
|:------:|:---------------:|:-------------:|:--------:|:----------:|:-------:|  
|  0006  | 0.0.1 [![S]][M] | 2021y-06m-18d | 22:50:00 | [#9-pre]   | RELEASE |  
|  0005  | 0.0.1 [![S]][M] | 2021y-06m-18d | 22:45:00 | [#9-pre]   | DONE    |  
|  0004  | 0.0.1 [![E]][M] | 2021y-06m-18d | 22:35:00 | [#9-pre]   | BEGIN   |  
|  0003  | 0.0.1 [![S]][M] | 2021y-06m-18d | 22:30:00 | [#7-table] | DONE    |  
|  0002  | 0.0.1 [![E]][M] | 2021y-06m-18d | 03:05:00 | [#7-table] | BEGIN   |  
|  0001  | 0.0.1 [![S]][M] | 2021y-06m-17d | 20:50:00 | [#5-impl]  | DONE    |  
|  0000  | 0.0.1 [![E]][M] | 2021y-06m-15d | 00:05:00 | [#5-impl]  | BEGIN   |  

--------------------------------------------------------------------------------

[#9-pre]:   ../../history.md//#v002
[#7-table]: ../../history.md//#v002
[#5-impl]:  ../../history.md//#v002
