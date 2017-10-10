#include <string>
#include <time.h>
#include <vector>
#include "concert.h"
#include <iostream>

// This so I don't have to type std:: before everything
using namespace std;


// Default constructor
concert::concert(){};

// Initilize non-default constructor	
concert::concert(string concertName, vector<string> friends, int desire, struct tm date){
	this->concertName = concertName;
	this->friends = friends;
	this->desire = desire;
	this->date = date;
}

// Compares concert data and returns which concert has more presidence
bool concert::operator<(const concert& other) const{
	// If one comes before the other, it's more important
	if (this->date.tm_year < other.date.tm_year) {
		return true;
	} else if (this->date.tm_year > other.date.tm_year) {
		return false;
	} else {
		if (this->date.tm_mon < other.date.tm_mon) {
			return true;
		} else if (this->date.tm_mon > other.date.tm_mon) {
			return false;
		} else { 
			if (this->date.tm_mday < other.date.tm_mday) {
				return true;
			} else if (this->date.tm_mday > other.date.tm_mday) {
				return false;
			} else {
				// If the dates are the same but the desire to go to one is higher,
				// go to that one
				if (this->desire > other.desire){
					return true;
				} else if (this-> desire < other.desire){
					return false;
				} else {
					// If they are even, just take the first one
					return true;
				}
			}
		}
	}
}


ostream& operator<<(ostream& os, const concert& concert){
	os << "Name: " << concert.concertName << " Date: " << concert.date.tm_mon <<
	"/" << concert.date.tm_mday << "/" << concert.date.tm_year << " Desire: " <<
	concert.desire << endl;
	return os;
}
