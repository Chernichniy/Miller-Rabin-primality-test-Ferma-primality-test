////#include <iostream>
////#include <time.h>
////#include <math.h>
////typedef  long long ll;
////using namespace std;
////int nod(ll a, ll b) //���
////{
////	if (a < b)
////	{
////		swap(a, b);  
////	}
////	while (b)
////	{
////		a %= b;
////		swap(a, b);
////	}
////	return a;
////}
////ll st(ll a, ll b, ll m)  //������� ���������� � ������� �� ������. ������� ������:
////{// ����� ������� ���������� � ������� ����� �������� �� ������
////	ll r = 1;
////	while (b) {
////		if (b & 1) {
////			r *= a;
////			r %= m;
////		}
////		a *= a;
////		a %= m;
////		b >>= 1;//��������� ����������� � �����������
////	}
////	return r;
////}
////
////void ferma(ll n)
////{
////	
////	int p = 1;
////		srand(time(NULL));
////			for (int i=0; i<=1; i++ )
////			{
////				p = 1;
////				srand(time(NULL));
////				ll a = rand() % (n - 1) + 2;
////				if (nod(a, n) > 1) //���>1 ���������
////				{
////					p = 0;
////					break;
////				}
////				else {
////					//ll ch = pow((double)a, n - 1);
////					ll ch = st(a, n - 1, n);
////					if (ch  != 1) // a^d(���) �� �������� � 1 �� ������ N - �������
////					{
////						break;
////					}
////				}
////			}
////		
////		cout << n;
////		if (p == 1)
////			cout << "	�������" << endl;
////		else
////			cout << "	���������" << endl;
////		
////	
////}
////int main() 
////{
////
////	setlocale(LC_ALL, "rus");
////	for (ll i = 5; i < 501; i++)
////	{
////		ferma(i);
////	}
////	cout << "�������� ������� (������) = " << clock() / 1000.0 << endl; // ����� ������ ���������
////	return 0;
////}
//#include <iostream>
//#include <time.h>
//using namespace std;
//typedef unsigned long long ll;
//void find_s_t(ll n, ll* s, ll* t)
//{
//	while (*t % 2 == 0)
//	{
//		*t /= 2;
//		(*s)++;
//	}
//}
//
//ll st(ll a, ll b, ll m)  //������� ���������� � ������� �� ������. ������� ������:
//{// ����� ������� ���������� � ������� ����� �������� �� ������
//	ll r = 1;
//	while (b) {
//		if (b & 1) {
//			r *= a;
//			r %= m;
//		}
//		a *= a;
//		a %= m;
//		b >>= 1;//��������� ����������� � �����������
//	}
//	return r;
//}
//bool miller(ll n, int k)
//{
//	ll xp = 0;
//	int p = 1;
//	ll xx;
//	ll s = 0;
//	ll t = n - 1;
//	find_s_t(n, &s, &t);
//
//	for (int i = 1; i <= k; i++)
//	{
//		srand(time(NULL));
//		int a = rand() % (n - 3) + 2;
//		ll xx = st(a, t,n);
//		if (xx == 1 || xx == n - 1) continue;
//		for (int j = 0; j < s - 1; j++)
//		{
//			ll x = st(xx, 2,n);
//			if (x  == 1) return false;
//			xp = x;
//			if (x  == n - 1) break;
//
//		}
//		if (xp != n - 1)
//			p = 0;
//	}
//	cout << n << "\t";
//	if (p == 0) cout << "	���������" << endl;
//	else cout << "	�������" << endl;
//};
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	//int n;// k;
//	/*cout << "������� ����� ��� ��������: " ;
//	cin >> n;
//	cout  << "������� ���������� �������(��� ������ ����������� ����������): "<<endl;
//	cin >> k;*/
//	int k = 1;
//	for (int g = 7; g < 501; g++)
//	{
//		miller(g, k);
//	}
//	cout << "�������� ������� (������) = " << clock() / 1000.0 << endl; // ����� ������ ���������
//}
