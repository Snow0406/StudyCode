#pragma once

#include <vector>
#include <string>

class Event
{
public:
	void PickPerson();
	void Shuffle();
	Event();

private:
	void SetList();

private:
	std::vector<std::string> user = { "ÇÏ¸°", "³îº¸", "ÄðÄ¥", "³Ä¿Ë³Ä¿Ë", "½º³ë¿ì", "»ç·Î·Î", "±×¸°", "LeFay", "»ç³ª", "¹ÎÈ£", "È¯¼ö",
	"¿©³ë", "À¯°æ", "È£µÎ³ª¹«", "½Â±â", "»÷Áî", "»çÄª", "¹í»õ", "¹ÌÁî", "ºôµå", "¾Û", "Äµ¾Æ´Ù", "·çÄ«¿¤", "ample", "À¯°â"};
	std::vector<std::string> boost = { "³Ä¿Ë³Ä¿Ë" };
	std::vector<std::string> list = {};
};

