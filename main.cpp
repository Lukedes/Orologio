#include <iostream>
#include <time.h>
#include <stdio.h>
#include <windows.h>
using namespace std;
void gotoxy (int x, int y)
{
    COORD coord; // coordinates
    coord.X = x; coord.Y = y; // X and Y coordinates
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
}
int main(int argc, char** argv) {
system("COLOR F0");
time_t tempo;
camadonna: 
gotoxy(0,0);
tempo = time( NULL );
cout<<flush<<"\r"<<ctime(&tempo);
Sleep(250);
goto camadonna;
return 0;
}
