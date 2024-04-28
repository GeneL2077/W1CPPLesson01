#include<iostream>	
#include<string>
#include<Windows.h>
#include"UserInfo.h"
UserInfo UserArray[6]{};
int UserSize = 0;
void CheckUser();
void AddUserInfo();
void LoginUser();
void ChangeUserInfo();
void DelUserInfo();
void DelSignalUser();
void SelUser();
void Play();
void Funct01();
void ClearTable();
string EffectFunction();
void PrintMonster();

int main()
{
	Funct01();
	system("pause");
}




void Funct01()
{
	//Sleep(1000);
	for (int i = 0; i <5; i++)
	{
		PrintMonster();

		cout << "test===" << endl;
		Sleep(500);
		cout << EffectFunction() ;
		Sleep(500);
		ClearTable();

	}
}

void ClearTable()
{
	system("cls");
}

string EffectFunction()
{
	return "kkk";
}




void PrintMonster()
{
	cout << "\t\t\t\t\t   +++" << endl;
	cout << "\t\t\t\t\t  +   +" << endl;
	cout << "\t\t\t\t\t +     +" << endl;
	cout << "\t\t\t\t\t+       +" << endl;
	cout << "\t\t\t\t\t +     +" << endl;
	cout << "\t\t\t\t\t  +   +" << endl;
	cout << "\t\t\t\t\t   +++" << endl;

}
