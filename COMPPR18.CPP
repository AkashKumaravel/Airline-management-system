 //PROJECT AIRLINES.//
 #include<iostream.h>
 #include<conio.h>
 #include<stdio.h>
 #include<dos.h>
 #include<process.h>
 #include<ctype.h>
 #include<string.h>
 #include<stdlib.h>
 #include<fstream.h>
 #include<graphics.h>
 #include<constrea.h>

 //STRUCTURE
 typedef struct{
 char flightNo[5];
 char date[12];
 char time[6];
 char gate[3];
 }Flight;
 Flight flight={"YZ22","10-12-2008","20:30","RT"};

 typedef struct{
 char name[30];
 char booking_ID[3];
 int seats;
 }Seat;
 Seat choice[4][5];
  void displaymenu();
 void booking();
 void seat();
 void ticket();
 void records();
 void looping();
 void exit_();
void signup();
void book();
void createfile();
void transaction();
void about();
void file();
void features();
void services();
//variables//
 int selection;
 int i;
 int j;
 int password;
 int mon;
 int ye;
 char origin[20],dest[20];
char name[20];
char username[15];
char pass[10];
char airlines[10];
char accountno[20];
char op;
int date;
double card1,card2,card3;
char card4[4];
char cvv[5];
int month;
double year;
int x=170;
char Name[20],Bank[20];
int seats_num[20]={0};
 int booking_ID=100;
 int seatsAvailable=20;
 class airplanes
 {
 public:
void intro()
{
clrscr();
 int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
 setbkcolor(GREEN);
settextstyle(0,0,4);
outtextxy(150,150,"AIRLINES");
settextstyle(0,0,2);
outtextxy(150,300,"welcome to our program");
getch();
}



void choose()
{
clrscr();
int n;
setbkcolor(WHITE);
setcolor(YELLOW);
settextstyle(4,0,7);
outtextxy(10,20,"AIRLINES");
settextstyle(3,0,2);
outtextxy(10,90,"SELECT YOUR OPTION");
settextstyle(6,0,3);
setcolor(BLUE);

outtextxy(20,150,"1. AIR RESERVATION SYSTEM");
outtextxy(20,190,"2. AIRPLANE GAME");
outtextxy(20,230,"3. ABOUT US");
outtextxy(20,270,"4. SUBSCRIBE FOR OFFERS");
gotoxy(30,10);
cin>>n;
if(n==1)
{
signup();
}
if(n==2)
{
clrscr();
 int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
int i,x=10,y=10,b,e=7,f=7,g=13,h=13,c;
char op,a,s,w,d;
cout<<"Choose Color"<<endl;
cout<<"1-BLUE"<<endl;
cout<<"2-GREEN"<<endl;
cout<<"3-CYAN"<<endl;
cout<<"4-RED"<<endl;
cout<<"5-MAGENTA"<<endl;
cout<<"6-BROWN"<<endl;
cout<<"7-LIGHTGRAY"<<endl;
cout<<"8-DARKGRAY"<<endl;
cout<<"9-LIGHTBLUE"<<endl;
cout<<"10-LIGHTGREEN"<<endl;
cout<<"11-LIGHTCYAN"<<endl;
cout<<"12-LIGHTRED"<<endl;
cout<<"13-LIGHTMAGENTA"<<endl;
cout<<"14-YELLOW"<<endl;
cout<<"15-WHITE"<<endl;
cin>>b;
textcolor(b);
setbkcolor(b);
clrscr();
once:gotoxy(12,22);
cout<<"Engine Start:"<<endl;
gotoxy(25,22);
op=getch();
cout<<op;
switch(op)
{
case 'a':gotoxy(x,y);
	 for(i=x;i>=f;i--)
	 {
	 textcolor(b);
	 gotoxy(i,y-1);
	 cout<<" |||| "<<endl;
	 gotoxy(i,y);
	 cout<<"<<<<<<-"<<endl;
	 gotoxy(i,y+1);
	 cout<<" |||| "<<endl;
	 sound(20);
	 delay(100);
	 clrscr();
	 x=f;
	 }
	 gotoxy(x,y-1);
	 cout<<" |||| "<<endl;
	 gotoxy(x,y);
	 cout<<"<<<<<<-"<<endl;
	 gotoxy(x,y+1);
	 cout<<" |||| "<<endl;
	 break;
case 'd':gotoxy(x,y);
	 for(i=x;i<=g;i++)
	 {
	 textcolor(b);
	 gotoxy(i,y-1);
	 cout<<" |||| "<<endl;
	 gotoxy(i,y);
	 cout<<"<<<<<<-"<<endl;
	 gotoxy(i,y+1);
	 cout<<" |||| "<<endl;
	 sound(20);
	 delay(100);
	 clrscr();
	 x=g;
	 }
	 gotoxy(x,y-1);
	 cout<<" |||| "<<endl;
	 gotoxy(x,y);
	 cout<<"<<<<<<-"<<endl;
	 gotoxy(x,y+1);
	 cout<<" |||| "<<endl;
	 break;
case 'w':gotoxy(x,y);
	 for(i=y;i>=e;i--)
	 {
	 textcolor(b);
	 gotoxy(x,i-1);
	 cout<<" |||| "<<endl;
	 gotoxy(x,i);
	 cout<<"<<<<<<-"<<endl;
	 gotoxy(x,i+1);
	 cout<<" |||| "<<endl;
	 sound(20);
	 delay(100);
	 clrscr();
	 y=e;
	 }
	 gotoxy(x,y-1);
	 cout<<" |||| "<<endl;
	 gotoxy(x,y);
	 cout<<"<<<<<<-"<<endl;
	 gotoxy(x,y+1);
	 cout<<" |||| "<<endl;
	 break;
case 's':gotoxy(x,y);
	 for(i=y;i<=h;i++)
	 {
	 textcolor(b);
	 gotoxy(x,i-1);
	 cout<<" |||| "<<endl;
	 gotoxy(x,i);
	 cout<<"<<<<<<-"<<endl;
	 gotoxy(x,i+1);
	 cout<<" |||| "<<endl;
	 sound(20);
	 delay(100);
	 clrscr();
	 y=h;
	 }
	 gotoxy(x,y-1);
	 cout<<" |||| "<<endl;
	 gotoxy(x,y);
	 cout<<"<<<<<<-"<<endl;
	 gotoxy(x,y+1);
	 cout<<" |||| "<<endl;
	 break;
	 clrscr();
	 }
	 if(op=='a')
	 {
	 f=f-3;
	 g=g-3;
	 goto once;
	 };
	 if(op=='d')
	 {
	 g=g+3;
	 f=f+3;
	 goto once;
	 };
	 if(op=='w')
	 {
	 e=e-3;
	 h=h-3;
	 goto once;
	 };
	 if(op=='s')
	 {
	 h=h+3;
	 e=e+3;
	 goto once;
	 };
	 if(op=='z')
	 {
	 exit(1);
	 }
	 }
if(n==3)
{
about();
features();
}
if(n==4)
{
file();
}
}
void load()
{
setbkcolor(WHITE);
for(int i=0;i<=360;i=i+2)
 {   circle(300,200,80);
 pieslice(300,200,0,i,80);
 setfillstyle(HATCH_FILL,BLUE);

 settextstyle(4,0,4);
 setcolor(BLUE);
 outtextxy(160,320,"Loading ......");

}
}
};
void file()
{
int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
 setbkcolor(BLUE);
ofstream fout;1
fout.open("AIRLINES.txt",ios::out);
{
cout<<"Enter the details"<<endl;
cout<<"Name:"<<endl;
fout<<"Name:"<<endl;
gets(Name);
cout<<"Account No:"<<endl;
fout<<"Account No:"<<endl;
gets(accountno);
cout<<"Bank:"<<endl;
fout<<"Bank:"<<endl;
gets(Bank);
}
fout.close();
}
 void main()
 {
  int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
  airplanes a;
 a.load();
 a.intro();
 a.choose();
 getch();
 }
