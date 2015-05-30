#include <string>
using namespace std;

#ifndef MOVIE_H_
#define MOVIE_H_

class Movie {
private:
	//Properties
	string title;
	string genre;
	int showtime;
	int movieNumber;
	static int moviePool;

public:
	//Constructors
	Movie() {
		title = "Nothing Showing";
		movieNumber = moviePool++;
	}
	Movie(string t, string g, int st) {
		title = t;
		genre = g;
		showtime = st;
		movieNumber = moviePool++;
	}

	//Behaviors
	string Movie::GetTitle() { return title; }

	string Movie::GetGenre() { return genre; }

	int Movie::GetShowtime() { return showtime; }
};

#endif