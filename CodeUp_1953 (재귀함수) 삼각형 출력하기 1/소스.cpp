#include <iostream>
using namespace std;

void print(int i)
{
	if (i == 0);
	else
	{
		print(i - 1);
		cout << '*';
	}
}
void star(int n)
{
	if (n == 0);
	else
	{
		star(n - 1);
		print(n);
		cout << endl;
	}
}
int main()
{
	int n;
	cin >> n;
	star(n);
	return 0;
}