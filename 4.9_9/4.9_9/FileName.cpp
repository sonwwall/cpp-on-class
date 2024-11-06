#include<iostream>
using namespace std;
int main()
{
	float n;
	cin >> n;
	float a, b;
	float num;
	float result = 0;
	for (int i = 1; i < n; i++)
	{
		a = i, b = i + 1;
		num = 1 / (a * b);
		result += num;
	}
	cout << result;
}