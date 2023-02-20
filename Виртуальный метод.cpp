#include <iostream>
#include <string>
#include <string.h>
using System;
using namespace std;


class Array {
public:
	static const int n = 10;

	int array_size;
	int number_remake = 53001;
	int razrad = 1;

	unsigned char array[n];

	Array() {

		array_size = sizeof array / sizeof array[0];

		if (number_remake < 0) array[0] = '-';
		else array[0] = '+';


		while (number_remake > 0) {
			array[razrad] = (char(number_remake % 10) + 0);
			number_remake = number_remake / 10;
			razrad++;
		};
	}


	unsigned char& operator[] (int index) {
		if (index >= 0 and index < array_size) return array[index];
		else throw("Incorrect index");
	}

	friend ostream& operator <<(ostream& out, Array& a)
	{
		for (int index = 0; index < a.array_size; index++)
		{
			out <<(int)a.array[index] << ",";
		}
		out << endl;
		return out;
	}


	virtual unsigned char summator(unsigned char b[n]) {
		for (int counter = 0; counter < array_size; counter++) array[counter] = array[counter] + b[counter];
		return *array;
	}
};

class Decimal2 : public Array {
public:
	virtual unsigned char summator(unsigned char b[n]) {
		for (int counter = 0; counter < array_size; counter++) array[counter] = array[counter] + b[counter];
		return *array;
	}
};
class String {
	string s = "Hello, World!";
	public: int cost;
	  public static void Main() {
		  //длина строки
		  string s = "abcdefg";
		  Console.WriteLine("1) The length of '{0}' is {1}", str, str.Length);
		  Console.WriteLine("2) The length of '{0}' is {1}", "xyz", "xyz".Length);

		  //поиск  строки в подстроке.
		  string s = Console.ReadLine();
		  Console.WriteLine(s.IndexOf(stl));

		  //сцепление двух строк
		  string text = @"Historically
			  string s = +text;
		  System.Console.WriteLine(s);


		  //удаления строк
		  {
			  Console.Write("Введите подстроку: ");
			  string substr = Console.ReadLine();
			  return str.Replace(substr, "");
		  }
		  }
}