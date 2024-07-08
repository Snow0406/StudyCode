#pragma once

#include <iostream>
#include <vector>
#include <string>

enum EventType {
	NORMAL,
	PRO
};

class Event
{
public:
	void PickPerson();
	void GetList();
	void SetList(EventType type);

public:
	Event();

private:
	void Shuffle();

private:
	std::vector<std::string> user = { "��", "�Ľ���", "�����", "ȯ��", "������", "����ũ�ɾ�", "gg", "ȣ�γ���", "����", "����",
	"ĳ����", "��"};
	std::vector<std::string> boost = { "��", "�����", "ȯ��"};
	std::vector<std::string> list = {};
};

