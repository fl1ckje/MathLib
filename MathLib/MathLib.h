/*
* В этом файле заголовка мы объявляем функции DLL библиотеки,
которые будем вызывать во внешних приложениях (например, в среде LabVIEW).

В операторах препроцессора мы задаём модификатор __declspec(dllexport)
для объявления функций. Этот модификатор говорит компилятору и компоновщику
экспортировать функции (или переменные) из DLL библиотеки для использования
другими приложениями.
см. https://learn.microsoft.com/ru-ru/cpp/build/walkthrough-creating-and-using-a-dynamic-link-library-cpp?view=msvc-170

Если параметр MATHLIB_EXPORTS не определен (например, когда данный заголовочный
файл включён в клиентское приложение), MATHLIB_API применяет модификатор
__declspec(dllimport) к объявлениям функций и переменных здесь. Этот модификатор
оптимизирует импорт функции или переменной в приложении.

Фактически, атрибуты dllexport и dllimport - расширения для C и C++.
Их можно использовать для экспорта функций, данных и объектов в DLL библиотеку
или импорта из такой библиотеки.
см. https://learn.microsoft.com/ru-ru/cpp/cpp/dllexport-dllimport?view=msvc-170

Мы бы могли напротив каждой функции написать такие атрибуты, как здесь:

#define DllImport   __declspec( dllimport )
#define DllExport   __declspec( dllexport )

DllExport int sum(const int a, const int b);
DllExport const float PI = 3.14f;

но можно сделать проще, указав в операторах препроцессора API всего решения/проекта,
что применяет данные атрибуты ко всем объявлениям функций и переменных.

Имя двух макросов здесь зависит от названия проекта.
Синтакис:
<НАЗВАНИЕПРОЕКТА>_EXPORTS
<НАЗВАНИЕПРОЕКТА>_API
*/

#pragma once
#ifdef MATHLIB_EXPORTS
#define MATHLIB_API __declspec(dllexport)
#else
#define MATHLIB_API __declspec(dllimport)
#endif

/*
Здесь мы задаём внешние функции и объекты, доступные для использования в
других приложениях и исходных файлах проекта.
см. https://learn.microsoft.com/ru-ru/cpp/cpp/extern-cpp?view=msvc-170
https://metanit.com/cpp/tutorial/3.9.php

Чтобы экспортировать DLL библиотеку, достаточно:
1) выбрать конфигурацию сборки Debug для отладки или Release для конечного целевого использования;
2) перейти в пункт "Сборка" => "Собрать решение" или нажать комбинацию клавиш Ctrl + Shift + B.

Если ошибок не будет (можно отследить в окне вывода), то DLL файл будет расположен по пути:
для x64:
"MathLib\x64\Release" для конфигурации "Release" или по пути "MathLib\x64\Debug" для конфигурации Debug
для x86:
"MathLib\Release" для конфигурации "Release" или по пути "MathLib\Debug" для конфигурации Debug

ВНИМАНИЕ!!!
В LabVIEW x86 (32-бит) можно вызывать функции только из DLL разрядности x86
В LabVIEW x64 (64-бит) можно вызывать функции только из DLL разрядности x64
*/

extern "C" MATHLIB_API int sum(const int x, const int y);

extern "C" MATHLIB_API int subtract(const int x, const int y);

extern "C" MATHLIB_API int multiply(const int x, const int y);

extern "C" MATHLIB_API int divide(const int x, const int y);

extern "C" MATHLIB_API int square(const int x);

extern "C" MATHLIB_API float get_pi();

extern const float PI = 3.14159265359f;