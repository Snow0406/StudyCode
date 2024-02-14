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
	std::vector<std::string> user = { "Harin", "³óº¸",  "½º³ë¿ì", "¤·¤µ¤· (»ç·Î·Î)", "±×¸°", "Le Fay", "NBLim", "¹ÎÈ£", "È¯¼ö", "¿©³ë", "À¯°æ", 
		"(È£µÎ)³ª¹«", "½Â±â", "»÷Áî", "»çÄª", "¹í»õ", "ºôµå", "³ë´Â¾Û", "CAN_ADA", "À¯°â", "¤¸¤©", "³î²¤ÀÌ", "È­º£", "ÆËÄÜ", "SSR*SG", "Viento", 
		"White Choco", "SAMPPLE "};
	std::vector<std::string> boost = { "SSR*SG", "NBLim", "CAN_ADA" };
	std::vector<std::string> list = {};
};

