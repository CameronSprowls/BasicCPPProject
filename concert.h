#include <string>
#include <ctime>
#include <vector>

using namespace std;

// Header file for the concert class
class concert{
	public:
		// Public methods
		concert();
		concert(string, vector<string>, int, struct tm);
		bool operator<(const concert& other) const;
		string concertName;
		vector<string> friends;
		struct tm date;
		int desire;	
	private:
};

ostream& operator<<(ostream& os, const concert& concert);
