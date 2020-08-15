#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
class mno
{
public:
int mn[100],n;
mno operator*(mno);
mno operator+(mno);
mno operator-(mno);
mno operator=(mno);
void poisk(void);
void infa(void);
void show(void);
void assign(void);
int menu(void);
};
mno mno::operator*(mno t)
{
clrscr();
mno temp;
int i,j,k;
gotoxy(1,1);
textcolor(GREEN);
for(i=1;i<80;i++)cprintf("─");
gotoxy(1,3);
for(i=1;i<80;i++)cprintf("─");
gotoxy(25,2);
textcolor(10);
cprintf("<<<<Vychislenie proizvedeniy>>>>");
gotoxy(1,4);
textcolor(WHITE);
temp.n=0;
//Naxogdenie elementov, kotorye est i v 1 i vo 2
for(i=0;i<n;i++)
 for(j=0;j<t.n;j++)
  if(mn[i]==t.mn[j])temp.mn[temp.n++]=mn[i];
//Udalenie povtoreniy
for(i=0;i<temp.n;i++)
 for(j=i+1;j<temp.n;j++)
  if(temp.mn[i]==temp.mn[j]){
   for(k=j;k<temp.n;k++)temp.mn[k]=temp.mn[k+1];temp.n--;}
cout<<"1 mnogestvo:";for(i=0;i<n;i++)printf("%4d",mn[i]);
cout<<"\n2 mnogestvo:";for(i=0;i<t.n;i++)printf("%4d",t.mn[i]);
cout<<"\nResultat:";for(i=0;i<temp.n;i++)printf("%4d",temp.mn[i]);
cout<<"\n\n\nDly prodolgeniy nagmite lubyu klavishu...";
getch();
return temp;
}
mno mno::operator+(mno t)
{
clrscr();
mno temp;
int i,j,k;
gotoxy(1,1);
textcolor(GREEN);
for(i=1;i<80;i++)cprintf("─");
gotoxy(1,3);
for(i=1;i<80;i++)cprintf("─");
gotoxy(25,2);
textcolor(10);
cprintf("<<<<Resultat summirovaniy>>>>");
gotoxy(1,4);
textcolor(WHITE);
temp.n=0;
for(i=0;i<n;i++)temp.mn[temp.n++]=mn[i];
for(i=0;i<t.n;i++)temp.mn[temp.n++]=t.mn[i];
//Udalenie povtoreniy
for(i=0;i<temp.n;i++)
 for(j=i+1;j<temp.n;j++)
  if(temp.mn[i]==temp.mn[j]){
   for(k=j;k<temp.n;k++)temp.mn[k]=temp.mn[k+1];temp.n--;}
   cout<<"1 mnogestvo:";for(i=0;i<n;i++)printf("%3d",mn[i]);
cout<<"\n2 mnogestvo:";for(i=0;i<t.n;i++)printf("%3d",t.mn[i]);
cout<<"\nResultat:";for(i=0;i<temp.n;i++)printf("%3d",temp.mn[i]);
cout<<"\n\n\nDly prodolgeniy nagmite lubyu klavishu...";
getch();
return temp;
}
mno mno::operator-(mno t)
{
clrscr();
mno temp,mem;
int i,j,k;
gotoxy(1,1);
textcolor(GREEN);
for(i=1;i<80;i++)cprintf("─");
gotoxy(1,3);
for(i=1;i<80;i++)cprintf("─");
gotoxy(20,2);
textcolor(10);
cprintf("<<<<Resultat naxogdeniy raznosti>>>>");
gotoxy(1,4);
textcolor(WHITE);
temp.n=n;mem.n=0;
for(i=0;i<temp.n;i++)temp.mn[i]=mn[i];
//Kotorye est i v 1 i vo 2
for(i=0;i<n;i++)
 for(j=0;j<t.n;j++)
  if(mn[i]==t.mn[j])mem.mn[mem.n++]=mn[i];
//1 bez MEM
for(i=0;i<temp.n;i++)
 for(j=0;j<mem.n;j++)
  if(temp.mn[i]==mem.mn[j]){
   for(k=i;k<temp.n;k++)temp.mn[k]=temp.mn[k+1];temp.n--;}
//Udalenie povtoreniy
for(i=0;i<temp.n;i++)
 for(j=i+1;j<temp.n;j++)
  if(temp.mn[i]==temp.mn[j]){
   for(k=j;k<temp.n;k++)temp.mn[k]=temp.mn[k+1];temp.n--;}
   cout<<"1 mnogestvo:";for(i=0;i<n;i++)printf("%3d",mn[i]);
cout<<"\n2 mnogestvo:";for(i=0;i<t.n;i++)printf("%3d",t.mn[i]);
cout<<"\nResultat:";for(i=0;i<temp.n;i++)printf("%3d",temp.mn[i]);
cout<<"\n\n\nDly prodolgeniy nagmite lubyu klavishu...";
getch();
return temp;
}
void mno::poisk(void)
{
int i;
for(i=0;i<n;i++)
if(mn[i]==2)
{
printf("\nVxodit!");
break;
}
}
mno mno::operator=(mno t)
{
int i;
n=t.n;
for(i=0;i<t.n;i++)mn[i]=t.mn[i];
return *this;
}

