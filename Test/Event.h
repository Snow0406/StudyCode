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
	std::vector<std::string> user = { "È­ÃÊ", "³óº¸", "±×¸°", "½º³ë¿ì", "À¯°â", "¹ÎÈ£", "È¯¼ö", "¿©³ë", "ºôµå", "¸Þ±¸¹Ö",
	"ggcollee246", "Å×´Ï", "Á¹·Á", "È£µÎ³ª¹«", "½Â±â", "»÷Áî", "¹í»õ", "Äµ¾Æ´Ù", "¾Û"};
	std::vector<std::string> boost = { "¾Û", "¸Þ±¸¹Ö", "½º³ë¿ì", "È¯¼ö"};
	std::vector<std::string> list = {};
};

