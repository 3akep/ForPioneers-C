#include <iostream.h>
#include <stdlib.h>
#include <conio.h>
#include <dos.h>
#include <stdio.h>
class matrix
{
 public:
    int kstr,ksst,*n;
    int menu(void)
    {
    int vybor;
    clrscr();
    cout << "Glavnoe menu programmy:\n";
    cout << "1 - Vvyvesty matrix\n";
    cout << "2 - Nayti maximum i minimum\n";
    cout << "3 - Vozvesti v kvadrat kagdiy iz elementov matrix\n";
    cout << "4 - Udalenie zadannoy stroki v matrix\n";
    cout << "5 - Naity summu vsex elementov\n";
    cout << "6 - Zapolnit matrix zanovo\n";
    cout << "7 - Vyxod iz programmy\n";
    cout << "Vash vybor: "; cin >> vybor;
    clrscr();
    return vybor;
    }
    void pauza(void)
    {
    cout << "\n\nDly vozvrata v glavnoe menu nagmite lubyu klavishu...";
    getch();
    }
    void kol(void)
   {
    cout << "Vvedite kolichestvo strok i stolbcov:";
    cin >> kstr >> ksst;
   }
    void zapoln(int *mas)
   {
    int max,min;
    randomize();
    cout << "Vvedite X i Y dly vyrageniy RANDOM(X)-Y: ";
    cin >> max >> min;
    cout << "Zapolnenie massiva: ";
    for(n=mas;n<mas+kstr*ksst;*n++=random(max)-min){
    cout << "▓"; }
   }
 void about(void)
 {
 clrscr();
 cout << "Spasibo za ispolzovanie dannoy programmy!\n";
 }
  void vyvod(int *mas)
   {
   int k=0;
   for(n=mas;n<mas+kstr*ksst;k++,printf("%5d ",*n++))
   if ((k%ksst)==0) cout << "\n";
   }
  int summa(int *mas)
  {
   int s=0;
   for(n=mas;n<mas+kstr*ksst;s+=*n++);
   return s;
  }
 int maxmin(int *mas)
  {
  int max=-32768,min=32767,*maxx,*minn,ot;
  for(n=mas;n<mas+kstr*ksst;n++){
  if (*n>max){ max=*n;maxx=n;}
  if (*n<min){ min=*n;minn=n;}
  }
  cout << "\nMax = " << max << "\nMin = " << min;
  cout << "\nPomenyt mestami posledniy maximum s poslednim minimum)?(1-Da,0-Net)";
  cin >> ot;
  if (ot==1){mas=maxx;*mas=min;mas=minn;*mas=max;}
  return ot;
  }
 void kvadrat(int *mas)
 {
 cout << "\nVozvedenie v kvadrat kagdogo elementa:";
 for(n=mas;n<mas+kstr*ksst;*n++=(*n)*(*n));
 }
 void del_stroka(int *mas)
 {
 int ns=0;
 cout << "\nVvedite nomer stroki dly ee udaleniy:";
 cin >> ns;
 for(n=mas+((ns-1)*ksst);n<mas+kstr*ksst;*n++=*(n+ksst));
 kstr--;
 }
};

void main()
{
 matrix a;
 int p[100][100],vyb;
 clrscr();
 a.kol();
 a.zapoln(*p);
 do
 {
 vyb=a.menu();
 switch(vyb)
 {
 case 1: a.vyvod(*p);a.pauza();break;
 case 2: a.vyvod(*p);if (a.maxmin(*p)==1) a.vyvod(*p);a.pauza();break;
 case 3: a.vyvod(*p);a.kvadrat(*p);a.vyvod(*p);a.pauza();break;
 case 4: a.vyvod(*p);a.del_stroka(*p);a.vyvod(*p);a.pauza();break;
 case 5: a.vyvod(*p);cout << "\nSumma elementov = " << a.summa(*p);a.pauza();break;
 case 6: a.zapoln(*p);a.vyvod(*p);a.pauza();break;
 Default: break;
 }
 }
 while (vyb!=7);
 a.about();
 return;
}
