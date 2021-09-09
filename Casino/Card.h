// Class to contain the facevalue and suit of a card
#include <string>

class Card {
public:
	 Card(std::string faceValue, std::string suit)
		 // parameter list would go here
		 : faceValue{ faceValue }, suit{ suit } { // member initializers go here
		 //body goes here
	 }
	std::string getFaceValue() const {
		return faceValue;
	}
	std::string getSuit() const {
		return suit;
	}
private:
	std::string faceValue;
	std::string suit;
};
