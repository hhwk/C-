#include <cmath> //Для возведение в степень pow
#include <iostream>
using namespace std;

int main()
{
	int number;
	printf("Vvedite trehznachnoe chislo: ");
	cin >> number;
	cout << number % 10 << (number / 10) % 10 << number / 100;
}