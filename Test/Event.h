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
	"¿©³ë", "À¯°æ", "È£µÎ³ª¹«", "½Â±â", "»÷Áî", "»çÄª", "½Ã·Î³ª", "¹í»õ", "¹ÌÁî", "ºôµå", "¾Û", "Äµ¾Æ´Ù", "·çÄ«¿¤", "ample" };
	std::vector<std::string> boost = { "³Ä¿Ë³Ä¿Ë" };
	std::vector<std::string> list = {};
};

