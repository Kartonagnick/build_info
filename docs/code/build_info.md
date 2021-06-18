[M]: #main  "головной файл модуля"
[P]: ../icons/progress.png
[S]: ../icons/success.png
[F]: ../icons/failed.png
[D]: ../icons/danger.png
[E]: ../icons/empty.png
[B]: ../icons/bug.png
[N]: ../icons/na.png

<a name="main"></a>
[![P]][M] build_info v0.0.2
===========================
Отвечает за сбор информации о компиляторе, и конфигурации сборки.  
А так же за вывод этих данных в лог компиляции.  

Данный файл подключает макросы:  
  - `dSHOW_BUILD` - логгирование сборки.  
  - `dCOMPILER_MESSAGE` - вывол сообщений в лог компиляции (не отключаемый)  
  - `dPRAGMA_MESSAGE`- вывол сообщений в лог компиляции (можно отключить)  

Лучше всего его подключать в предварительно скомпилированном заголовке.  
Либо в каком то одном единственном cpp файле.  

Пример использования:  

```
// pch.hpp

// главный файл модуля
#include <build_info.hpp>  

#define dEXAMPLE_MAJOR 2
#define dEXAMPLE_MINOR 0
#define dEXAMPLE_PATCH 6

// вывод информации в лог компиляции
dSHOW_BUILD("[example]", dEXAMPLE)  
```

Вывод в консоль:  
```
2>__cplusplus: 201703L
2>c++17: enabled
2>msvc2019 .......... 16.10.1
2>_MSC_FULL_VER ..... 192829915
2>_MSVC_LANG ........ 201703L
2>_MSC_EXTENSIONS ... enabled
2>[example] enabled -> pch
2>[example] UNSTABLE-DEBUG
2>[example] MTd (debug-static runtime c++)
2>[example] 2.0.6, x64-debug-MTd, unstable
```

Вывод сообщений можно отключить:  
```
dHIDE_CLANG_MESSAGE
dHIDE_MINGW_MESSAGE
dHIDE_MSVC_MESSAGE
dHIDE_GCC_MESSAGE
```

Формат сообщений для clang, gcc, или mingw,  
можно улучшить, если задействовать опции:  
`-ftrack-macro-expansion=0 -fno-diagnostics-show-caret`

Сценарий [Minimalist][Minimalist] включает эти опции автоматически:  

```
if(NOT gVERBOSE_OUTPUT)
    set (build_options "-ftrack-macro-expansion=0 -fno-diagnostics-show-caret")
endif()
```

[Minimalist]: https://github.com/Kartonagnick/cmake-minimalist
    "Minimalist - Универсальный сценарий сборки на языке cmake."  

<br/>

--------------------------------------------------------------------------------

История изменений 
-----------------

| **ID** | версия          |     дата      |  время   |   ветка    | status  |  
|:------:|:---------------:|:-------------:|:--------:|:----------:|:-------:|  
|  0010  | 0.0.2 [![S]][M] | 2021y-06m-18d | 22:50:00 | [#7-table] | RELEASE |  
|  0009  | 0.0.2 [![S]][M] | 2021y-06m-18d | 22:30:00 | [#7-table] | DONE    |  
|  0008  | 0.0.2 [![E]][M] | 2021y-06m-18d | 03:05:00 | [#7-table] | BEGIN   |  
|  0007  | 0.0.2 [![S]][M] | 2021y-06m-17d | 20:50:00 | [#5-impl]  | DONE    |  
|  0006  | 0.0.2 [![E]][M] | 2021y-06m-15d | 00:05:00 | [#5-impl]  | BEGIN   |  
|  0005  | 0.0.1 [![S]][M] | 2021y-06m-13d | 02:00:00 | [#3-frame] | RELEASE |  
|  0004  | 0.0.1 [![S]][M] | 2021y-06m-13d | 01:50:00 | [#3-frame] | DONE    |  
|  0003  | 0.0.1 [![E]][M] | 2021y-06m-13d | 00:05:00 | [#3-frame] | BEGIN   |  
|  0002  | 0.0.0 [![S]][M] | 2021y-06m-08d | 23:55:00 | [#1-docs]  | RELEASE |  
|  0001  | 0.0.0 [![S]][M] | 2021y-06m-08d | 23:50:00 | [#1-docs]  | DONE    |  
|  0000  | 0.0.0 [![E]][M] | 2021y-06m-08d | 22:55:00 | [#1-docs]  | BEGIN   |  

--------------------------------------------------------------------------------

[#7-table]: ../history.md//#v002
[#5-impl]:  ../history.md//#v002
[#3-frame]: ../history.md//#v001
[#1-docs]:  ../history.md//#v000





