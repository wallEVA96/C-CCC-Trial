/*
 * main.cpp
 *                        _ _                 
 *         __      ____ _| | | _____   ____ _ 
 *         \ \ /\ / / _` | | |/ _ \ \ / / _` |
 *          \ V  V / (_| | | |  __/\ V / (_| |
 *           \_/\_/ \__,_|_|_|\___| \_/ \__,_|
 * Copyright (C) 2018 walleva <walleva@ubuntu>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

using namespace std;

#define ROW 10
#define COL 10
enum {WALL = '+', ROAD = ' '};
enum dir {NORTH=0, SOUTH,  WEST, EAST};
char temp_map[ROW][COL] = {
							{WALL, ROAD, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL},
							{WALL, ROAD, ROAD, ROAD, WALL, WALL, ROAD, WALL, WALL, WALL},
							{WALL, WALL, ROAD, WALL, WALL, WALL, WALL, ROAD, ROAD, ROAD},
							{WALL, ROAD, ROAD, ROAD, WALL, ROAD, WALL, ROAD, WALL, WALL},
							{WALL, ROAD, WALL, WALL, WALL, WALL, WALL, ROAD, ROAD, WALL},
							{WALL, ROAD, WALL, ROAD, ROAD, WALL, ROAD, WALL, ROAD, WALL},
							{WALL, ROAD, WALL, WALL, ROAD, ROAD, ROAD, WALL, ROAD, WALL},
							{WALL, ROAD, ROAD, ROAD, ROAD, WALL, ROAD, ROAD, ROAD, WALL},
							{WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL},
						  };
class maze_map{
public:
	maze_map();
	maze_map(char (*p_data)[ROW]);
	char map_data[ROW][COL];
	char get_map_data(int y, int x);
};

maze_map::maze_map()
{
	cout << "\033[0;0H";
	cout << "\033[2J";
}

maze_map::maze_map(char (*p_data)[ROW])
{
	cout << "\033[0;0H";
	cout << "\033[2J";
	for(int i = 0; i < ROW; i++){
		for(int j = 0; j < COL; j++){
			cout << (map_data[i][j] = *(*(p_data+i)+j));
		}
		cout << endl;
	}
}

char maze_map::get_map_data(int y, int x)
{
	return map_data[y-1][x-1];
}

class maze_person{
public:
	maze_person();
	maze_person(int x, int y, char i, dir curr_dir);
//	~maze_person();

	void twinkle_person(int x, int y);
	int  go_ahead(maze_map &maze_map_temp);
	void next_step();
	void estimate_dir();
	void escape_maze(maze_map &tmp_map);
private:
	char icon;
	int curX;
	int curY;
	int preX;
	int preY;
	dir curr_dir;
};

maze_person::maze_person(){
	cout << "do noth" << endl;
}

maze_person::maze_person(int y, int x, char i, dir curr_dir):curr_dir(curr_dir),curX(x),curY(y), preX(x), preY(y), icon(i) {
	//cout << "set init location"	<< endl;
	twinkle_person(curX, curY);
}

void maze_person::twinkle_person(int x, int y){
	char ansi_cmd[15] = {0};
	cout << "\033[1m";
	cout << ' '; //clear local flag.
	sprintf(ansi_cmd, "\033[%d;%dH", y, x);
	cout << ansi_cmd;
	cout << maze_person::icon;
	cout << ansi_cmd;
	cout << "\033[0m";
	cout.flush();
	sleep(1);
}

/*
 * ---------------------> (x)
 * |		NORTH
 * |WEST			EAST	  
 * |		SOUTH
 * |
 * v
 *(y)
 * */
void maze_person::estimate_dir()
{
	int dir_x_err = curY - preY;
	int dir_y_err = curX - preX;
	
	if(dir_x_err == 0){
		if(dir_y_err > 0)
			curr_dir = SOUTH;
		else if(dir_y_err < 0)
			curr_dir = NORTH;
	}

	if(dir_y_err == 0){
		if(dir_x_err > 0)
			curr_dir = EAST;
		else if(dir_x_err < 0)
			curr_dir = WEST;
	}
}

int maze_person::go_ahead(maze_map &maze_map_temp)
{
	switch(curr_dir){
		case NORTH:	
			if(maze_map_temp.get_map_data(curY, curX+1) == ROAD)
			{	preX = curX;
				curX += 1;
				curr_dir = EAST;
			}
			else if(maze_map_temp.get_map_data(curY-1, curX) == ROAD)
			{	preY = curY;
				curY -= 1;
				curr_dir = NORTH;
			}
			else if(maze_map_temp.get_map_data(curY, curX-1) == ROAD)
			{	preX = curX;
				curX -= 1;
				curr_dir = WEST;
			}
			else
				return 0;
			break;
		case SOUTH:
			if(maze_map_temp.get_map_data(curY, curX-1) == ROAD) 
			{
				preX = curX;
				curX -= 1;
				curr_dir = WEST;
			}
			else if(maze_map_temp.get_map_data(curY+1, curX) == ROAD)
			{
				preY = curY;
				curY += 1; 
				curr_dir = SOUTH;
			}
			else if(maze_map_temp.get_map_data(curY, curX+1) == ROAD)
			{
				preX = curX;
				curX += 1;
				curr_dir = EAST;
			}
			else
				return 0;
			break;
		case EAST:	
			if(maze_map_temp.get_map_data(curY+1, curX) == ROAD) 
			{
				preY = curY;
				curY += 1;
				curr_dir = SOUTH;
			}
			else if(maze_map_temp.get_map_data(curY, curX+1) == ROAD)
			{
				preX = curX;
				curX += 1;
				curr_dir = EAST;
			}
			else if(maze_map_temp.get_map_data(curY-1, curX) == ROAD)
			{
				preY = curY;
				curY -= 1;
				curr_dir = NORTH;
			}
			else
				return 0;
			break;
		case WEST:
			if(maze_map_temp.get_map_data(curY-1, curX) == ROAD){
				preY = curY;
				curY -= 1;
				curr_dir = NORTH;
			}
			else if(maze_map_temp.get_map_data(curY, curX-1) == ROAD)
			{
				preX = curX;
				curX -= 1;
				curr_dir = WEST;
			}
			else if(maze_map_temp.get_map_data(curY+1, curX) == ROAD)
			{
				preY = curY;
				curY += 1;
				curr_dir = SOUTH;
			}
			else
				return 0;
			break;
		default:
			if(maze_map_temp.get_map_data(curY, curX) != ROAD &&
			   maze_map_temp.get_map_data(curY, curX) != WALL)
				cout << "[maze_person] I'm out!" << endl;
			cout << "[maze person] Ooops! Don't know next step." << endl;
	}
	maze_person::twinkle_person(curX, curY);
	return 1;
}
void maze_person::escape_maze(maze_map &tmp_map)
{
	while(maze_person::go_ahead(tmp_map) != 0);
	cout << "\033[1m";
	cout << "\033[10;0H";
	cout << "++++++++++Congratulations For Escaping+++++++++++" << endl;
	cout << "[maze_person] I'm out!" << endl;
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
}

int main(int argc, char **argv)
{
	maze_map league_map(temp_map);
	
	maze_person warrior(1, 2, 'O', SOUTH);
	warrior.escape_maze(league_map);
	return 0;
}

