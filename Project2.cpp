#include "concert.h"
#include <vector>
#include <string>
#include <ctime>
#include <algorithm>
#include <iostream>

// This so I don't have to type std:: everytime
using namespace std;
	
	int main(){
		//concert(string concertName, vector<string> friends, int desire, tm date)

		vector<concert::concert> concerts;
		vector<string> friends(3);
		friends[0] = "Santi";
		friends[1] = "Bird Person";
		friends[2] = "Dustin";
		
		tm date;
		date.tm_mday = 21;
		date.tm_mon = 10;
		date.tm_year = 1997;

		// Create 10 concerts with semi-random data
		// a bunch of concerts Reset date after each one
		concert::concert concert1("Best Birth NA", friends, 10, date);
		concerts.push_back(concert1);
	
		date.tm_mday = 15;
		date.tm_mon = 9;
		date.tm_year = 2010 ;
		concert::concert concert2("Pegboard Ners", friends, 6, date);
		concerts.push_back(concert2);	
	
		date.tm_mday = 15;
		date.tm_mon = 9;
		date.tm_year = 2010 ;
		concert::concert concert3("Tristam", friends, 9, date);
		concerts.push_back(concert3);

		date.tm_mday = 1;
		date.tm_mon = 1;
		date.tm_year = 2004;
		concert::concert concert4("Nickleback", friends, 1, date);
		concerts.push_back(concert4);

		date.tm_mday = 31;
		date.tm_mon = 12;
		date.tm_year = 2003;
		concert::concert concert5("The Apes", friends, 2, date);
		concerts.push_back(concert5);

		date.tm_mday = 2;
		date.tm_mon = 1;
		date.tm_year = 2004;
		concert::concert concert6("Metal!!!", friends, 5, date);
		concerts.push_back(concert6);

		date.tm_mday = 15;
		date.tm_mon = 9;
		date.tm_year = 2010;
		concert::concert concert7("Ira Woodring, Probably", friends, 8, date);
		concerts.push_back(concert7);
		
		date.tm_mday = 1;
		date.tm_mon = 1;
		date.tm_year = 2005;
		concert::concert concert8("The Shoe Band", friends, 3, date);
		concerts.push_back(concert8);

		date.tm_mday = 17;
		date.tm_mon = 6;
		date.tm_year = 2017;
		concert::concert concert9("Marshmello", friends, 7, date);
		concerts.push_back(concert9);

		date.tm_mday = 1;
		date.tm_mon = 1;
		date.tm_year = 2005;
		concert::concert concert10("Giada Monteleone", friends, 4, date);
		concerts.push_back(concert10);

		// Sort the concerts now
		sort(concerts.begin(), concerts.begin()+concerts.size());	

		// Print the concerts with the out operator
		for(int i = 0; i < concerts.size(); i++){
			cout << concerts[i];
		}

		return 0;
	}	
