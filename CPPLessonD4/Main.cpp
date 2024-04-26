#include<iostream>	
#include<string>
using namespace std;
void Function01()
{
	int numbers[]{ 315,131,3243,2313,511,0,251,58,354,35110,5 };
	int temp = 0;
	for (int i = 1; i < sizeof(numbers) / sizeof(numbers[0]); i++)
	{
		for (int index = 0;  index < sizeof(numbers) / sizeof(numbers[0])-i; index++)
		{
			if (numbers[index] > numbers[index + 1])
			{
				temp = numbers[index];
				numbers[index] = numbers[index + 1];
				numbers[index + 1] = temp;
			}
		}
	}
	for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
	{
		cout << numbers[i] << endl;
	}
}
void Function02()
{
	int numbers[][3]{ {10,2,3},{100,1,67},{34,5,6},{0,1,05} };
	int j = sizeof(numbers) / sizeof(numbers[0]);
	int temp;
	//for (int i = 0; i < j; i++)
	//{
	//	for (int index = 0; index < 3; index++)
	//	{
	//		cout << numbers[i][index] <<" ";
	//	}
	//	cout << endl;
	//}
	// //此条可用
	//for (int i = 0; i < j-1; i++)
	//{
	//	for (int index = 0; index < 2; index++)
	//	{
	//		if (numbers[i][index] > numbers[i][index + 1])
	//		{
	//			temp = numbers[i][index];
	//			numbers[i][index] = numbers[i][index + 1];
	//			numbers[i][index + 1] = temp;
	//		}
	//	}
	//}
	//for (int i = 0; i < 4; i++)
	//{
	//	for (int j = 0; j < 2; j++)
	//	{
	//		if
	//	}
	//}
	//for (int i = 0; i < 4; i++)
	//{
	//	for (int j = 1; j <= 3; j++)
	//	{
	//		for (int k = 0; k< 3-j; k++)
	//		{
	//			if (numbers[i][k] > numbers[i][k + 1])
	//			{
	//				temp = numbers[i][k];
	//				numbers[i][k] = numbers[i][k + 1];
	//				numbers[i][k + 1] = temp;
	//			}
	//	}

	//	}
		//for (int k = 1; k < 3; k++)
		//{
		//	i = i + k;
		//	if (numbers[i][j] > numbers[i ][j + 1])
		//	{
		//		temp = numbers[i][j];
		//		numbers[i][j] = numbers[i][j + 1];
		//		numbers[i][j + 1] = temp;

		//	}
		//}

	//}
	for (int i = 0; i < j; i++)
	{
		for (int index = 0; index < 3; index++)
		{
			cout << numbers[i][index] <<" ";
		}
		cout << endl;
	}
	
}
void Function03()
{
	int numbers[][3]{ {10,2,3},{100,1,67},{34,5,6},{0,1,05} };
	int j = sizeof(numbers) / sizeof(numbers[0]);
	int temp;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			if (numbers[i][j] < numbers[i][j + 1])
			{
				temp = numbers[i][j];
				numbers[i][j] = numbers[i][j + 1];
				numbers[i][j + 1] = temp;
			}
		}
	}
	 
}
#include"Person.h"
//Select Delect Change

Person UserArray[5]{};
int UserSize = 0;
void AddPerson()
{
	if (UserSize >= 4)
		cout << "the space is full" << endl;
	else
	{
		string name;
		int age;
		string address;
		cout << "input user name:";
		cin >> name;
		cout << "input user age:";
		cin >> age;
		cout << "input user address:";
		cin >> address;
		Person useri;
		useri.name = name;
		useri.age = age;
		useri.address = address;
		UserArray[UserSize] = useri;
		UserSize++;
	}
}
void SelectPerson()
{
	string name;
	cout << "select user name:";
	cin >> name;
	int bFlag = -1;
	for (int i = 0; i < UserSize; i++)
	{
		if (UserArray[i].name == name)
		{
			bFlag = i;
			break;
		}
		
	}
	bFlag != -1 ? (cout << UserArray[bFlag].name << UserArray[bFlag].age << UserArray[bFlag].address << "\n") : cout << "empty user!" << endl;


}
void DeletePerson()
{
	string name;
	cout << "delete user name:";
	cin >> name;
	int bFlag = -1;
	string choice;
	for (int i = 0; i < UserSize; i++)
	{
		if (UserArray[i].name == name)
			bFlag = i;
	}
	if (bFlag!=-1)
	{
		cout << "whether delete user?Y/N:";
		cin >> choice;
		if (choice == "y" || choice == "Y")
		{
			for (int i = bFlag; i < UserSize-1; i++)
			{
				UserArray[i] = UserArray[i + 1];
			}
			UserSize--;
			cout << "delete complete" << endl;
		}
		else if(choice == "n" || choice == "N")
		{
			cout << "cancel delete" << endl;
		}
	}
	else 
	{
		cout << "nonexistent user"<<"\n";
	}

}
void ChangePerson()
{
	string name;
	cout << "change user name:";
	cin >> name;
	int bFlag = -1;
	if (UserSize == 0)
	{
		cout << "none user" << endl;
	}
	else
	{
		for (int i = 0; i < UserSize; i++)
		{
			if (UserArray[i].name == name)
				bFlag = i;
		}
		if (bFlag != -1)
		{
			cout << "input new name:";
			cin >> UserArray[bFlag].name;
			cout << "input new age:";
			cin >> UserArray[bFlag].age;
			cout << "input new address:";
			cin >> UserArray[bFlag].address;
		}
		cout << "change complete" << "\n";
	}
}
void PrintAll()
{
	for (int i = 0; i < UserSize; i++)
	{
		cout << "name:" << UserArray[i].name << "age:" << UserArray[i].age << "address:" << UserArray[i].address << endl;
	}
}

int main()
{
	Function03();
	//int option = -1;
	//while (true)
	//{
	//	cout << "1.add user" << endl;
	//	cout << "2.select user" << endl;
	//	cout << "3.change user" << endl;
	//	cout << "4.delete user" << endl;
	//	cout << "5.print all user" << endl;
	//	cout << "0.exit system" << endl;
	//	cin >> option;
	//	switch (option)
	//	{
	//	case 1:AddPerson(); break;
	//	case 2:SelectPerson(); break;
	//	case 3:ChangePerson(); break;
	//	case 4:DeletePerson(); break;
	//	case 5:PrintAll(); break;
	//	case 0:exit(0); break;
	//	default:
	//		break;
	//	}
	//}

	system("pause");
}