/*
题目描述
给定区间[-2的31次方, 2的31次方]内的3个整数A、B和C，请判断A+B是否大于C。

输入描述:
输入第1行给出正整数T(<=10)，是测试用例的个数。随后给出T组测试用例，每组占一行，顺序给出A、B和C。整数间以空格分隔。


输出描述:
对每组测试用例，在一行中输出“Case #X: true”如果A+B>C，否则输出“Case #X: false”，其中X是测试用例的编号（从1开始）。

输入例子:
4

1 2 3

2 3 4

2147483647 0 2147483646

0 -2147483648 -2147483647
*/



#include<iostream>
using namespace std;
int main()
{
	long int a = 0;
	long int b = 0;
	long int c = 0;
	int d = 1;
	cin >> d;
	for (int i = 1; i <= d; i++)
	{
		cin >> a >> b >> c;
		if ((a + b)<=c)
		{
			cout << a << "+" << b << "<" << c << "  " << "Case #" << i << ": " << "false" << endl;
		}
		else
		{
			cout << a << "+" << b << "<" << c << "  " << "Case #" << i << ": " << "true" << endl;
		}
	}
	return 0;
}