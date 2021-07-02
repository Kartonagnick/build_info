[M]: #main  "история проекта"
[P]: icons/progress.png
[S]: icons/success.png
[B]: icons/bug.png

<a name="main"></a>
**История изменений**  

Основан: 8 июня, 2021 года, в 22:48:19, Картонажником
=====================================================

[2021y-06m-08d][22:48:19] Idrisov Denis R.  
[2021y-06m-08d][22:48:19] birthday of the project  

-----------------------------------------------------

<a name="v003"></a>
[![P]][M] **Версия 0.0.3 (предварительная)**
--------------------------------------------
[2021y-07m-02d][14:00:00] время коммита в мастере  

|      дата     |  время   |     ветка     | статус |  
|:-------------:|:--------:|:-------------:|:------:|  
| 2021y-07m-02d | 13:45:00 | [#11-example] | DONE   |  
| 2021y-07m-02d | 10:35:00 | [#11-example] | BEGIN  |  

1) add: примеры использования:  
     - upd: `sources/pch.hpp`  
     - upd: `test/sources/pch.hpp`  

2) add: примеры-иллюстрации:  
     - add: `example/dmessage`  
     - add: `example/static`  
     - add: `example/shared`  

3) upd: версия модуля:  
     - upd: `build_info.hpp`     003 PRE  
     - upd: `build_info.ver`     003 PRE  
     - upd: `docs/build_info.md` 003 PRE  
     - upd: `docs/table.md`      003 PRE  

[#11-example]: tasks/2021y-07m-02d-0011-example.md

-----------------------------------------------------

<a name="v002"></a>
[![S]][M] **Версия 0.0.2 (предварительная)**
--------------------------------------------
[2021y-06m-18d][22:50:00] время коммита в мастере  

|      дата     |  время   |   ветка    | статус |  
|:-------------:|:--------:|:----------:|:------:|  
| 2021y-06m-18d | 22:45:00 | [#9-pre]   | DONE   |  
| 2021y-06m-18d | 22:35:00 | [#9-pre]   | BEGIN  |  

1) Обработана реализация  
2) Обработана документация  

[#9-pre]: tasks/2021y-06m-18d-0009-pre.md

|      дата     |  время   |   ветка    | статус |  
|:-------------:|:--------:|:----------:|:------:|  
| 2021y-06m-18d | 22:30:00 | [#7-table] | DONE   |  
| 2021y-06m-18d | 03:05:00 | [#7-table] | BEGIN  |  

1) upd: `README.md`  

2) Документация API:  
     - add: `docs/table.md`              002 PRE  
       - add: `docs/code/build_info.md`    002 PRE  
       - add: `docs/code/dmessage.md`      001 PRE  

3) Документация деталей: 
     - add: `docs/private/compilers.md`    001 PRE  
     - add: `docs/private/cplusplus.md`    001 PRE  
     - add: `docs/private/select.md`       001 PRE  
     - add: `docs/private/show.md`         001 PRE  

[#7-table]: tasks/2021y-06m-18d-0007-table.md

|      дата     |  время   |   ветка   | статус |  
|:-------------:|:--------:|:---------:|:------:|  
| 2021y-06m-17d | 20:00:00 | [#5-impl] | DONE   |  
| 2021y-06m-15d | 00:05:00 | [#5-impl] | BEGIN  |  

1) add: `build_info`  
     - upd: `build_info.hpp`      002 PRE  
     - upd: `build_info.ver`      002 PRE  
     - add: `dmessage.hpp`        001 PRE  

2) add: `build_info/private`  
     - add: `compilers.hpp`       001 PRE  
     - add: `cplusplus.hpp`       001 PRE  
     - add: `select.hpp`          001 PRE  
     - add: `show.hpp`            001 PRE  

3) add: `build_info/compilers`  
     - add: `clang.hpp`           001 PRE  
     - add: `gcc.hpp`             001 PRE  
     - add: `mingw.hpp`           001 PRE  
     - add: `msvc.hpp`            001 PRE  
     - add: `zfinal.hpp`          001 PRE  

[#5-impl]: tasks/2021y-06m-15d-0005-impl.md

-----------------------------------------------------

<a name="v001"></a>
[![S]][M] **Версия 0.0.1 (предварительная)**
--------------------------------------------
[2021y-06m-13d][02:00:00] время коммита в мастере  

|      дата     |  время   |   ветка    | статус |  
|:-------------:|:--------:|:----------:|:------:|  
| 2021y-06m-13d | 01:50:00 | [#3-frame] | DONE   |  
| 2021y-06m-13d | 00:05:00 | [#3-frame] | BEGIN  |  

1) add: `project.root`  
2) upd: `deploy`  
3) upd: `build_info.hpp` 001  
4) upd: `build_info.ver` 001  
5) add: `test`:  
     - add: `test-classic.cpp` 001  
     - add: `test-modern.cpp`  001  

[#3-frame]: tasks/2021y-06m-13d-0003-frame.md

-----------------------------------------------------

<a name="v000"></a>
[![S]][M] **Версия 0.0.0 (предварительная)**
--------------------------------------------
[2021y-06m-08d][23:55:00] время коммита в мастере  

|      дата     |  время   |   ветка   | статус |  
|:-------------:|:--------:|:---------:|:------:|  
| 2021y-06m-08d | 23:50:00 | [#1-docs] | DONE   |  
| 2021y-06m-08d | 22:55:00 | [#1-docs] | BEGIN  |  

1) upd: `.gitignore`  
2) upd: `README.md`  
3) upd: `LICENSE`  

4) add: `docs`:  
     - add: `logo.png`             000  
     - add: `icons`  
     - add: `tasks`  

5) реализация:
     - add: `docs/utils`           003  
       - add: `git-date.bat`         003  
       - add: `backup.bat`           001  

6) документация:
     - add: `docs/utils`  
       - add: `table.md`           003  
         - add: `docs/git-date.md`   003  
         - add: `docs/backup.md`     001  

[#1-docs]: tasks/2021y-06m-08d-0001-docs.md

-----------------------------------------------------

