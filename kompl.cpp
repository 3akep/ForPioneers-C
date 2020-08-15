#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
class komplex
{
public:
float komp[4];
komplex operator+(komplex);
komplex operator-(komplex);
komplex operator*(komplex);
komplex operator/(komplex);
komplex operator=(komplex);
void otvet(int);
int menu(void);
void vvod(void);
void isx(int);
};
void komplex::vvod()
{
clrscr();
cout <<"Vvedite A i B dly vyrageniy A+Bi\n";
cin >> komp[1]>>komp[2];
}
komplex komplex::operator+(komplex t)
{
komplex temp;
temp.komp[1]=komp[1]+t.komp[1];
temp.komp[2]=komp[2]+t.komp[2];
return temp;
}
komplex komplex::operator=(komplex t)
{
komp[1]=t.komp[1];
komp[2]=t.komp[2];
return *this;
}
void komplex::otvet(int i)
{
char *str;
switch(i)
{
case 1: str="Resultat slogenia"; break;
case 2: str="Resultat vychitaniy"; break;
case 3: str="Resultat umnogeniy"; break;
case 4: str="Resultat deleniy"; break;
Default: break;
}
if (komp[2]>=0)
printf("%s: (%3.2f+%3.2fi)\n",str,komp[1],komp[2]);
else printf("%s: (%3.2f%3.2fi)\n",str,komp[1],komp[2]);
cout<<"\n\n\nPress any key...";
getch();
clrscr();
}
komplex komplex::operator-(komplex t)
{
komplex temp;
temp.komp[1]=komp[1]-t.komp[1];
temp.komp[2]=komp[2]-t.komp[2];
return temp;
}
komplex komplex::operator*(komplex t)
{
komplex temp;
temp.komp[1]=(komp[1]*t.komp[1]-komp[2]*t.komp[2]);
temp.komp[2]=(komp[1]*t.komp[2]+komp[2]*t.komp[1]);
return temp;
}
komplex komplex::operator/(komplex t)
{
komplex temp;
komp[3]=(t.komp[1]*t.komp[1]+t.komp[2]*t.komp[2]);
temp.komp[1]=1.0*(komp[1]*t.komp[1]+komp[2]*t.komp[2])/komp[3];
temp.komp[2]=1.0*(komp[2]*t.komp[1]-komp[1]*t.komp[2])/komp[3];
return temp;
}
int komplex::menu(void)
{
int vy;
clrscr();
cout<<"Glavnoe menu\n";
cout<<"=====================\n";
cout<<"1 - Slogenie\n";
cout<<"2 - Vychitanie\n";
cout<<"3 - Umnogenie\n";
cout<<"4 - Delenie\n";
cout<<"5 - Vvod dannyx\n";
cout<<"0 - Exit\n";
cout<<"\nVash vybor: ";cin>>vy;
return vy;
}
void komplex::isx(int i)
{
if (i==1) clrscr();
if (komp[2]>=0)
printf("%d chislo: (%3.2f+%3.2fi)\n",i,komp[1],komp[2]);
else printf("%d chislo: (%3.2f%3.2fi)\n",i,komp[1],komp[2]);
}
main()
{
komplex a,b,c;
int vyb;
clrscr();
a.vvod();
b.vvod();
do
{
vyb=a.menu();
switch(vyb)
{
case 1: c=a+b;a.isx(1);b.isx(2);c.otvet(1);break;
case 2: c=a-b;a.isx(1);b.isx(2);c.otvet(2);break;
case 3: c=a*b;a.isx(1);b.isx(2);c.otvet(3);break;
case 4: c=a/b;a.isx(1);b.isx(2);c.otvet(4);break;
case 5: a.vvod();b.vvod();break;
Default: break;
}
}
while (vyb!=0);
}


