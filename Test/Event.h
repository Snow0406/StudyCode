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
	std::vector<std::string> user = { "농보", "파스텔", "스노우", "환수", "다이인", "테이크케어", "gg", "호두나무", "눈누", "샌즈",
	"캐나다", "앱"};
	std::vector<std::string> boost = { "앱", "스노우", "환수"};
	std::vector<std::string> list = {};
};

