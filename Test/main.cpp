#include "Event.h"

int main() {
	Event event;

	int index;
	bool start = true;
	while (start)
	{
		scanf_s("%d", &index);
		switch (index)
		{
		case 1:
			event.PickPerson();
			break;
		case 2:
			event.GetList();
			break;
		case 0:
			start = false;
			break;
		}
	}

	return 0;
}