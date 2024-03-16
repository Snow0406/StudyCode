#include "Event.h"

using namespace std;

int main() {
	Event event;

	int index;
	bool start = true;

	cout << "1 : NORMAL 세팅" << 
	endl << "2 : PRO 세팅" << 
	endl << "3 : 뽑기" << 
	endl << "4 : 목록 보기" << 
	endl << "0 : 종료" << endl;

	while (start)
	{
		
		scanf_s("%d", &index);
		switch (index)
		{
		case 1:
			event.SetList(EventType::NORMAL);
			break;
		case 2:
			event.SetList(EventType::PRO);
			break;
		case 3:
			event.PickPerson();
			break;
		case 4:
			event.GetList();
			break;
		case 0:
			start = false;
			break;
		}
	}

	return 0;
}