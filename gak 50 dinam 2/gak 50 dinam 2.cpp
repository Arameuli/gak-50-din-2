#include <iostream>
#include<algorithm>
#include<String>
using namespace std;
int main()
{
	int n, m;
	cin >> n;
	int* p;
	p = new int[n];
	for (int i = 0; i < n; i++)
		cin >> p[i];
	cout << "-----------------" << endl;
	cin >> m;
	int* c=p;
	p = new int[n + m];
	for (int i = 0; i < n; i++)
		p[i]=c[i];
	cout << endl;
	for (int i = n; i < (m+n); i++) {
		cin >> p[i];
	}
	cout << endl;
	for (int i = 0; i < (n + m); i++) {
		cout << p[i] << " ";
	}
	cout << endl << endl;

	sort(p, p+n+m);
	for (int i = 0; i < (n + m); i++) {
		cout << p[i] << " ";
	}
	cout << endl;
}