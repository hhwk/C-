#include <iostream> 
using namespace std;

int main()
{
	int A, N, time,i;
	printf("Vvedite A: ");
	cin >> A;
	time = A;
	printf("Vvedite N: ");
	cin >> N;
	for (i = 0; i != N; i++) {
		time = time * A;
		cout << time;
		printf("\n");
	}
}