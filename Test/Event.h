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
	std::vector<std::string> user = { "Harin", "³óº¸", "ÄðÄ¥", "³Ä¿Ë³Ä¿Ë", "½º³ë¿ì", "¤·¤µ¤· (»ç·Î·Î)", "±×¸°", "Le Fay", "NBLim", "¹ÎÈ£", "È¯¼ö", "¿©³ë", "À¯°æ", 
		"(È£µÎ)³ª¹«", "½Â±â", "»÷Áî", "»çÄª", "¹í»õ", "¹ÌÁî", "ºôµå", "³ë´Â¾Û", "ADA_CAN", "frolicking_flames", "ample", "À¯°â", "¤¸¤©", "±èÀ¯·¡", "³î²¤ÀÌ", "¹ÙÇ®",
		"Ã÷·ç±â»ç¶ûÇØ", "ÆËÄÜ", "anon.dart", "delta", "keystone7", "SSR*SG", "Viento", "White Choco"};
	std::vector<std::string> boost = { "³Ä¿Ë³Ä¿Ë", "SSR*SG"};
	std::vector<std::string> list = {};
};

