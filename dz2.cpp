// Матвей Суржанский п43021 
#include <iostream>
using namespace std;
int main() {
	//Boolean8◦. Даны два целых числа : A, B.Проверить истинность высказывания :«Каждое из чисел A и B нечетное».
	int a;
	int b;
	bool res;
	cin >> a;
	cin >> b;
	res = (a % 2) != 0 && (b % 2) != 0;
	cout << boolalpha;
	cout << res << endl;
	//Boolean9◦ Даны два целых числа : A, B.Проверить истинность высказывания :«Хотя бы одно из чисел A и B нечетное».
	int a;
	int b;
	bool res;
	cin >> a;
	cin >> b;
	res = (a % 2) != 0 || (b % 2) != 0;
	cout << boolalpha;
	cout << res << endl;
	//Boolean10  Даны два целых числа : A, B.Проверить истинность высказывания : «Ровно одно из чисел A и B нечетное».
	int a;
	int b;
	bool res;
	cin >> a;
	cin >> b;
	res = (a % 2) != 0 && (b % 2) == 0 || (a % 2) == 0 && (b % 2) != 0;
	cout << boolalpha;
	cout << res << endl;
	//Boolean11◦Даны два целых числа : A, B.Проверить истинность высказывания : «Числа A и B имеют одинаковую четность».
	int a;
	int b;
	bool res;
	cin >> a;
	cin >> b;
	res = (a % 2) == 0 && (b % 2) == 0 || (a % 2) != 0 && (b % 2) != 0;
	cout << boolalpha;
	cout << res << endl;*/
	//Boolean12◦Даны три целых числа : A, B, C.Проверить истинность высказывания : «Каждое из чисел A, B, C положительное».
    int a;
	int b;
	int c;
	bool res;
	cin >> a;
	cin >> b;
	cin >> c;
	res = a > 0 && b > 0 && c > 0;
	cout << boolalpha;
	cout << res << endl ;
//Boolean14◦Даны три целых числа : A, B, C.Проверить истинность высказывания : «Ровно одно из чисел A, B, C положительное».
int a;
int b;
int c;
bool res;
cin >> a;
cin >> b;
cin >> c;
res = a > 0 && b < 0 && c < 0 || a < 0 && b > 0 && c < 0 || a < 0 && b < 0 && c > 0;
cout << boolalpha;
cout << res << endl;


}