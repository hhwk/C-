#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
	char str[100];
	int count=0;
	printf("Vvedite stroku: ");
	cin >> str;

	for (int i = 0; i < strlen(str); i++) {
		if (isupper(str[i])) {
			count++;
		}
	}
	printf("Kol-vo strocnih bukv: ");
	cout << count;
}