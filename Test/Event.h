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
	std::vector<std::string> user = { "화초", "농보", "사로로", "스노우", "민호", "빌드", "메구밍", "유경", 
		"gg", "졸려", "호두나무", "승기", "샌즈", "닉네임", "하윤", "뱁새", "노는앱", "Viento", "테니"};
	std::vector<std::string> boost = { "앱", "스노우"};
	std::vector<std::string> list = {};
};

