#include <iostream>//���������� �����/������
#include <string>//���������� ��� ������ �� ��������
using namespace std;

int main()
{
    string s;
    setlocale(0, "");
    cout << "������� ������: ";
    getline(cin, s);
    int p1, p2;
    if ((p1 = s.find(' ')) != string::npos)
    {
        p2 = s.find(' ', p1 + 1);
        if (p2 != string::npos)
            cout << "���������: " << s.substr(p1 + 1, p2 - p1) << endl;
    }
    system("pause");
    return 0;
}