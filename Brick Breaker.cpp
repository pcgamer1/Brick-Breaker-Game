#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<iomanip>
#include<math.h>
#include<Windows.h>
#include<string>
#include<time.h>
#include<string.h>
#include<fstream>

using namespace std;
unsigned char base=205,box=220,bound=186;
int x,y,x2,y2,m;
int score=0;
int e=0,f=0,g=0,h=0,t=0,j=0,k=0,l=0;
int c=3;
int n=0;
int z=0;
int dif;
int o=9,p=13;
int win=0;
char cha;
unsigned char a[25][25];
int q;
ofstream f1;ifstream f2;
void c3();
void c2();
void check()
{
    for(int i=0;i<25;i++)
    {
        for(int j=0;j<25;j++)
        {
            if(a[i][j]==box)
                win++;
        }
    }
}
bool key(int timeout_milliseconds, char& ch)
{
    HANDLE tui_handle = GetStdHandle(STD_INPUT_HANDLE);
    DWORD tui_evtc = 0;
    DWORD deadline = GetTickCount() + timeout_milliseconds;
    INPUT_RECORD tui_inrec = { 0 };
    DWORD tui_numread = 0;

    while (GetTickCount() < deadline) {
        if (tui_evtc > 0) {
            ReadConsoleInput(tui_handle, &tui_inrec, 1, &tui_numread);
            if (tui_inrec.EventType == KEY_EVENT) {
                if (tui_inrec.Event.KeyEvent.bKeyDown) {
                    ch = tui_inrec.Event.KeyEvent.uChar.AsciiChar;
                    return true;
                }
            }
        }

        GetNumberOfConsoleInputEvents(tui_handle, &tui_evtc);
    }

    return false;
}

