#include <iostream>
#include <Windows.h>
#include <sstream>
#include <cstdlib>

#define PI 3.1415926535

using namespace std;

class Number
{
protected:
    double x, y;
public:
    Number(double a = 0, double b = 0) { x = a; y = b; }
    double minus() { return x - y; }
    double multiplication() { return x * y; }
};

class Real : public Number
{
public:
    Real(double a, double b) : Number(a, b) {};
    Real(double a) : Number(a) {};
    double root() { return pow(x, 1 / y); }
    double degreePI() { return pow(PI, x); }
};

void concole_menu()
{
    cout << "\t*�������� �����!*" << endl;
    cout << endl;
    cout << "1 - ��������" << endl;
    cout << "2 - ���������" << endl;
    cout << "3 - ������ ������������ �������" << endl;
    cout << "4 - ���������� pi � �������" << endl;
    cout << endl;
    cout << "0 - �����" << endl;
    cout << endl;
}

void start_program()
{
    int q = 0;
    do
    {
        system("cls");
        concole_menu();
        cin >> q;
        cout << endl;
        switch (q)
        {
        case 0:
        {
            return;
        }break;
        case 1:
        {
            double a1, b1;
            cout << "������� ������ �����: ";
            cin >> a1;
            cout << "������� ������ �����: ";
            cin >> b1;
            Number A(a1, b1);
            cout << "��������: ";
            cout << A.minus() << endl;
            cout << endl;
        }break;
        case 2:
        {
            double a2, b2;
            cout << "������� ������ �����: ";
            cin >> a2;
            cout << "������� ������ �����: ";
            cin >> b2;
            Number B(a2, b2);
            cout << "������������: ";
            cout << B.multiplication() << endl;
            cout << endl;
        }break;
        case 3:
        {
            double a3, b3;
            cout << "������� �����: ";
            cin >> a3;
            cout << "������� ������� �����: ";
            cin >> b3;
            Real C(a3, b3);
            cout << "�����: ";
            cout << C.root() << endl;
            cout << endl;
        }break;
        case 4:
        {
            double a3;
            cout << "������� ������� � ������� ������ �������� PI: ";
            cin >> a3;
            Real D(a3);
            cout << "�����: ";
            cout << D.degreePI() << endl;
            cout << endl;
        }break;
        }
        system("pause");
    } while (true);
}

int main()
{
    setlocale(LC_ALL, "ru");
    start_program();
    return 0;
}