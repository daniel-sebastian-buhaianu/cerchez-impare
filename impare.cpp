#include <iostream>
using namespace std;
void impare(int &);
int main()
{
	int n;
	cout << "n = "; cin >> n;
	impare(n);
	cout << "dupa apelarea functiei impare(), n = " << n << '\n';
	return 0;
}
void impare(int & n)
{
	int nr, p10, cif;
	nr = 0, p10 = 1;
	while (n)
	{
		cif = n%10;
		if (cif%2)
		{
			cif--;
		}
		nr = cif*p10 + nr;
		p10 *= 10;
		n /= 10;
	}
	n = nr;
}