void signup()
{
clrscr();
 int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
cout<<"Enter the details for Sign-Up:"<<endl;
cout<<endl;
cout<<"NAME:";
gets(name);
cout<<endl;
gotoxy(25,10);
cout<<"Username";
 bar(275,143,398,160);
 bar(275,175,398,192);
 gotoxy(25,12);
 cout<<"Password";
 gotoxy(36,10);
gets(username);
cout<<endl;
gotoxy(36,12);
for(int i=0;i<6;i++)
{
pass[i]=getch();
if(pass[i]=='.')
{
cout<<"Invalid Charecter"<<endl;
printf(".");
}
else
cout<<"*";
}
cout<<"Sign-up Complete"<<endl;
cleardevice();
createfile();
}
void createfile()
{
clrscr();
 int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
   setbkcolor(BLACK);
   textcolor(BLUE);
   gotoxy(7,1);
   cout<<"Airlines Entry System";
   gotoxy(65,1);
   cout<<"Welcome "<<name;
   gotoxy(7,3);
   q:cout<<"Date of Travel:";
   gotoxy(22,3);
   cin>>date;
   gotoxy(24,3);
   cout<<"/";
   gotoxy(25,3);
   cin>>mon;
   gotoxy(27,3);
   cout<<"/";
   gotoxy(28,3);
   cin>>ye;
   if(mon>12)
   {
   clrscr();
   goto q;
   }
   gotoxy(7,5);
   cout<<"Origin:";
   gotoxy(14,5);
   gets(origin);
   gotoxy(7,8);
   cout<<"Destination:";
   gotoxy(19,8);
   gets(dest);
   gotoxy(7,11);
 cout<<"SELECT AIRLINES:"<<endl;
    gotoxy(7,13);
   cout<<"a.Spicejet Airlines(SJ)"<<endl;
    gotoxy(7,15);
   cout<<"b.Indigo Airlines(IG)"<<endl;
    gotoxy(7,17);
   cout<<"c.Jet Airways(JA)"<<endl;
    gotoxy(7,19);
   cout<<"d.Air India(AI)"<<endl;
    gotoxy(7,21);
   cout<<"e.Go Air(GA)"<<endl;
   gotoxy(7,23);
   cout<<"Airlines:";
   gotoxy(16,23);
   gets(airlines);
   gotoxy(7,25);
   cout<<"option:";
   gotoxy(14,28);
   op=getch();
   switch(op)
   {
   case 'a':
   cout<<"Welcome To Spicejet Airlines";
   cout<<endl;
   displaymenu();
   transaction();
   break;
   case 'b':
   cout<<"Welcome To Indigo Airlines";
   cout<<endl;
   displaymenu();
   transaction();
   break;
   case 'c':
   cout<<"Welcome to Jet Airways";
   cout<<endl;
   displaymenu();
   transaction();
   break;
   case 'd':
   cout<<"Welcome to Air India";
   cout<<endl;
   displaymenu();
   transaction();
   break;
   case 'e':
   cout<<"Welcome to Go Air";
   cout<<endl;
   displaymenu();
   transaction();
   break;
   }
   }
 void displaymenu()
 {   int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
 clrscr();
 setbkcolor(BLUE);
 cout<<"\n";
 cout<<"\t"<<" Airline System"<<"\n";
 cout<<"\t"<<"======================="<<"\n";
 cout<<"\t"<<"\t"<<"MENU"<<"\n";
 cout<<"\t"<<"======================="<<"\n";
 cout<<"\t"<<"1.BOOKING"<<"\n";
 cout<<"\t"<<"2.SEAT"<<"\n";
 cout<<"\t"<<"3.RECORDS"<<"\n";
 cout<<"\t"<<"4.EXIT"<<"\n";

 cout<<"\t"<<"Enter your selection : ";
 cin>>selection;
 looping();
 }

 //looping()
 void looping()
 {
 switch(selection)
 {
 case 1:
 booking();
 break;
 case 2:
 seat();
 break;
 case 3:
 records();
 break;
 case 4:
 exit_();
 break;
 default:
 cout<<"\t"<<"Invalid selecion.Try again"<<"\n";
 }
 }

 //booking
 void booking()
 {
  int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
 for(i=0;i<1;i++)
 for(j=0;j<1;j++)
 {
 cout<<"\t"<<"Please enter seats number : ";
 cin>>choice[i][j].seats;
 fflush(stdin);

 if(choice[i][j].seats<=seatsAvailable)
 {
 cout<<"\t"<<"Please enter passenger name : ";
 cin>>choice[i][j].name;
 fflush(stdin);
 ticket();
 booking_ID++;
 }
 seatsAvailable=seatsAvailable-choice[i][j].seats;

 system("pause");
 system("cls");
 }

 if (seatsAvailable<0)
 {
 cout<<"\n";
 cout<<"\t"<<"SORRY, the flight is fully booked"<<"\n";
 cout<<"\t"<<"=================END============="<<"\n"<<"\n";
 }
 if(choice[i][j].seats>seatsAvailable)
 {
 cout<<"\n";
 cout<<"\t"<<"The flight leave"<<seatsAvailable;
 }
 }

 void ticket()
 {
 cout<<"\n"<<"\n";

 cout<<"\t"<<"-----------------AIRLINE BOOKING TICKET---------------------"<<"\n";
 cout<<"\t"<<"============================================================"<<"\n";
 cout<<"\t"<<" Booking ID :"<<booking_ID; cout<<"\t"<<" Filght No :"<<flight.flightNo<<endl;
 cout<<"\t"<<" Passenger :"<<name<<"\n";
 cout<<"\t"<<" Date :"<<date<<"\n";
 cout<<"\t"<<" Time :"<<flight.time<<"\n";
 cout<<"\t"<<" Gate :"<<flight.gate<<"\n";
 cout<<"\t"<<" Origin :"<<origin<<"\n";
 cout<<"\t"<<" Destination :"<<dest<<"\n";
 cout<<"\t"<<" Airlines :"<<airlines<<"\n";
 cout<<"\t"<<" Seats No. :"<<i+1<<j+65<<"\n";
 cout<<"\t"<<"============================================================"<<"\n";
 }

 //seat
 void seat()
 {
 cout<<" A B C D E"<<"\n";
 for(j=0;j<5;j++)
 {
 cout<<booking_ID;
 }
 for(i=0;i<4;i++)
 {
 cout<<"\n";
 cout<<i+1;
 }
 system("pause");
 system("cls");
 }

 void records() //For Staff to View the flight's records
 {
 cout<<"\t"<<"Please enter password: ";
 cin>>password; //111

 if (password==111)
 {
 system("cls");

 cout<<"\t"<<"===================================="<<"\n";
 cout<<"\t"<<"ALL FLIGHT RECORDS"<<"\n";
 cout<<"\t"<<"===================================="<<"\n";
 cout<<"\t"<<"Seats Available left : "<<seatsAvailable;

 ticket();
 system("pause");
 system("cls");
 }
 else
 {
 cout<<"\t"<<"Invalid password"<<"\n";
 system("pause");
 system("cls");
	      }
 }

 void exit_()
 {
 cout<<"\t"<<"Thank you for using this system"<<"\n";
 exit(1);
 }
 void transaction()
 {
  int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
 char accoutno[20];
 int cvv[5];
 char bankname[10];
 double year;
 int month;
 char ch;
 gotoxy(10,1);
 cout<<"Payment:Credit or Debit Card"<<endl;
	cout<<endl;
	gotoxy(10,3);
	cout<<"Bank Name:";
	gotoxy(20,3);
	gets(bankname);
	gotoxy(10,5);
	cout<<"Account No:";
	gotoxy(21,5);
	cin>>accountno;
	cout<<endl;
	gotoxy(10,8);
	cout<<"Card Number:";
	gotoxy(23,8);
	cin>>card1;
	gotoxy(27,8);
	cout<<"-";
	gotoxy(28,8);
	cin>>card2;
	gotoxy(32,8);
	cout<<"-";
	gotoxy(33,8);
	cin>>card3;
	gotoxy(37,8);
	cout<<"-";
	gotoxy(38,8);
	for(i=1;i<5;i++)
	{
	card4[i]=getch();
	if(card4[i]=='.')
	{
	cout<<"invalid";
	}
	else
	cout<<"x";
	}
	cout<<endl;
	gotoxy(10,11);
	cout<<"Time Validity of Card:";
	gotoxy(32,11);
	cin>>month;
	gotoxy(33,11);
	cout<<"/";
	gotoxy(34,11);
	cin>>year;
	gotoxy(10,14);
	cout<<"CVV number:";
	gotoxy(21,14);
	for(i=1;i<4;++i)
	{
	cvv[i]=getch();
	if(cvv[i]=='.')
	{
	cout<<"invalid"<<endl;
	}
	else
	cout<<"*";
	}
	clrscr();
	cleardevice();
	setbkcolor(RED);
	 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
 outtextxy(170,180,"PROCESSING WAIT..");
  for(i=0;i<250;++i)
   {
   delay(30);
   line(x,200,x,220);
   x++;
   }
   gotoxy(5,5);
   cout<<"Transaction Complete"<<endl;
   if(op=='a')
   {
   int b=4750;
   gotoxy(5,7);
   cout<<"Total Fare:Rs "<<b;
   services();
   }
   if(op=='b')
   {
   gotoxy(5,7);
   int b=5000;
   cout<<"Total Fare:Rs "<<b;
   services();
   }
   if(op=='c')
   {
   int b=5100;
   gotoxy(5,7);
   cout<<"Total Fare:Rs "<<b;
   services();
   }
   if(op=='d')
   {
   int b=5200;
   gotoxy(5,7);
   cout<<"Total Fare:Rs "<<b;
   services();
   }
   if(op=='e')
   {
   int b=5250;
   gotoxy(5,7);
   cout<<"Total Fare:Rs "<<b;
   services();
   }
   clrscr();
   gotoxy(5,9);
   cout<<"Final Ticket Details"<<endl;
   ticket();
   }
   void services()
   {
   clrscr();
    int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
 setbkcolor(BLUE);
   char c;
   gotoxy(5,5);
   cout<<"Additional Services Menu"<<endl;
   gotoxy(65,3);
   cout<<"Welcome "<<name;
   gotoxy(5,7);
   cout<<"Want to opt for additional services:";
   gotoxy(35,7);
   c=getch();
   }

   void about()
{
clrscr();

setbkcolor(WHITE);
setcolor(BLUE);
settextstyle(4,0,7);
outtextxy(10,20,"ABOUT US");
settextstyle(3,0,2);
outtextxy(10,90,"THIS PAGE IS TO INFORM YOU ABOUT OUR WEBSITE");
settextstyle(6,0,1);
setcolor(GREEN);
outtextxy(20,150,"all of us at airlines wish you a very happy and safe journey");
outtextxy(20,180,"our website provides you with a very easy");
outtextxy(20,210,"and simple way for online reservation");
outtextxy(20,240,"airlines is the most simple and fun site for online booking");
outtextxy(20,270,"our airlines have many features which are listed on the next page");
setcolor(RED+BLINK);
outtextxy(170,320,"CLICK ANY BUTTON");
getch();
}
void features()
{
clrscr();

setbkcolor(WHITE);
setcolor(GREEN);
settextstyle(4,0,7);
outtextxy(10,20,"FEATURES");
settextstyle(3,0,2);
outtextxy(10,90,"WHILE ON THE WAY OF YOUR LUXOURIOUS TRIP YOU WILL BE PROVIDED WITH THE FOLLOWING THINGS");
settextstyle(6,0,4);
setcolor(BROWN);
outtextxy(20,150,"* full course meals");
outtextxy(20,200,"* free wifi");
outtextxy(20,250,"* tv");
outtextxy(20,300,"* alcoholic and non-alcoholic drinks");
outtextxy(20,350,"* fun and safety assured journey");
setcolor(BLUE);
settextstyle(7,0,3);
outtextxy(40,400,"WISHING YOU A VERY HAPPY JOURNEY");
}
//End Of Program.//