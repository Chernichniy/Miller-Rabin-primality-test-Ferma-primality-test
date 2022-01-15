//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <time.h>
//#include <math.h>
//typedef  long long ll;
//using namespace std;
//ll st(ll a, ll b, ll m)  //Швидке піднесення до степені. Прицнип роботи:
//{// Після кожного пілнесання доп стпені число береться по модулю 
//	ll r = 1;
//	while (b) {
//		if (b & 1) {
//			r *= a;
//			r %= m;
//		}
//		a *= a;
//		a %= m;
//		b >>= 1;//побітове переміщення з присвоєнням
//	}
//	return r;
//}
//int nod(int a, int b) //НСК(перебор)
//{
//	if (a < b)
//	{
//		swap(a, b);
//	}
//	while (b)
//	{
//		a %= b;
//		swap(a, b);
//	}
//	return a;
//}
//void ferma(ll n, ll k)// алгоритм Ферма
//{
//	int p = 1;
//	srand(time(NULL));
//		for (int i=0; i<=k; i++ )
//		{
//			p = 1;
//			srand(time(NULL));
//			ll a = rand() % (n - 1) + 2;
//			if (nod(a, n) > 1) //НСК>1 складене
//			{
//				p = 0;
//				break;
//			}
//			else {
//				ll ch = st(a, n - 1, n);
//				if (ch  != 1)
//				{
//					break;
//				}
//			}
//		}
//		cout << n;
//
//	if (p == 1)
//		
//		cout << "	простое" << endl;
//	else
//		
//		cout << "	составное" << endl;
//	
//}
//void print_menu() {
//	system("cls"); // очищаем экран
//	cout << "Какую часть программы вы хотите использовать?" << endl;
//	cout << "1. Проверка одного числа" << endl;
//	cout << "2. Проверка чисел в диапазоне" << endl;
//	cout << "3. Завершение работы" << endl;
//	cout << ">";
//}
//int get_variant(int count) {
//	int variant;
//	char s[100]; // строка для считывания введённых данных
//	scanf("%s", s); // считываем строку
//
//	// пока ввод некорректен, сообщаем об этом и просим повторить его
//	while (sscanf(s, "%d", &variant) != 1 || variant < 1 || variant > count) {
//		printf("Не корректный ввод, попроуйте еще раз: "); // выводим сообщение об ошибке
//		scanf("%s", s); // считываем строку повторно
//	}
//	return variant;
//}
//
//void chislo()
//{
//	start1:
//	cout << "Введите число для проверки: ";
//	ll n;
//	cin >> n;
//	int k;
//start2:
//	cout << "Введите колисечство проверок: ";
//	cin >> k;
//	try
//	{
//		if (k < 0) throw 2;
//		if (n < 0) throw 2.2;
//	}
//	catch (double)
//	{
//		if (2.2)
//			cout << "Одно или оба из введенных чисел отрицателые, введите еще раз " << endl;
//		goto start1;
//	}
//	catch (int)
//	{
//		if (2)
//			cout << "Количество проверок не может быть отрицательным, введите данные заного " << endl;
//		goto start2;
//	}
//	ferma(n, k);
//	
//}
//void diapason()
//{
//	start:
//	ll l, o;
//	cout << "Введите первый элемент диапазона: ";
//	cin >> l;
//	cout << "Введите последний элемент диапазона: ";
//	cin >> o;
//	int k;
//startO:
//	cout << "Введите колисечство проверок: ";
//	cin >> k;
//	try
//	{
//		if (o < l) throw 1;
//		if (l < 0 || o < 0 || k < 0) throw 2.2;
//	}
//	catch (double)
//	{
//		if (2.2)
//			cout << "Одно из 3-х (или все) чисел отрицательное " << endl;
//		goto start;
//	}
//	catch (int)
//	{
//		if (1)
//			cout << "Последнее число диапазона меньше чем первое, напишите корректнее " << endl;
//		goto start;
//	}
//	for (ll g=l ;  g<= o; g++)
//	{
//		ferma(g, k);
//	}
//}
//
//int main() 
//{
//	setlocale(LC_ALL, "rus");
//	int variant;
//	do 
//	{
//		print_menu();
//		variant = get_variant(5); // получаем номер выбранного пункта меню
//		switch (variant) 
//		{
//		case 1:
//			chislo();
//			break;
//		case 2:
//			diapason();
//			break;
//		}
//		if (variant != 3)
//			system("pause"); // задерживаем выполнение, чтобы пользователь мог увидеть результат выполнения выбранного пункта
//	} while (variant != 3);
//		
//}