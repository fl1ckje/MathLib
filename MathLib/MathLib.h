/*
* � ���� ����� ��������� �� ��������� ������� DLL ����������,
������� ����� �������� �� ������� ����������� (��������, � ����� LabVIEW).

� ���������� ������������� �� ����� ����������� __declspec(dllexport)
��� ���������� �������. ���� ����������� ������� ����������� � ������������
�������������� ������� (��� ����������) �� DLL ���������� ��� �������������
������� ������������.
��. https://learn.microsoft.com/ru-ru/cpp/build/walkthrough-creating-and-using-a-dynamic-link-library-cpp?view=msvc-170

���� �������� MATHLIB_EXPORTS �� ��������� (��������, ����� ������ ������������
���� ������� � ���������� ����������), MATHLIB_API ��������� �����������
__declspec(dllimport) � ����������� ������� � ���������� �����. ���� �����������
������������ ������ ������� ��� ���������� � ����������.

����������, �������� dllexport � dllimport - ���������� ��� C � C++.
�� ����� ������������ ��� �������� �������, ������ � �������� � DLL ����������
��� ������� �� ����� ����������.
��. https://learn.microsoft.com/ru-ru/cpp/cpp/dllexport-dllimport?view=msvc-170

�� �� ����� �������� ������ ������� �������� ����� ��������, ��� �����:

#define DllImport   __declspec( dllimport )
#define DllExport   __declspec( dllexport )

DllExport int sum(const int a, const int b);
DllExport const float PI = 3.14f;

�� ����� ������� �����, ������ � ���������� ������������� API ����� �������/�������,
��� ��������� ������ �������� �� ���� ����������� ������� � ����������.

��� ���� �������� ����� ������� �� �������� �������.
��������:
<���������������>_EXPORTS
<���������������>_API
*/

#pragma once
#ifdef MATHLIB_EXPORTS
#define MATHLIB_API __declspec(dllexport)
#else
#define MATHLIB_API __declspec(dllimport)
#endif

/*
����� �� ����� ������� ������� � �������, ��������� ��� ������������� �
������ ����������� � �������� ������ �������.
��. https://learn.microsoft.com/ru-ru/cpp/cpp/extern-cpp?view=msvc-170
https://metanit.com/cpp/tutorial/3.9.php

����� �������������� DLL ����������, ����������:
1) ������� ������������ ������ Debug ��� ������� ��� Release ��� ��������� �������� �������������;
2) ������� � ����� "������" => "������� �������" ��� ������ ���������� ������ Ctrl + Shift + B.

���� ������ �� ����� (����� ��������� � ���� ������), �� DLL ���� ����� ���������� �� ����:
��� x64:
"MathLib\x64\Release" ��� ������������ "Release" ��� �� ���� "MathLib\x64\Debug" ��� ������������ Debug
��� x86:
"MathLib\Release" ��� ������������ "Release" ��� �� ���� "MathLib\Debug" ��� ������������ Debug

��������!!!
� LabVIEW x86 (32-���) ����� �������� ������� ������ �� DLL ����������� x86
� LabVIEW x64 (64-���) ����� �������� ������� ������ �� DLL ����������� x64
*/

extern "C" MATHLIB_API int sum(const int x, const int y);

extern "C" MATHLIB_API int subtract(const int x, const int y);

extern "C" MATHLIB_API int multiply(const int x, const int y);

extern "C" MATHLIB_API int divide(const int x, const int y);

extern "C" MATHLIB_API int square(const int x);

extern "C" MATHLIB_API float get_pi();

extern const float PI = 3.14159265359f;