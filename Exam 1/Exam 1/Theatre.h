#include <string>
#include "Movie.h"
using namespace std;

#ifndef THEATER_H_
#define THEATER_H_

class Theater {
private:
	//Properties
	string name;
	string phone;
	static int popcornPrice, cokePrice;
	Movie movies[24];

public:
	//Constructors
	Theater() {	}
	Theater(string n, string p) {
		name = n;
		phone = p;
	}
	
	//Behaviors
	void AddMovie(Movie &movie);
	string GetMovieForHour(int hour);
	int GetShowTimeForGenre(string genre);
	int GetPopcornPrice();
	int GetCokePrice();
};

#endif