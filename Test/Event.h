#pragma once

#include <vector>
#include <string>

class Event
{
public:
	void PickPerson();
	void Shuffle();
	Event();

private:
	void SetList();

private:
	std::vector<std::string> user = { "�ϸ�", "�", "��ĥ", "�Ŀ˳Ŀ�", "�����", "��η�", "�׸�", "LeFay", "�糪", "��ȣ", "ȯ��",
	"����", "����", "ȣ�γ���", "�±�", "����", "��Ī", "�÷γ�", "���", "����", "����", "��", "ĵ�ƴ�", "��ī��", "ample" };
	std::vector<std::string> boost = { "�Ŀ˳Ŀ�" };
	std::vector<std::string> list = {};
};

