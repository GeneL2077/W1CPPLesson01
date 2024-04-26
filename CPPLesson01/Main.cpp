#include<iostream>
#include<string>

	using namespace std;

void Function1()
{
	system("color 06");
	system("time /t");
	system("date /t");
	system("title 塔斯汀");
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

	//system("title 塔斯汀");
	//system("mode con cols=80 lines=24");
	//cout << "hello world" <<endl;
	//string name = "麦当劳";
	//cout << name << endl;
	//cout << "输入名"; 
	//cin >> name;
	//cout << "Hello," << name << endl;
	bool bToggle = false;
	string togglesStr = "Y/N";
	cout << "是否需要清屏" << endl;
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