#ifndef GAME_OBJECTS_H
#define GAME_OBJECTS_H

struct player 
{
	static const int PlayerWidth = 2;
	static const int PlayerHeight = 3;
	const int PlayerCharacters[PlayerWidth * PlayerHeight] = {
		'_','_',
		'|','|',
		'/','\\'
	};
	const int PlayerColours[PlayerWidth * PlayerHeight] = {
		0xB, 0xB,
		0xB, 0xB,
		0xB,0xB,
	};
	//Defines
#define WIDTH 150
#define HEIGHT 40
#define FRAME_RATE 10


};



#endif
