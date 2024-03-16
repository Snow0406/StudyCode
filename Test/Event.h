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
	std::vector<std::string> user = { "��", "��η�", "�׸�", "�����", "����", "��ȣ", "����", "�ޱ���", 
		"����", "hui1601", "�״�", "ȣ�γ���", "�±�", "����", "����", "���", "ĵ�ƴ�", "��", "ȯ��"};
	std::vector<std::string> boost = { "��", "�ޱ���", "�����", "ȯ��" , "�±�", "��ȣ"};
	std::vector<std::string> list = {};
};

