#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void printPlayer();
void erasePlayer();
void printenemy1();
void eraseenemy1();
void moveenemy1();
void movePlayerleft();
void movePlayerright();
void maze();
char getCharAtxy(short int x, short int y);
int ex=2, ey=2;
int px=20, py=20;
main (){
    system("cls");
    maze();
    printenemy1();
    printPlayer();
    while(true){
        if (GetAsyncKeyState(VK_LEFT))
        {
            movePlayerleft();
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            movePlayerright();
        }
        moveenemy1();
        Sleep(200);
    }

}
void maze(){
    cout<<"##############################";
    cout<<"#                            #";
    cout<<"#                            #";
    cout<<"#                            #";
    cout<<"#                            #";
    cout<<"#                            #";
    cout<<"#                            #";
    cout<<"#                            #";
    cout<<"#                            #";
    cout<<"#                            #";
    cout<<"#                            #";
    cout<<"#                            #";
    cout<<"##############################";
}
void gotoxy(int x, int y){
    COORD coordinates;
    coordinates.X=x;
    coordinates.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void printenemy1(){
    gotoxy(ex+2,ey);
    cout<<"o";
    gotoxy(ex+2,ey+1);
    cout<<"| |";
    gotoxy(ex+1,ey+2);
    cout<<"__  __";
    gotoxy(ex,ey+3);
    cout<<"|    |";
    gotoxy(ex+2,ey+1);
    cout<<"_____";
}
void eraseenemy1(){
    gotoxy(ex+2,ey+1);
    cout<<" ";
    gotoxy(ex+1,ey+2);
    cout<<" ";
    gotoxy(ex,ey+3);
    cout<<" ";
    gotoxy(ex+2,ey+1);
    cout<<" ";
}
void moveenemy1(){
    eraseenemy1();
    ex=ex+1;
    if(ex==19){
        ex=2;
    }
    printenemy1();
}
void printPlayer(){
    gotoxy(px+2,py);
    cout<<"o";
    gotoxy(px+2,py+1);
    cout<<"| |";
    gotoxy(px+1,py+2);
    cout<<"__  __";
    gotoxy(px,py+3);
    cout<<"|    |";
    gotoxy(px+2,py+1);
    cout<<"_____";
}
void erasePlayer(){
    gotoxy(px+2,py+1);
    cout<<" ";
    gotoxy(px+1,py+2);
    cout<<" ";
    gotoxy(px,py+3);
    cout<<" ";
    gotoxy(px+2,py+1);
    cout<<" ";
}
char getCharAtxy(short int x, short int y){
    CHAR_INFO ci;
    COORD xy={0,0};
    SMALL_RECT rect={x,y,x,y};
    COORD coordBufSize;
    coordBufSize.X=1;
    coordBufSize.Y=1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar: ' ';
}
void movePlayerleft(){
     if (getCharAtxy(px - 1, py) == ' '){
    erasePlayer();
    px=px-1;
    printPlayer();}
}
void movePlayerright()
{ if (getCharAtxy(px + 15, py) == ' '){
    erasePlayer();
    px=px+1;
    printPlayer();
    }
}