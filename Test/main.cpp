#include "Event.h"

using namespace std;

int main() {
	Event event;

	int index;
	bool start = true;

	cout << "1 : NORMAL ����" << 
	endl << "2 : PRO ����" << 
	endl << "3 : �̱�" << 
	endl << "4 : ��� ����" << 
	endl << "0 : ����" << endl;


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