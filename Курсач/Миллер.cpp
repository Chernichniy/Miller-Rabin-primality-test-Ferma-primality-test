#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <time.h>
using namespace std;
typedef  long long ll;
void find_s_t(ll n, ll* s, ll* t)//розкладання числа n-1
{
	while (*t % 2 == 0)
	{
		*t /= 2;
		(*s)++;
	}
}
ll st(ll a, ll b, ll m)  //швидке піднесення до степеня
{	
	ll r = 1;
	while (b) {
		if (b & 1) {
			r *= a;
			r %= m;
		}
		a *= a;
		a %= m;
		b >>= 1;
	}
	return r;
}
void print_menu() {
	system("cls"); 
	cout << "Какую часть программы вы хотите использовать?" << endl;
	cout << "1. Проверка одного числа" << endl;
	cout << "2. Проверка чисел в диапазоне" << endl;
	cout << "3. Завершение работы" << endl;
	cout << ">";
}
bool miller(ll n, int k)// Алгоритм Міллера-Рабіна
{
	ll xp = 0;
	int p = 1;
	ll xx;
	ll s = 0;
	ll t = n - 1;
	find_s_t(n, &s, &t);

	for (int i = 1; i <= k; i++)
	{
		srand(time(NULL));
		int a = rand() % (n - 3) + 2;
		ll xx = st(a, t,n);
		if (xx == 1 || xx  == n - 1) continue;
		for (int j = 0; j < s - 1; j++)
		{
			ll x = st(xx, 2,n);
			if (x  == 1) return false;
			xp = x;
			if (x  == n - 1) break;

		}
		if (xp != n - 1)
			p = 0;
	}
	cout << n << "\t";
	if (p == 0) cout << "	Составное" << endl;
	else cout << "	Простое" << endl;
	//cout << "Алгоритм работал (секунд) = " << clock() / 1000.0 << endl; // время работы программы
};
int get_variant(int count) {
	int variant;
	char s[100]; 
	scanf("%s", s); 
	while (sscanf(s, "%d", &variant) != 1 || variant < 1 || variant > count) {
		printf("Не корректный ввод, попроуйте еще раз: "); 
		scanf("%s", s);
	}
	return variant;
}
void chislo()
{
start1:
	cout << "Введите число для проверки: ";
	ll n;
	cin >> n;
	int k;
	start2:
	cout << "Введите колисечство проверок: ";
	cin >> k;
	try
	{
		if (k < 0) throw 2;
		if (n < 0) throw 2.2;
	}
	catch (double)
	{
		if (2.2)
			cout << "Одно или оба из введенных чисел отрицателые, введите еще раз " << endl;
		goto start1;
	}
	catch (int)
	{
		if (2)
			cout << "Количество проверок не может быть отрицательным, введите данные заного " << endl;
		goto start2;
	}
	miller(n, k);
}
void diapason()
{
start:
	ll l, o;
	cout << "Введите первый элемент диапазона: ";
	cin >> l;
	cout << "Введите последний элемент диапазона: ";
	cin >> o;
	int k;
	startO:
	cout << "Введите колисечство проверок: ";
	cin >> k;
	try
	{
		if (o < l) throw 1;
		if (l < 0 || o < 0||k<0) throw 2.2;
		

	}
	catch (double)
	{
		if (2.2)
			cout << "Одно из 3-х (или все) чисел отрицательное " << endl;
		goto start;
		
	}
	catch (int)
	{
		if (1)
			cout << "Последнее число диапазона меньше чем первое, напишите корректнее " << endl;
		goto start;

	}
	for (ll g = l; g <= o; g++)
	{
		miller(g, k);
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	int variant;
	do
	{
		print_menu();
		variant = get_variant(5); // получаем номер выбранного пункта меню
		switch (variant)
		{
		case 1:
			chislo();
			break;
		case 2:
			diapason();
			break;
		}
		if (variant != 3)
			system("pause"); // задерживаем выполнение, чтобы пользователь мог увидеть результат выполнения выбранного пункта
	} while (variant != 3);
	
}

