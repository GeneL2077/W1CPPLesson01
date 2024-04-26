#include<iostream>
#include<string>
using namespace std;
void Function01()
{
	int number = 10,a=10,b;
	cout << number << endl;
	cout << a << endl;
	b = 5;
	cout << b << endl;

}
void Function02()
{
	short s = 10;
	cout << SHRT_MIN << "---" << SHRT_MAX<< endl;
	cout << sizeof(short) << endl;
	cout << INT_MIN << "---" << INT_MAX << endl;

}
void Function04()
{
	char inputChar;
	cout << "请输入一个英文字符" << endl;
	cin >> inputChar;
	if ((inputChar >= 97 && inputChar <= 122) || (inputChar >= 65 && inputChar <= 90))
	{
		cout << "字母" << endl;
	}
	else
	{
		cout << "非字母" << endl;
	}
}
void Function06()
{
	int y = 0;
	cout << ((++y) + y)<<endl;

	int j = 0;
	cout << ((j++) + j) << endl;
}

void Function10()
{
	string name = " ";
	int age = 0;
	cout << "input name ";
	cin >> name;
	cout << "age=" << (name == "小红" ? 10 : 0) << endl;
	
}
void Function11()
{
	int n = 10, j = 0, k = 0;
	if (j = 340, n = 3100, k == 0)
	{
		cout << "条件为真" << endl;
	}
	else
	{
		cout << "条件为假" << endl;
	}
	if (j = 340, n = 3100, k = 0)
	{
		cout << "条件为真" << endl;
	}
	else
	{
		cout << "条件为假" << endl;
	}
	if (int a=10)
	{
		cout << "if(int a=10)" << endl;
	}
	else
	{
		cout << "else_" << endl;
	}

}
void Function13()
{
	int a;
	cout << "input month number" << endl;
	cin >> a;
	a=1 <= a&&a <= 3 ? 1 : 4 <= a&&a <= 6 ? 2 : 7 <= a&&a <= 9 ? 3 :10 <= a&&a <= 12 ? 4 : -1;

	switch (a)
	{
	case 1:cout << "spring" << endl; break;
	case 2:cout << "summer" << endl; break;
	case 3:cout << "autumn" << endl; break;
	case 4:cout << "winter" << endl; break;
	default:cout << "unexist month" << endl;
		break;
	}

}
int main()
{
	Function13();
	//short s = 10;
	//cout << SHRT_MIN << "---" << SHRT_MAX << endl;
	//cout << sizeof(short) << endl;
	//cout << INT_MIN << "---" << INT_MAX << endl;

	system("pause");

}