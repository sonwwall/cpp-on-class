#include<iostream>
using namespace std;
int main()

{
	int a, b, c;
	for (int i = 100; i < 1000; i++)
	{
		a = i / 100;
		c = i % 10;
		b = (i / 10) - (i / 100) * 10;
		if (i == a * a * a + b * b * b + c * c * c)
		{
			cout << i << endl;
		}
	}
}