void curry(int y, int x)
{
    static const HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    std::cout.flush();
    COORD coord = { (SHORT)x, (SHORT)y };
    SetConsoleCursorPosition(hOut, coord);
}
void slope()
{
    m=(y2-y)/(x2-x);
}
void condition()
{int z=0;;slope();
    if(y2-1==0&&m==-1)
    {
        c=1;
    }
    else if(y2-1==0&&m==1)
    {
        c=2;
    }
    else if(y2+1==24&&m==-1)
    {
        c=3;
    }
    else if(y2+1==24&&m==1)
    {
        c=4;
    }
    else if((a[x2-1][y2]!=' '||a[x2-1][y2+1]!=' ')&&m==-1)
    {
        c=5;if(a[x2-1][y2]==box||a[x2-1][y2+1]==box)score+=5;
    }
    else if((a[x2-1][y2]!=' '||a[x2-1][y2-1]!=' ')&&m==1)
    {
        c=6;if(a[x2-1][y2]==box||a[x2-1][y2-1]==box)score+=5;
    }
    else if(a[x2+1][y2+1]!=' '&&m==1&&a[x2+1][y2-1]!=' '&&c!=8)
    {
        c=7;
    }
    else if(a[x2+1][y2-1]!=' '&&m==-1&&a[x2+1][y2+1]!=' '&&c!=7)
    {
        c=8;
    }
    else if((a[x2+1][y2]==base||a[x2+1][y2-1]==base)&&m==-1)
    {
        c=7;
    }
    else if((a[x2+1][y2]==base||a[x2+1][y2+1]==base)&&m==1)
    {
        c=8;
    }
    else if((a[x2+1][y2]==box||a[x2+1][y2+1]==box)&&m==1)
    {
    	c=7;
	}
	else if((a[x2+1][y2]==box||a[x2+1][y2-1]==box)&&m==-1)
	{
		c=8;
	}
    if(x2==24)
    {
        n=1;
    }
}
void c7()
{   a[x2][y2]=' ';
if(k==0)

    if(k==0)
{
   x2++;y2++;
   if(y2+1==24)
   c=3;
if(c==3)
{void c3();
	c3();g++;k=0;
}

}
if(g==0)
{
x=x2;y=y2;
x2--;y2++;
a[x2][y2]=178;
}

}
void c8()
{a[x2][y2]=' ';
    if(l==0)
    {
        x2++;y2--;
        if(y2-1==0)
        c=2;
    if(c==2)
    {void c2();
    c2();f++;l=0;
	}
    }
    if(f==0)
{
x=x2;y=y2;
x2--;y2--;
a[x2][y2]=178;
}
}
void c1()
{
a[x2][y2]=' ';
if(e==0)
    {
        x2++;y2--;

          if(a[x2+1][y2+1]!=' '||a[x2+1][y2]!=' '||a[x2+1][y2-1]!=' ')
    {
        c=7;
    }


if(c==7)

    {c7();k++;e=0;}

}
if(k==0)

{x=x2;y=y2;
x2++;y2++;
a[x2][y2]=178;
}}
void c2()
{void c5();
a[x2][y2]=' ';
    if(f==0)
    {
        x2--;y2--;
        if(a[x2-1][y2+1]==box||a[x2-1][y2]==box)
        {
            c=5;
        }
        if(c==5)
        {
            c5();t++;f=0;
        }
    }
if(t==0)
{x=x2;y=y2;
x2--;y2++;
a[x2][y2]=178;
}}
void c3()
{void c6();
a[x2][y2]=' ';
    if(g==0)
    {
        x2--;y2++;
        if(a[x2-1][y2-1]==box||a[x2-1][y2]==box)
        {
            c=6;
        }
        if(c==6)
        {
            c6();j++;g=0;
        }
    }
if(j==0)
{x=x2;y=y2;
x2--;y2--;
a[x2][y2]=178;
}}
void c4()
{
a[x2][y2]=' ';
    if(h==0)
    {
        x2++;y2++;
        if(a[x2+1][y2-1]!=' '||a[x2+1][y2]!=' '||a[x2+1][y2+1]!=' ')
        c=8;
if(c==8)
{

        c8();l++;h=0;
}
    }

if(l==0&&k==0)
{x=x2;y=y2;
x2++;y2--;
a[x2][y2]=178;
}}
void c5()
{
a[x2][y2]=' ';
if(t==0)
{if(a[x2-1][y2]!=' ')
    a[x2-1][y2]=' ';
    else if(a[x2-1][y2+1]!=' ')
    {
        a[x2-1][y2+1]=' ';
    }
}
x=x2;y=y2;
x2++;y2++;
a[x2][y2]=178;
if(y2+1==24&&(t==0||t==1))
{
    c4();h++;
}
}
void c6()
{
a[x2][y2]=' ';
if(j==0)
{if(a[x2-1][y2]!=' ')
    a[x2-1][y2]=' ';
    else if(a[x2-1][y2-1]!=' ')
        a[x2-1][y2-1]=' ';
}
x=x2;y=y2;
x2++;y2--;
a[x2][y2]=178;
if(y2-1==0&&(j==0||j==1))
{
    c1();e++;
}
}

void out()
{
    int i,j;
    cout<<setw(28);
    for(i=0;i<27;i++)
{
    cout<<base;
}
cout<<endl;
    for(i=0;i<25;i++)
{
    cout<<setw(28)<<bound;
    for(j=0;j<25;j++)
{
    cout<<a[i][j];
}
cout<<bound;
if(i==0)
{
    cout<<"   SCORE : "<<score;
}
cout<<endl;
}
cout<<setw(28);
for(i=0;i<27;i++)
{
    cout<<base;
}
cout<<endl<<endl;
cout<<setw(66)<<"Use 4 and 6 to navigate and ESC to exit to the menu.";
}
void generatemat()
    {

    int i,j;
    for(i=0;i<25;i++)
    {
        for(j=0;j<25;j++)
        {
            a[i][j]=' ';
        }
    }
    for(i=0;i<5;i++)
    {for(j=0;j<25;j++)
    {if(j%4==0)
{
    j++;j++;
    continue;
}
    a[i][j]=220;
    }

    }
    for(j=9;j<14;j++)
    {
       a[24][j]=205;
    }
    }
