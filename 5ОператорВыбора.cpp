#include <cmath> //Для возведение в степень pow
#include <math.h>
#include <iostream> 
using namespace std;

int main(int argc, char* argv[])
{
	int a, c, h, S,nomer;
	int koren2 = 1.41421356237;
	printf("1 katet a, 2 gipotenuza c = a√2, 3 vysota h, opushchennaya na gipotenuzu (h = c/2), 4 — ploshchad' S = ch/2 \n");
	printf("Vvedite nomer: ");
	cin >> nomer;
	switch (nomer)
	{
	case 1:
		printf("Vvedite ketet: ");
		cin >> a;
		c = a*koren2;
		printf("Gipotenuza = ");
		cout << c;
		printf("\n");
		h = c / 2;
		printf("Vysota = ");
		cout << h;
		printf("\n");
		S = c * h / 2;
		printf("Ploshchad = ");
		cout << S;
		break;
	case 2:
		printf("Vvedite gipotenuza: ");
		cin >> c;
		h = c / 2;
		a = c / koren2;
		printf("Katet = ");
		cout << a;
		printf("\n");
		printf("Vysota = ");
		cout << h;
		printf("\n");
		S = c * h / 2;
		printf("Ploshchad = ");
		cout << S;
		break;
	case 3:
		printf("Vvedite vysota: ");
		cin >> h;
		c = h * 2;
		a = c / koren2;
		printf("Katet = ");
		cout << a;
		printf("\n");
		printf("Gipotenuza = ");
		cout << c;
		printf("\n");
		S = c * h / 2;
		printf("Ploshchad = ");
		cout << S;
	case 4:
		printf("Vvedite ploshad: ");
		cin >> S;
	}
}