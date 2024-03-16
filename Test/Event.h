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
	std::vector<std::string> user = { "³óº¸", "»ç·Î·Î", "±×¸°", "½º³ë¿ì", "À¯°â", "¹ÎÈ£", "¿©³ë", "¸Þ±¸¹Ö", "À¯°æ", "hui1601", "Å×´Ï", "È£µÎ³ª¹«", "½Â±â", "»÷Áî", "ÇÏÀ±", "¹í»õ", "Äµ¾Æ´Ù", "¾Û"};
	std::vector<std::string> boost = { "¾Û", "Äµ¾Æ´Ù", "¸Þ±¸¹Ö", "½º³ë¿ì"};
	std::vector<std::string> list = {};
};

