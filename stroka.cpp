#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
class stroka
{
public:
int menu(void)
{
int vyb;
clrscr();
cout << "1 - Vvesti 1 stroku\n";
cout << "2 - Vvesti 2 stroku\n";
cout << "3 - Vvesti 3 stroku\n";
cout << "4 - Vyvesti 1 stroku\n";
cout << "5 - Perevernut 1 stroku\n";
cout << "6 - Zamenit stroku 2 na stroku 3 v stroke 1\n";
cout << "7 - Dobavka stroki 3 k stroke 1\n";
cout << "0 - Vyxod\n";
cout << "\nVash vybor:";cin >>vyb;
clrscr();
return vyb;
}
void vvod(char *st)
{
gets(st);
}
void vyvod(char *st)
{
puts(st);
}
void pauza(void)
{
cout << "\n\nPress any key...";
getch();
}
void perevorot(char *st)
{
char ob,*i,*j;
for(i=st,j=st+(strlen(st)-1);i<st+(strlen(st)/2);i++,j--)
{ob=*i;*i=*j;*j=ob;}
}
void dobavka(char *st1,char *st2)
{
char *i,*j;
for(i=st1+strlen(st1),j=st2;j<st2+strlen(st2);*i++=*j++);
*i++='\0';
}

void zamena(char *st1, char *st2, char *st3)
{
char *j,*u,*k;
int i=0;
u=strstr(st1,st2);
if (*st2!=*st3)
while(u)
{
k=strchr(st1,'\0');
if (strlen(st2)>strlen(st3))
 for(j=u;j!=k;*j=*(j+((strlen(st2)-strlen(st3)))),j++);
if (strlen(st2)<strlen(st3))
 for(j=k;j!=u;*(k+((strlen(st3)-strlen(st2))-i))=*j,j--,i++);
strncpy(u,st3,strlen(st3));
k=NULL;i=0;
u=strstr(st1,st2);
}
}
};
main()
{
clrscr();
stroka str;
int vyb;
char s1[100],s2[100],s3[100];
clrscr();
cout << "Vvedite 1 stroku:\n";
str.vvod(s1);
cout << "\nVvedite 2 stroku:\n";
str.vvod(s2);
cout << "\nVvedite 3 stroku:\n";
str.vvod(s3);
do
{
vyb=str.menu();
switch(vyb)
{
case 1:cout << "Vvedite 1 stroku:\n";str.vvod(s1);str.pauza();break;
case 2:cout << "Vvedite 2 stroku:\n";str.vvod(s2);str.pauza();break;
case 3:cout << "Vvedite 3 stroku:\n";str.vvod(s3);str.pauza();break;
case 4:cout << "1 stroka:\n";str.vyvod(s1);str.pauza();break;
case 5:cout << "1 stroka DO:\n";str.vyvod(s1);str.perevorot(s1);cout << "\n1 stroka POSLE:\n";str.vyvod(s1);str.pauza();break;
case 6:cout << "1 stroka DO:\n";str.vyvod(s1);str.zamena(s1,s2,s3);cout << "\n1 stroka POSLE:\n";str.vyvod(s1);str.pauza();break;
case 7:cout << "1 stroka DO:\n";str.vyvod(s1);str.dobavka(s1,s3);cout << "\n1 stroka POSLE:\n";str.vyvod(s1);str.pauza();break;
/*case 8:break;
case 9:break;*/
Default: break;
}
}
while (vyb!=0);

}
