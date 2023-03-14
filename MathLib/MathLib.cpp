/*
� ���� ����� �� ��������� �������, ����������� �
���������� ������������ �����. �� ���������
������������ ���� � ���� ���������� ����� ��������� include.
*/

#include "pch.h"
#include "MathLib.h"

/// <summary>
/// �������, ������������ ����� ���� ����� �����
/// </summary>
/// <param name="x">������ ���������</param>
/// <param name="y">������ ���������</param>
/// <returns>x + y</returns>
int sum(const int x, const int y)
{
    return x + y;
}

/// <summary>
/// �������, ������������ �������� ���� ����� �����
/// </summary>
/// <param name="x">����������� �����</param>
/// <param name="y">���������� �����</param>
/// <returns>x - y</returns>
int subtract(const int x, const int y)
{
    return x - y;
}

/// <summary>
/// �������, ������������ ������������ ���� ����� �����
/// </summary>
/// <param name="x">������ ���������</param>
/// <param name="y">������ ���������</param>
/// <returns>x * y</returns>
int multiply(const int x, const int y)
{
    return x * y;
}

/// <summary>
/// �������, ������������ ������� ���� ����� �����
/// </summary>
/// <param name="x">�������</param>
/// <param name="y">��������</param>
/// <returns>x / y</returns>
int divide(const int x, const int y)
{
    return x / y;
}

/// <summary>
/// �������, ������������ ������� ������ �����
/// </summary>
/// <param name="x">�������� �����</param>
/// <returns>x ^ 2</returns>
int square(const int x)
{
    return x * x;
}

/// <summary>
/// �������, ������������ ��������� ��
/// </summary>
/// <returns>PI = 3.14159265359</returns>
float get_pi()
{
    return PI;
}
