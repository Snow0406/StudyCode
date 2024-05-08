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
	std::vector<std::string> user = { "ȭ��", "��", "��η�", "�����", "��ȣ", "����", "�ޱ���", "����", 
		"gg", "����", "ȣ�γ���", "�±�", "����", "�г���", "����", "���", "��¾�", "Viento", "�״�"};
	std::vector<std::string> boost = { "��", "�����"};
	std::vector<std::string> list = {};
};

