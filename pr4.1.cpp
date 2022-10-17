#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int N, i;
	double P, S;
	cout << "N = "; cin >> N;
	P = 1; S = 0;
	i = N;
	while (i <= 16)
	{
		S = (i * N) / (pow(i, 2) + pow(N, 2));
		P *= S;
		i++;
	}
	cout << P << endl;
	P = 1; S = 0;
	i = N;
	do {
		S = (i * N) / (pow(i, 2) + pow(N, 2));
		P *= S;
		i++;
	} while (i <= 16);
	cout << P << endl;
	P = 1; S = 0;
	for (i = N; i <= 16; i++)
	{
		S = (i * N) / (pow(i, 2) + pow(N, 2));
		P *= S;
	}
	cout << P << endl;
	P = 1; S = 0;
	for (i = 16; i >= N; i--)
	{
		S = (i * N) / (pow(i, 2) + pow(N, 2));
		P *= S;
	}
	cout << P << endl;
	return 0;
}