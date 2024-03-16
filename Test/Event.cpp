#include "Event.h"

#include <Windows.h>
#include <random>
#include <algorithm>

#define RouletteTurn 73

using namespace std;

#pragma region WinAPI

enum Color 
{
	BLACK,
	DARK_BLUE,
	DARK_GREEN,
	DARK_SKYBLUE,
	DARK_RED,
	DARK_VOILET,
	DAKR_YELLOW,
	GRAY,
	DARK_GRAY,
	BLUE,
	GREEN,
	SKYBLUE,
	RED,
	VIOLET,
	YELLOW,
	WHITE,
};

void setColor(int color) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void CursorView()
{
	CONSOLE_CURSOR_INFO cursorInfo = { 0, };
	cursorInfo.dwSize = 1; //커서 굵기 (1 ~ 100)
	cursorInfo.bVisible = FALSE; //커서 Visible TRUE(보임) FALSE(숨김)
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

void Gotoxy(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

#pragma endregion

void Event::PickPerson()
{
	if (list.size() == 0) {
		cout << "리스트 세팅을 안 했습니다" << endl;
		return;
	}

	Shuffle();
	auto winner = list[0];
	int max = list.size();
	int num = 0;

	for (int i = 0; i < RouletteTurn; i++)
	{
		Gotoxy(50, 10);
		if (num == max) num = 0;
		if (i != RouletteTurn - 1) {
			int time = pow(1.1, i);
			//int time = pow(1, i);
			cout << "- " << list[num] << endl;
			Sleep(time);
			system("cls");
		} else {
			Gotoxy(40, 10);
			setColor(SKYBLUE);
			cout << " 당첨자 \" " << winner << " \" 축하드립니다 !!" << endl;
			cout << endl << endl;

			Gotoxy(34, 15);
			setColor(WHITE);
			cout << "* 당첨자는 저에게 디코 DM 해주시면 선물 드리겠습니다." << endl;

		}
		num++;
	}
}

void Event::GetList()
{	
	if (list.size() == 0) {
		cout << "리스트가 비어있거나 세팅을 안 했습니다" << endl;
		return;
	}

	cout << "[ 참가자 목록 ]" << endl;

	for (int i = 0; i < list.size(); i++)
	{
		cout << "- " << list[i] << endl;
	}
}

void Event::Shuffle()
{
	std::random_device rd;
	std::mt19937 rng(rd());

	std::shuffle(list.begin(), list.end(), rng);
}

void Event::SetList(EventType type)
{
	switch (type)
	{
	case NORMAL:
		list = user;
		cout << "세팅 완료 : NORMAL" << endl;
		break;
	case PRO:
		list = boost;
		cout << "세팅 완료 : PRO" << endl;
		break;
	default:
		break;
	}
}

Event::Event()
{
	CursorView();
}
