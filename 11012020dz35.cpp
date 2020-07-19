/*
* Пользователь 	вводит с клавиатуры размер в миллиметрах.Перевести его в футы.
*/
#include <iostream>
#include <Windows.h>;
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	cout << "Введите размер в миллиметрах : \n";
	int a;
	cin >> a;
	cout << "футов = " << a * 0.003281 << endl;
	return 0;
}
