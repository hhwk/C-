#include <cmath> //Для возведение в степень pow 
#include <iostream> 
using namespace std;

int main()
{
	int x;
	int f;
	string x1 = "x=";
	cout << x1;
	cin >> x;
	if (x < -2) {
		f = 2 * x;
	}
	else if (x > 2) {
		f = 2 * x;
	}
	else {
		f = -3 * x;
	}
	string lol = "f(x)= ";
	cout << lol;
	cout << f;
}