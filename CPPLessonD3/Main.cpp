#include<iostream>	
#include<string>
using namespace std;
void Function01()
{
	for (int i = 0; i < 4; i++)
	{
		cout << "i=" << i << endl;
	}
}


void Function06()
{
	for (int i = 100; i < 1000; i++)
	{
		if (i== (i / 100) * (i / 100) * (i / 100) + (i % 100 / 10) * (i % 100 / 10)* (i % 100 / 10) + (i % 10)* (i % 10)* (i % 10))
		{
			cout << i << endl;
		}
	}
}
void Function08()
{
	int sum = 0;
	for (int i = 2; i <=1000 ;i++)
	{
		sum = 1;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
				sum += j;
		}
		if (sum == i)
		{
			cout << i <<  endl;
		}
	}
}


void Function09()
{
	for (int i = 1; i<10; i++)
	{
		//外层for循环控制行数
		for (int j = 1; i-j >= 0; j++)
		{
			cout << j << "*" << i << "=" << j * i<<"\t";
		}
		cout << endl;
	}
}



void Function10()
{
	cout << "1 * 1 = 1" << endl;
	cout << "1 * 2 = 2   2 * 2 = 4" << endl;
	cout << "1 * 3 = 3   2 * 3 = 6   3 * 3 = 9 " << endl;
	cout << "1 * 4 = 4   2 * 4 = 8   3 * 4 = 12  4 * 4 = 16 " << endl;
	cout << "1 * 5 = 5   2 * 5 = 10  3 * 5 = 15  4 * 5 = 20  5 * 5 = 25" << endl;
	cout << "1 * 6 = 6   2 * 6 = 12  3 * 6 = 18  4 * 6 = 24  5 * 6 = 30  6 * 6 = 36 " << endl;
	cout << "1 * 7 = 7   2 * 7 = 14  3 * 7 = 21  4 * 7 = 28  5 * 7 = 35  6 * 7 = 42  7 * 7 = 49 " << endl;
	cout << "1 * 8 = 8   2 * 8 = 16  3 * 8 = 24  4 * 8 = 32  5 * 8 = 40  6 * 8 = 48  7 * 8 = 56  8 * 8 = 64 " << endl;
	cout << "1 * 9 = 9   2 * 9 = 18  3 * 9 = 27  4 * 9 = 36  5 * 9 = 45  6 * 9 = 54  7 * 9 = 63  8 * 9 = 72  9 * 9 = 81	" << endl;
}

//100m,1/2,第十次，共米，十次的高
void Function11()
{
	float height = 100.f, j = 0.f;
	for (int i = 0; i < 10; i++)
	{
		j += height;
		height/=2;
		j+=height;
	}
	cout << j-height << "第十次高" << height <<"米"<< endl;

}
void Function12()
{
	int counter = 0;
	float height = 100.f;
	while (height >= 1.f)
	{
		counter++;
		height /= 2;
	}
	cout << counter << endl;
}

void Function16()
{
	int arrays[]{ 11,22,33,44,55,66,77,88,99 };
	for (int index = 0; index < sizeof(arrays) / sizeof(int); index++)
	{
		cout << arrays[index] << ",";
	}
	cout << "\n";
}
int main()
{
	Function16();
	system("pause");
}

