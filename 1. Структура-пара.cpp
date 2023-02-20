#include <iostream>
using namespace std;

class Selary
{
private:
    int second,mont,time;
    double first;
public:
    Selary() {};
    Selary(int day, double sel,int month)
    {
        this->mont = month;
        this->first = sel;
        this->second = day;
    }
    ~Selary() {}
    double summa()
    {
        if (mont % 2 == 0) {
            time = 30;
        }
        else {
            time = 31;
        }
        if (mont == 2) {
            time = 28;
        }
        double p = first * time/second;
        return p;
    }
};


int main()
{
    int days;
    double oklad;
    int mon;
    cout << "First:\t";
    cin >> oklad;
    cout << "Second:\t";
    cin >> days;
    cout << "Number of Mounth:\t";
    cin >> mon;
    Selary c(days, oklad,mon);
    cout << "The payment is: " << c.summa();

    system("pause");
    return 0;
}