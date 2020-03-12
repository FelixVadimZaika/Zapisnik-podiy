#include <iostream>
#include <cmath>
#include <iostream>
#include <cmath>
#include <locale>
#include <cstdlib>
#include <ctime> 
#include <vector>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include <list>
#include<stdio.h>
using namespace std;
struct vse {
	string podiya;
	string opys;
	string day;
	string time;

	string podiya2;
	string opys2;
	string day2;
	string time2;

	string podiya3;
	string opys3;
	string day3;
	string time3;
};


list<vse> listEvent;

HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

void main() {
	int action;
	int podiy;
	vse newEvent;
	do {
		cout << "1.New podiya" << endl;
		cout << "2.List podiy" << endl;
		cout << "3.Exit" << endl;
		cout << "4.Clear console" << endl;
		cout << endl;
		cout << "Select action->_";
		cin >> action;
		switch (action) {
		case 4: {
			system("cls");
		}break;
		case 1: {
			do {
				cout << endl;
				cout << "\t=Uroven Podiy=" << endl;
				SetConsoleTextAttribute(color, FOREGROUND_GREEN);
				cout << "1. Add podiya" << endl;
				SetConsoleTextAttribute(color, 14);
				cout << "2. Add podiya" << endl;
				SetConsoleTextAttribute(color, FOREGROUND_RED);
				cout << "3. Add podiya" << endl;
				SetConsoleTextAttribute(color, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
				cout << "4.Back menu" << endl;
				cout << endl;
				cout << "Select->_";
				cin >> podiy;
				switch (podiy) {
				case 1: {
					SetConsoleTextAttribute(color, FOREGROUND_GREEN);
					cout << "Enter Zagolovok podiyi->_";
					cin >> newEvent.podiya;
					cout << "Opis podiyi->_";
					cin >> newEvent.opys;
					cout << "Enter Day->_";
					cin >> newEvent.day;
					cout << "Enter Time->_";
					cin >> newEvent.time;
					listEvent.push_back(newEvent);
					cout << endl;
					SetConsoleTextAttribute(color, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
					system("cls");
				}break;
				case 2: {
					SetConsoleTextAttribute(color, 14);
					cout << "Enter Zagolovok podiyi->_";
					cin >> newEvent.podiya2;
					cout << "Opis podiyi->_";
					cin >> newEvent.opys2;
					cout << "Enter Day->_";
					cin >> newEvent.day2;
					cout << "Enter Time->_";
					cin >> newEvent.time2;
					listEvent.push_back(newEvent);
					SetConsoleTextAttribute(color, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
					system("cls");
				}break;
				case 3: {
					SetConsoleTextAttribute(color, FOREGROUND_RED);
					cout << "Enter Zagolovok podiyi->_";
					cin >> newEvent.podiya3;
					cout << "Opis podiyi->_";
					cin >> newEvent.opys3;
					cout << "Enter Day->_";
					cin >> newEvent.day3;
					cout << "Enter Time->_";
					cin >> newEvent.time3;
					listEvent.push_back(newEvent);
					SetConsoleTextAttribute(color, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
					system("cls");
				}break;
				}
			} while (podiy != 4);
		}break;




		case 2: {
			system("cls");
			cout << endl;
			SetConsoleTextAttribute(color, FOREGROUND_GREEN);
			cout << "Podiya N:1" << endl;
			cout << "Zagolovok: " << newEvent.podiya << endl;
			cout << "Opysaniye: " << newEvent.opys << endl;
			cout << "Day: " << newEvent.day << " Time: " << newEvent.time << endl;
			cout << endl;

			SetConsoleTextAttribute(color, 14);
			cout << "Podiya N:2" << endl;
			cout << "Zagolovok: " << newEvent.podiya2 << endl;
			cout << "Opysaniye: " << newEvent.opys2 << endl;
			cout << "Day: " << newEvent.day2 << " Time: " << newEvent.time2 << endl;
			cout << endl;
			SetConsoleTextAttribute(color, FOREGROUND_RED);
			cout << "Podiya N:3" << endl;
			cout << "Zagolovok: " << newEvent.podiya3 << endl;
			cout << "Opysaniye: " << newEvent.opys3 << endl;
			cout << "Day: " << newEvent.day3 << " Time: " << newEvent.time3 << endl;
			cout << endl;
			SetConsoleTextAttribute(color, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
		}break;

		}
		} while (action != 3);
		
	
	
	system("pause");
}