void mno::assign(void)
{
int i;
randomize();
clrscr();
gotoxy(1,1);
textcolor(GREEN);
for(i=1;i<80;i++)cprintf("─");
gotoxy(1,3);
for(i=1;i<80;i++)cprintf("─");
gotoxy(27,2);
textcolor(10);
cprintf("<<<<Sozdanie mnogestva>>>>");
gotoxy(1,4);
textcolor(WHITE);
cout << "Vvedite kol-vo elementov mnogestva: ";
cin >> n;
cout<<"\Mnogestvo: ";
for(i=0;i<n;i++)mn[i]=random(20)-10;
for(i=0;i<n;i++)printf("%4d",mn[i]);
cout << "\n\n\nNagmite lubyu klavishu dly prodolgeniy...";
getch();
}
int mno::menu(void)
{
int v,k;
clrscr();
textcolor(RED);
gotoxy(30,5);
	       cprintf("╔═════════════════╗\n");
gotoxy(30,6);
	       cprintf("║                 ║\n");
gotoxy(13,7);
cprintf("┌────────────────╨─────────────────╨────────────────┐\n");
for(k=8;k<19;k++){
gotoxy(13,k);
cprintf("│                                                   │\n");}
gotoxy(13,19);
cprintf("├────────────────┐                                  │\n");
gotoxy(13,20);
cprintf("│ Vybor:         │                                  │\n");
gotoxy(13,21);
cprintf("└────────────────┴──────────────────────────────────┘\n");
gotoxy(33,6);
textcolor(YELLOW);
cprintf("Program's Menu");
gotoxy(17,8);
textcolor(GREEN);
cprintf("1.");
textcolor(WHITE);
cprintf(" Izmenit 1 mnogestvo");
gotoxy(17,9);
textcolor(GREEN);
cprintf("2.");
textcolor(WHITE);
cprintf(" Izmenit 2 mnogestvo");
gotoxy(17,10);
textcolor(GREEN);
cprintf("3.");
textcolor(WHITE);
cprintf(" Summa 2x mnogestva");
gotoxy(17,11);
textcolor(GREEN);
cprintf("4.");
textcolor(WHITE);
cprintf(" Raznost 1 i 2 mnogestva");
gotoxy(17,12);
textcolor(GREEN);
cprintf("5.");
textcolor(WHITE);
cprintf(" Raznost 2 i 1 mnogestva");
gotoxy(17,13);
textcolor(GREEN);
cprintf("6.");
textcolor(WHITE);
cprintf(" Proizvedenie 2x mnogestv");
gotoxy(17,14);
textcolor(GREEN);
cprintf("7.");
textcolor(WHITE);
cprintf(" Poisk zadannogo elementa v 1 mnogestve");
gotoxy(17,15);
textcolor(GREEN);
cprintf("8.");
textcolor(WHITE);
cprintf(" Poisk zadannogo elementa vo 2 mnogestve");
gotoxy(17,16);
textcolor(GREEN);
cprintf("9.");
textcolor(WHITE);
cprintf(" Informacia o 1 i 2 mnogestve");
gotoxy(17,17);
textcolor(GREEN);
cprintf("0.");
textcolor(WHITE);
cprintf(" Vyxod iz programmy");
gotoxy(22,20);
cin>>v;
return v;
}
void mno::infa(void)
{
clrscr();
int i,k1,k2,k3;
k1=0;k2=0;k3=0;
gotoxy(1,1);
textcolor(GREEN);
for(i=1;i<80;i++)cprintf("─");
gotoxy(1,3);
for(i=1;i<80;i++)cprintf("─");
gotoxy(33,2);
textcolor(10);
cprintf("<<<<Informacia>>>>");
gotoxy(1,4);
textcolor(WHITE);
printf("\nMnogestvo");
if(n!=0)
for(i=0;i<n;i++){
printf("%4d",mn[i]);
if(mn[i]<0)k1++;else k2++;
if(mn[i]==0)k3++;}
else printf(" pustoe!\n");
if(k3!=0)printf("\nKolichestvo elementov ravnyx 0: %4d",k3);
if(k1!=0)printf("\nKolichestvo elementov menshe 0: %4d",k1);
if(k2!=0)printf("\nKolichestvo elementov bolshe 0: %4d",k2-k3);
cout<<"\n\n\nDly prodolgeniy nagmite lubyu klavishu...";
getch();
}
main(void)
{
mno a,b,c;
int i,v;
clrscr();
a.assign();
b.assign();
do{
v=a.menu();
switch(v)
{
case 1: a.assign(); break;
case 2: b.assign(); break;
case 3: c=a+b; break;
case 4: c=a-b; break;
case 5: c=b-a; break;
case 6: c=a*b; break;
case 7: a.poisk(); break;
case 8: b.poisk(); break;
case 9: a.infa(); b.infa(); break;
Default: break;
}}while (v!=0);
}
