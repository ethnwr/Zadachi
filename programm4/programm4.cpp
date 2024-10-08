#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	//int kolvo, v;
	//char simvol;
	//cout << "Введите символ, который хотите вывести: ";
	//cin >> simvol;
	//cout << "Введите количество символов, которое хотите вывести: ";
	//cin >> kolvo;
	//cout << "Вывести горизонтальную (1) или вертикальную (2) линию: ";
	//cin >> v;
	//switch (v)
	//{
	//case 1:
	//	while (kolvo != 0) {
	//		cout << simvol;
	//		kolvo--;
	//	}
	//	break;
	//case 2:
	//	while (kolvo != 0) {
	//		cout << simvol << "\n";
	//		kolvo--;
	//	}

	//}
	 
	 
	 
	//int d1, d2, sum1 = 0;
	//cout << "Введите начало диапазона: ";
	//cin >> d1;
	//cout << "Введите конец диапазона: ";
	//cin >> d2;
	//while (d1 <= d2) {
	//	if (d2 % 2 != 0) {
	//		sum1 += d2;
	//	}
	//	d2--;
	//}
	//cout << "Сумма нечетных чисел в диапазоне: " << sum1;



	//int n, a1 = 1, a2 = 2;
	//cout << "введите факториал: ";
	//cin >> n;
	//if (n == 0) {
	//	cout << "факториал равен: " << 1;
	//}
	//else {
	//	while (n + 1 > a2) {
	//		a1 *= a2;
	//		a2++;

	//	}
	//	cout << a1;
	//}

	//int b1 = 1, b2 = 5, sum1 = 0;
	//while (b2 != b1) {
	//	sum1 += b2;
	//	b2--;
	//}
	//cout << sum1;


	//int a = 5;
	//while (a != 0) {
	//	cout << "*";
	//	a--;
	//}


	// 4 Задачи
	

	//int d1, d2, sum1 = 0, count1 = 0, sred = 0;
	//cout << "Введите начало диапазона: ";
	//cin >> d1;
	//cout << "Введите конец диапазона: ";
	//cin >> d2;
	//while (d1 <= d2) {
	//	sum1 += d2;
	//	d2--;
	//	count1++;
	//}
	//sred += sum1 / count1;
	//cout << "Среднеарифметическое: " << sred;
	//cout << "\n Сумма чисел в диапазоне: " << sum1;



	//int n, a1 = 1, a2 = 2;
	//cout << "введите факториал: ";
	//cin >> n;
	//if (n == 0) {
	//	cout << "факториал равен: " << 1;
	//}
	//else {
	//	while (n + 1 > a2) {
	//		a1 *= a2;
	//		a2++;

	//	}
	//	cout << a1;
	//}


	
	//int a;
	//cout << "Введите длину линии: ";
	//cin >> a;
	//while (a != 0) {
	//	cout << "*";
	//	a--;
	//}


	//int kolvo, v;
	//char simvol;
	//cout << "Введите символ, который хотите вывести: ";
	//cin >> simvol;
	//cout << "Введите количество символов, которое хотите вывести: ";
	//cin >> kolvo;
	//cout << "Вывести горизонтальную (1) или вертикальную (2) линию: ";
	//cin >> v;
	//switch (v)
	//{
	//case 1:
	//	while (kolvo != 0) {
	//		cout << simvol;
	//		kolvo--;
	//	}
	//	break;
	//case 2:
	//	while (kolvo != 0) {
	//		cout << simvol << "\n";
	//		kolvo--;
	//	}
	//}


	// 4 и 5 Задание


	//int l, p, count1 = 0;
	//cout << "Введите длину ткани: ";
	//cin >> l;
	//cout << "Введите длину подушек: ";
	//cin >> p;
	//while (l > 0) {
	//	l -= p;
	//	count1++;
	//}
	//cout << "Швея может пошить " << count1 << " подушек";

	int n, c, count2 = 0;
	cout << "Введите количество ящиков: ";
	cin >> n;
	cout << "Введите сколько ящиков может увезти одна машина: ";
	cin >> c;
	while (n > 0) {
		n -= c;
		count2++;
	}
	cout << "К складу подъехало " << count2 << " машин";


}