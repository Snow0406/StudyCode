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
	std::vector<std::string> user = { "ȭ��", "��", "�׸�", "�����", "����", "��ȣ", "ȯ��", "����", "����", "�ޱ���",
	"ggcollee246", "�״�", "����", "ȣ�γ���", "�±�", "����", "���", "ĵ�ƴ�", "��"};
	std::vector<std::string> boost = { "��", "�ޱ���", "�����", "ȯ��"};
	std::vector<std::string> list = {};
};

