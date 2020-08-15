#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
main()
{
char s[80],res[80]="";
int i,s1,s2,e,fl,n;
float a,p;
clrscr();
cout<<"Isxodnoe chislo:";
cin>>s;
cout<<"Isxodnay sistema schisleniy:";
cin>>s1;
cout<<"V kakyu perevesti systemu:";
cin>>s2;
cout<<"Kol-vo znakov posle zapytoy:";
cin>>e;
for(i=0,p=1.0/s1;s[i]!='.';i++,p*=s1);
for(i=0,a=0;s[i];i++)
if (s[i]!='.')
{if (s[i]<='9')a+=(s[i]-48)*p;
else a+=(s[i]-87)*p;
p/=s1;n=i;}
for(i=0,p=1.0/s2;p*s2<=a;p*=s2);
if (p<1.0)p=1.0;
for(i=0,fl=0;e>0;i++)
{if (fl==1)e--;
if (floor(a/p)<=9.0)res[i]=floor(a/p)+48;
else res[i]=floor(a/p)+87;
a-=floor(a/p)*p;
p/=s2;
if ((p*s2<=1.001)&&(p*s2>=0.999))
{i++;
res[i]='.';
fl=1;}
}
cout<<"Result:"<<res;
getch();
}
