/*
В этом файле мы реализуем функции, прописанные в
одноимённом заголовочном файле. Мы связываем
заголовочный файл с этим исходником через директиву include.
*/

#include "pch.h"
#include "MathLib.h"

/// <summary>
/// Функция, возвращающая сумму двух целых чисел
/// </summary>
/// <param name="x">Первое слагаемое</param>
/// <param name="y">Второе слагаемое</param>
/// <returns>x + y</returns>
int sum(const int x, const int y)
{
    return x + y;
}

/// <summary>
/// Функция, возвращающая разность двух целых чисел
/// </summary>
/// <param name="x">Уменьшаемое число</param>
/// <param name="y">Вычитаемое число</param>
/// <returns>x - y</returns>
int subtract(const int x, const int y)
{
    return x - y;
}

/// <summary>
/// Функция, возвращающая произведение двух целых чисел
/// </summary>
/// <param name="x">Первый множитель</param>
/// <param name="y">Второй множитель</param>
/// <returns>x * y</returns>
int multiply(const int x, const int y)
{
    return x * y;
}

/// <summary>
/// Функция, возвращающая частное двух целых чисел
/// </summary>
/// <param name="x">Делимое</param>
/// <param name="y">Делитель</param>
/// <returns>x / y</returns>
int divide(const int x, const int y)
{
    return x / y;
}

/// <summary>
/// Функция, возвращающая квадрат целого числа
/// </summary>
/// <param name="x">Исходное число</param>
/// <returns>x ^ 2</returns>
int square(const int x)
{
    return x * x;
}

/// <summary>
/// Функция, возвращающая константу Пи
/// </summary>
/// <returns>PI = 3.14159265359</returns>
float get_pi()
{
    return PI;
}
