#include<iostream>
#include<string>
using namespace std;

//判断的函数
int pan_duan( )
{
       long long int a, b, c;
       
	cin >> a >> b >> c;
	if (a + b > c)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
//输出结果
void show(int i , int a)
{
	if (a)
	{
		cout << "Case #" << i << ": " << "true" << endl;
	}
	else
	{
		cout << "Case #" << i << ": " << "false" << endl;
	}
}
int main()
{
	int n;
	cin >> n;
	int *a = new int [n];
	for (int i = 0; i < n; i++)
	{
		a[i] = pan_duan();
	}

	for (int i = 0; i < n; i++)
	{
		show(i + 1, a[i]);
	}

	system("pause");
	return 0;
}
