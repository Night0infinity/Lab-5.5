#include <iostream>
#include <cmath>
using namespace std;
double N(const int a, const int b, int level, int& depth);
int main()
{
	int n, m, r;
	cout << "n = "; cin >> n;
	cout << "m = "; cin >> m;
	r = n % m;
	cout << "r = " << r << endl;
	double NSD1, NSD2;
	int depth = 0;
	NSD1 = N(n, m, 1, depth);
	NSD2 = N(m, r, 1, depth);
	cout << "NSDnm = " << NSD1 << endl;
	cout << "NSDmr = " << NSD2 << endl;
}
	
double N(const int a, const int b, int level, int& depth)
{
	if (level > depth)
		depth = level;
	cout << "level = " << level << endl;
	if (a == b)
		return a;
	if (a > b)
	return N(a - b, b, level+1, depth);
	return N(a, b - a, level+1, depth);
}