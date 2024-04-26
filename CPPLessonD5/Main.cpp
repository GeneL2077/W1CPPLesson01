#include<iostream>
#include<string>
#include"WorkerInfo.h"
WorkerInfo WorkerArray[6]{};
int WSize = 0;
void AddWorker();
void DelWorker();
void DelSignalWorker();
void ClearWorker();
void SelWorker();
void SelSignalWorker();
void SelAllWorker();
void ChangeWorkerInfo();
void ExitSystem();
void Play();
void Play()
{
	int option = -1;
	cout << "-----welcome to **** system-----" << endl;
	while (true)
	{
		cout << "1.add worker---------------" << endl;
		cout << "2.select worker------------" << endl;
		cout << "3.change worker information" << endl;
		cout << "4.remove worker------------" << endl;
		cout << "5.exit system--------------" << endl;
		cin >> option;
		switch (option)
		{
		case 1:AddWorker(); break;
		case 2:SelWorker(); break;
		case 3:ChangeWorkerInfo(); break;
		case 4:DelWorker(); break;
		case 5:ExitSystem(); break;
		default:cout << "error option" << endl;
			break;
		}
	}
}
int main()
{
	Play();
	system("pause");
}

void AddWorker()
{
}

void DelWorker()
{
}

void DelSignalWorker()
{
}

void ClearWorker()
{
}

void SelWorker()
{
}

void SelSignalWorker()
{
}

void SelAllWorker()
{
}

void ChangeWorkerInfo()
{
}

void ExitSystem()
{
}

void Play()
{
}
