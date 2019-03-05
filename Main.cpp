#include <iostream>
#include <fstream>
#include <string>
#include "MusicDB.h"
#include "Song.h"

using namespace std; 

int main()

{
	string str;
	
	string song_title;
	cout << "Please enter song title: \n ";
	getline(cin, str);
	
	cin >> song_title;

	string song_artist;
	cout << "Please enter the name of artist: ";
	getline(cin, str);

	cin >> song_artist;

	string song_album;
	cout << "Please enter song album: ";
	getline(cin, str);

	cin >> song_album;

	int song_track_number;

	cout << "Please enter song track number: ";
	getline(cin, str);

	cin >> song_track_number;


}