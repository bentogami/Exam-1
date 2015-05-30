#include "Theatre.h"
using namespace std;

int Theater::popcornPrice = 2;
int Theater::cokePrice = 1;

void Theater::AddMovie(Movie &movie) {
	int i = movie.GetShowtime();
	movies[i] = movie;
}

string Theater::GetMovieForHour(int hour) {
	if (hour >= 0 && hour < 25)
		return movies[hour].GetTitle();
	else
		return "";
}

int Theater::GetShowTimeForGenre(string genre) {
	bool timeFound = false;
	for (int i = 0; i < 24; i++) {		
		if (genre == movies[i].GetGenre() && timeFound == false) {
			return movies[i].GetShowtime();
			timeFound = true;
		}
	}
}

int Theater::GetPopcornPrice() { return popcornPrice; }

int Theater::GetCokePrice(){ return cokePrice; }