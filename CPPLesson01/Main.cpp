#include<iostream>
#include<string>

	using namespace std;

void Function1()
{
	system("color 06");
	system("time /t");
	system("date /t");
	system("title ��˹͡");
	system("mode con cols=80 lines=24");
	system("pause");


}
int main()
{

	//Function1();

	//system("color 06");
	//system("time /t");
	//system("date /t");
	////system("pause");

	//system("title ��˹͡");
	//system("mode con cols=80 lines=24");
	//cout << "hello world" <<endl;
	//string name = "����";
	//cout << name << endl;
	//cout << "������"; 
	//cin >> name;
	//cout << "Hello," << name << endl;
	bool bToggle = false;
	string togglesStr = "Y/N";
	cout << "�Ƿ���Ҫ����" << endl;
	cin >> togglesStr;
	if (togglesStr == "Y")
	{
		bToggle = true;

	}
	//if (togglesStr == "N")
	//{
	//	bToggle = false;

	//}
	if (bToggle)
	{
		system("pause");

	}
	else
	{
		cout << "ddd" << endl;


	}
	 

	system("pause");
	
}