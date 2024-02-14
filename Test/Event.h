#pragma once

#include <vector>
#include <string>

class Event
{
public:
	void PickPerson();
	void GetList();

public:
	Event();

private:
	void SetList();
	void Shuffle();

private:
	std::vector<std::string> user = { "Harin", "��",  "�����", "������ (��η�)", "�׸�", "Le Fay", "NBLim", "��ȣ", "ȯ��", "����", "����", 
		"(ȣ��)����", "�±�", "����", "��Ī", "���", "����", "��¾�", "CAN_ADA", "����", "����", "���", "ȭ��", "����", "SSR*SG", "Viento", 
		"White Choco", "SAMPPLE "};
	std::vector<std::string> boost = { "SSR*SG", "NBLim", "CAN_ADA" };
	std::vector<std::string> list = {};
};

