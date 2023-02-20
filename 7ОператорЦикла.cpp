#include <iostream> 
using namespace std;

int main()
{
	double A,K=0.0,sum=0.0;
	printf("Vvedite A: ");
	cin >> A;
	while (A > sum) {
		K++;
		sum = sum + 1/ K;
	}
	printf("Naimenshaya K: ");
	cout << K;
	printf("\n");
	printf("Summa: ");
	cout << sum;
}