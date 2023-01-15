#include<iostream>
#include<windows.h>
using namespace std;
void printMaze();
void gotoxy(int x,int y);
void clear(int x,int y,char previos);
void pacman(int x, int y);
void showGhost(int x, int y);
char getCharAtxy(short int x, short int y);
void move(bool run,char previosChar);
int x=2,y=2,z=3;
main()
{
int gx = 1; 
int gy = 1;
int g2x = 3; 
int g2y = 3;

string direction = "right";
char previosChar = ' ';
system("cls");
printMaze();
showGhost(gx,gy);
pacman(x,y);
while(true)
{
    move(true,previosChar);
  Sleep(100);
 if(direction == "right")
 {
    char nextLocation = getCharAtxy(gx+1,gy);
    if(nextLocation == '#')
    {
        direction = "down";
    }
    else if(nextLocation == ' ' || nextLocation == '.')
    {
        clear(gx,gy,previosChar);
        gx = gx + 1;
        previosChar = nextLocation;
        showGhost(gx,gy);
    }
 }
 if(direction == "left")
 {
    char nextLocation = getCharAtxy(gx-1,gy);
    if(nextLocation == '#')
    {
        direction = "up";
    }
    else if(nextLocation == ' ' || nextLocation == '.')
    {
        clear(gx,gy,previosChar);
        gx = gx - 1;
        previosChar = nextLocation;
        showGhost(gx,gy);
    }
 }
if(direction == "down")
 {
    char nextLocation = getCharAtxy(gx,gy+1);
    if(nextLocation == '#')
    {
        direction = "left";
    }
    else if(nextLocation == ' ' || nextLocation == '.')
    {
        clear(gx,gy,previosChar);
        gy = gy + 1;
        previosChar = nextLocation;
        showGhost(gx,gy);
    }
 }
 
if(direction == "up")
 {
    char nextLocation = getCharAtxy(gx,gy-1);
    if(nextLocation == '#')
    {
        direction = "right";
    }
    else if(nextLocation == ' ' || nextLocation == '.')
    {
        clear(gx,gy,previosChar);
        gy = gy - 1;
        previosChar = nextLocation;
        showGhost(gx,gy);
    }
 }




  if(direction == "right")
 {
    char nextLocation = getCharAtxy(g2x+1,g2y);
    if(nextLocation == '#')
    {
        direction = "down";
    }
    else if(nextLocation == ' ' || nextLocation == '.')
    {
        clear(g2x,g2y,previosChar);
        g2x = g2x + 1;
        previosChar = nextLocation;
        showGhost(g2x,g2y);
    }
 }
 if(direction == "left")
 {
    char nextLocation = getCharAtxy(g2x-1,g2y);
    if(nextLocation == '#')
    {
        direction = "up";
    }
    else if(nextLocation == ' ' || nextLocation == '.')
    {
        clear(g2x,g2y,previosChar);
        g2x = g2x - 1;
        previosChar = nextLocation;
        showGhost(g2x,g2y);
    }
 }
if(direction == "down")
 {
    char nextLocation = getCharAtxy(g2x,g2y+1);
    if(nextLocation == '#')
    {
        direction = "left";
    }
    else if(nextLocation == ' ' || nextLocation == '.')
    {
        clear(g2x,g2y,previosChar);
        g2y = g2y + 1;
        previosChar = nextLocation;
        showGhost(g2x,g2y);
    }
 }
 
if(direction == "up")
 {
    char nextLocation = getCharAtxy(g2x,g2y-1);
    if(nextLocation == '#')
    {
        direction = "right";
    }
    else if(nextLocation == ' ' || nextLocation == '.')
    {
        clear(g2x,g2y,previosChar);
        g2y = g2y - 1;
        previosChar = nextLocation;
        showGhost(g2x,g2y);
    }
 }




}

   
}

void printMaze()
{
cout<<"###########"<<endl;
cout<<"#         #"<<endl;
cout<<"#         #"<<endl;
cout<<"#         #"<<endl;
cout<<"#         #"<<endl;
cout<<"#         #"<<endl;
cout<<"#         #"<<endl;
cout<<"#         #"<<endl;
cout<<"###########"<<endl;

}
void clear(int x, int y, char previos)
{
    gotoxy(x,y);
    cout<<previos;
}

void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);	
}

char getCharAtxy(short int x, short int y)
{
CHAR_INFO ci;
COORD xy = {0, 0};
SMALL_RECT rect = {x, y, x, y};
COORD coordBufsize;
coordBufsize.X = 1;
coordBufsize.Y = 1;
return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufsize, xy, &rect) ? ci.Char.AsciiChar : ' ';
	
} 
void showGhost(int x, int y)
{
    gotoxy(x,y);
    cout<<"G";
}

void pacman(int x, int y)
{
    gotoxy(x,y);
    cout<<"P";
}
void move(bool run,char previosChar)
{ 

		if(GetAsyncKeyState(VK_LEFT))
		{
				char nextLocation = getCharAtxy(x - 1, y);
				if(nextLocation == ' ' || nextLocation == '.')
				{
				
				clear(x,y,previosChar);
				x = x -1;
				pacman(x,y);
				}
				if(nextLocation == '.')
				{
					z = z + 1;
					gotoxy(149,10);
					cout<<"Points= "<<z;
					gotoxy(158,10);
					
				}
		}
		if(GetAsyncKeyState(VK_RIGHT))
	    {
			char nextLocation = getCharAtxy(x + 1, y);
			if(nextLocation == ' ' || nextLocation == '.')
			
			{
				clear(x,y,previosChar);
				x = x + 1;
				pacman(x,y);
			}
			if(nextLocation == '.')
				{
					z = z + 1;
					gotoxy(149,10);
					cout<<"Points= "<<z;
					gotoxy(158,10);
					
				}
		}
		if(GetAsyncKeyState(VK_UP))
	    {
			char nextLocation = getCharAtxy(x,y - 1);
			if(nextLocation == ' ' || nextLocation == '.')
			
			{
				clear(x,y,previosChar);
				y =	y - 1;
				pacman(x,y);
			}
			if(nextLocation == '.')
				{
					z = z + 1;
					gotoxy(149,10);
					cout<<"Points= "<<z;
					gotoxy(158,10);
					
				}
		}
			if(GetAsyncKeyState(VK_DOWN))
	    {
			char nextLocation = getCharAtxy(x,y + 1);
			if(nextLocation == ' ' || nextLocation == '.')
			
			{
				clear(x,y,previosChar);
				y =	y + 1;
				pacman(x,y);
			}
			if(nextLocation == '.')
				{
					z = z + 1;
					gotoxy(149,10);/*row,column*/
					cout<<"Points= "<<z;
					gotoxy(158,10);
					
				}
		}
		if(GetAsyncKeyState(VK_ESCAPE))
		{
					run = false;
		}

    
}