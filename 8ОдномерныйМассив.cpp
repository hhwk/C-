#include <iostream> 
using namespace std;

int main()
{
	int N,F[10000],count=0;
	printf("Vvedite razmer masiva: ");
	cin >> N;
	for (int ii = 0; ii < N; ii++) {
		printf("Vvedite ");
		cout << ii;
		printf(" yacheyku: ");
		cin >> F[ii];
	}
	for (int i = 0; N > i; i++) {
		if (F[i] - F[i + 1] > 0) {
			cout << i;
			count++;
		}
	}
	printf("\n");
	printf("Kol-vo: ");
	cout << count;
}