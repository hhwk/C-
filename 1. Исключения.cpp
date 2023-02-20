#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

struct Date
{
    int day;
    int month;
    int year;
};

int date(Date z)
{
    int a;
    int y;
    int m;
    int R;
    a = (14 - z.month) / 12;
    y = z.year - a;
    m = z.month + 12 * a - 2;
    R = 7000 + (z.day + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12);
    return R % 7;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    Date z;
    char C;
    string S[7] = { "Воскресенье", "Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота" };
    cout << "Введите дату через пробел: ";
    cin >> z.day >> z.month >> z.year;
    cout << S[date(z)] << endl;

    _getch();
    return 0;
}