void motion()
{
int i;
n=0;
char cha;
q=0;
    while(n!=1)
    {q++;
        if(key(1,cha))
    {
        switch(cha)
    {
     case 97:{if(o>0)
         {a[24][p]=' ';
           o-=1;p-=1;
            for(i=o;i<=p;i++)
        {
            a[24][i]=205;
        }}break;}
     case 100:{if(p<24)
         {a[24][o]=' ';
           o+=1;p+=1;
            for(i=o;i<=p;i++)
        {
            a[24][i]=205;
        }}break;}
    case 27:{n=1;c=3;break;}
    default:{break;}

}}
if(q%dif==0)
{if(e==1||f==1||g==1||h==1||t==1||j==1||k==1||l==1)
    {if(e==1)
    {
        c1();if(k==0)e++;
    }
    else if(f==1)
    {
        c2();f++;
    }
    else if(g==1)
    {
        c3();g++;
    }
    else if(h==1)
    {
        c4();if(l==0)h++;
    }
    else if(t==1)
    {
        c5();t++;
    }
    else if(j==1)
    {
        c6();j++;
    }
    else if(k==1)
    {
        c7();if(g==0)k++;
    }
    else if(l==1)
    {
        c8();l++;
    }}
    else
     {

        condition();
    if(c==1)
    {
        c1();if(k==0){e++;f=0;g=0;h=0;t=0;j=0;k=0;l=0;}else{f=0;g=0;h=0;t=0;j=0;e=0;l=0;}
    }
    else if(c==2)
    {
        c2();if(t==0){f++;e=0;g=0;h=0;t=0;j=0;k=0;l=0;}else{f=0;g=0;h=0;j=0;e=0;l=0;k=0;}
    }
    else if(c==3)
    {
        c3();if(j==0){g++;e=0;f=0;h=0;t=0;j=0;k=0;l=0;}else{f=0;g=0;h=0;e=0;l=0;k=0;t=0;}
    }
    else if(c==4)
    {
        c4();if(l==0){h++;e=0;f=0;g=0;t=0;j=0;k=0;l=0;}else{h=0;f=0;g=0;e=0;t=0;j=0;k=0;}

    }
    else if(c==5)
    {
        c5();if(h==1){e=0;f=0;g=0;j=0;k=0;l=0;}else{t++;h=0;e=0;f=0;g=0;j=0;k=0;l=0;}
    }
    else if(c==6)
    {
        c6();if(e==1){f=0;g=0;h=0;t=0;k=0;l=0;}else{j++;e==0;f=0;g=0;h=0;t=0;k=0;l=0;}
    }
    else if(c==7)
    {
        c7();if(g==0){k++;e=0;f=0;h=0;t=0;j=0;l=0;}else{k=0;e=0;f=0;h=0;t=0;j=0;l=0;}
    }
    else if(c==8)
    {
        c8();if(f==0){e=0;g=0;h=0;t=0;j=0;k=0;l++;f=0;}else{l=0;e=0;g=0;h=0;t=0;j=0;k=0;}
    }
    else if(c==9)
    {
        n=1;c=3;
    }
    }}

curry(0,0);
out();
check();
if(win==0)
{
    cout<<endl<<endl<<"YOU WON";n=1;
}
}}

int main()
{
    int n=1;
    while(n!=0)
    {
    system("cls");
	cout<<setw(33)<<"BRICK BREAKER"<<endl<<endl;
    cout<<setw(28)<<"1.PLAY"<<endl;
    cout<<setw(28)<<"2.HELP"<<endl;
    cout<<setw(28)<<"0.EXIT"<<endl;
    cin>>n;
 if(n==1)
    	{system("cls");
    	cout<<setw(30)<<"Select Difficulty Level: "<<endl;
    	cout<<setw(28)<<"1.Easy"<<endl;
    	cout<<setw(28)<<"2.Hard"<<endl;
    	cin>>dif;
    	if(dif==1)
    	dif=2;
    	else if(dif==2)
    	dif=1;
    	score=0;generatemat();x=20,y=21,x2=19,y2=18;motion();}
 if(n==2)
        {system("cls");cout<<setw(35)<<"1.Navigate with A and D"<<endl;
	                   cout<<setw(43)<<"2.Destroy all the bricks to win"<<endl<<endl;
					   cout<<"Press any key to continue";
					   getch();}
}
}
