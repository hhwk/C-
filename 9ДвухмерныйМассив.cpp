#include <iostream> 
using namespace std;

int main()
{
	int a[100][100],count, count1=0,M,N;
	printf("Vvedite M: ");
	cin >> M;
	printf("Vvedite N: ");
	cin >> N;

	for (int i = 0; i < M; i++) {
		for (int ii = 0; ii < M; ii++) {
			printf("Vvedite chislp v yacheyku ");
			cout << i;
			printf(" ");
			cout << ii;
			printf(": ");
			cin >> a[i][ii];
		}
	}
	for (int i = 0; i < N; i++) {
		printf("\n");
		for (int ii = 0; ii < M; ii++) {
			cout << a[ii][i];
			printf(" ");
		}
	}
	for (int ii = 0; ii < N-1; ii++) {
		if (count = 100) {
			count1++;
		}
		count = 0;
		for (int i = 0; i < M-1; i++) {
			if (a[i][3] = a[i][ii]) {
				count++;
			}
		}
	}
	printf("\nKol-vo pohozhih stolbchov: ");
	cout << count1;
}