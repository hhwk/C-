#include <cmath> //Для возведение в степень pow 
#include <iostream>
#pragma hdrstop // подключение модуля, в котором определены функции ввода и вывода
#include <stdio.h>
using namespace std;

int main(int argc, char* argv[])
{
	int A, B, C;
	printf("Vvedite A: ");
	cin >> A;
	printf("Vvedite B: ");
	cin >> B;
	printf("Vvedite C: ");
	cin >> C;
	printf("Hotya by odno iz chisel A, B, C polozhitelnoe %d\n", ((A>0)) || ((B>0)) || ((C>0)));

}