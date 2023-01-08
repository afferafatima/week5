#include<iostream>
#include<windows.h>
using namespace std;
void erase(int x,int y);
void gotoxy(int x,int y);
void maze();
void printpacman(int x,int y);
char getCharAtxy(short int x,short int y);

main()
 {
 system("cls");
 maze();
 int x=3;
 int y=1;
 printpacman(x,y);
 bool gamerunning=true;

 while(gamerunning)
{
 if(GetAsyncKeyState(VK_LEFT)) 
 {
 char nextlocation=getCharAtxy(x-1,y);
  if(nextlocation==' '|| nextlocation=='.')
  {
  	erase(x,y);
  	x=x-1; 
  	printpacman(x,y);
  }
 }

if(GetAsyncKeyState(VK_RIGHT)) 
 {
 char nextlocation=getCharAtxy(x+1,y);
  if(nextlocation==' '|| nextlocation=='.')
  {
  	erase(x,y);
  	x=x+1; 
  	printpacman(x,y);
  }
 }
if(GetAsyncKeyState(VK_UP)) 
 {
 char nextlocation=getCharAtxy(x,y-1);
  if(nextlocation==' '|| nextlocation=='.')
  {
  	erase(x,y);
  	y=y-1; 
  	printpacman(x,y);
  }
 }
if(GetAsyncKeyState(VK_DOWN)) 
 {
 char nextlocation=getCharAtxy(x,y+1);
  if(nextlocation==' '|| nextlocation=='.')
  {
  	erase(x,y);
  	y=y+1; 
  	printpacman(x,y);
  }
 }
if(GetAsyncKeyState(VK_ESCAPE))
	{
	gamerunning=false;
	}
 Sleep(200);
}
}



	 void gotoxy(int x,int y)
	 {
	 COORD coordinates;
	 coordinates.X = x;
	 coordinates.Y = y;
	 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
	 }

	void maze()
	{
	cout << "##########################################################################" << endl;
	cout << "||.. .......................................................  .....     ||" << endl;
	cout << "||.. %%%%%%%%%%%%%%%%       ...     %%%%%%%%%%%%%%%   |%|..   %%%%      ||" << endl;
	cout << "||..        |%|   |%|    |%|...     |%|         |%|   |%|..    |%|      ||" << endl; 
	cout << "||..        |%|   |%|    |%|...     |%|         |%|   |%|..    |%|      ||" << endl;
	cout << "||..        %%%%%%%% . . |%|...     %%%%%%%%%%%%%%%      ..   %%%%.     ||" << endl;
	cout << "||..        |%|      . . |%|...    ................  |%| ..       .     ||" << endl;
	cout << "||..        %%%%%%%%%. . |%|...    %%%%%%%%%%%%%     |%| ..   %%%%.     ||" << endl;
	cout << "||..              |%|. .           |%|.......        |%| ..    |%|.     ||" << endl;
	cout << "||..    ......... |%|.             |%|.......|%|         ..    |%|.     ||" << endl;
	cout << "||..|%| |%|%%%|%|.|%|. |%|            .......|%|         ..|%| |%|.     ||" << endl;
	cout << "||..|%| |%|   |%|..    %%%%%%%%%%%%%  .......|%|          .|%|.         ||" << endl;
	cout << "||..|%| |%|   |%|..           ...|%|      %%%%%%         . |%|.         ||" << endl;
	cout << "||..|%|           .           ...|%|                 |%| ..|%|.         ||" << endl;
	cout << "||..|%| %%%%%%%%%%%%%%        ...|%|%%%%%%%%%%%      |%| ..|%|%%%%%     ||" << endl;
	cout << "||...............................................    |%| ..........     ||" << endl;
	cout << "||   ............................................           .......     ||" << endl;
	cout << "||..|%| |%|   |%|..    %%%%%%%%%%%%%    ......|%|    |%| ..|%|.         ||" << endl;
	cout << "||..|%| |%|   |%|..           ...|%|       %%%%%%    |%| ..|%|.         ||" << endl;
	cout << "||..|%|           .     G     ...|%|                 |%| ..|%|.         ||" << endl;	
	cout << "||..    %%%%%%%%%%%%%%        ...|%|%%%%%%%%%%%%     |%| ..|%|%%%%%     ||" << endl;
	cout << "||..............................................     |%| ..........     ||" << endl;
	cout << "||  ............................................            .......     ||" << endl;
	cout << "||########################################################################" << endl;
         
	}
char getCharAtxy(short int x, short int y)
        {
	CHAR_INFO ci;
	COORD xy = {0, 0};
	SMALL_RECT rect = {x, y, x, y};
	COORD coordBufSize;
	coordBufSize.X = 1;
	coordBufSize.Y = 1;
	return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar: ' ';
        }	
void printpacman(int x,int y)
	{
	gotoxy(x,y);
	cout<< "P";
	}
void erase(int x,int y)
	{
        gotoxy(x,y);
	cout << " ";
	} 