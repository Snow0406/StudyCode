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
	std::vector<std::string> user = { "Harin", "��", "��ĥ", "�Ŀ˳Ŀ�", "�����", "������ (��η�)", "�׸�", "Le Fay", "NBLim", "��ȣ", "ȯ��", "����", "����", 
		"(ȣ��)����", "�±�", "����", "��Ī", "���", "����", "����", "��¾�", "ADA_CAN", "frolicking_flames", "ample", "����", "����", "������", "���", "��Ǯ",
		"���������", "����", "anon.dart", "delta", "keystone7", "SSR*SG", "Viento", "White Choco"};
	std::vector<std::string> boost = { "�Ŀ˳Ŀ�", "SSR*SG"};
	std::vector<std::string> list = {};
};

