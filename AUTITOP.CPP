#include <iostream.h>
#include <conio.h>
#include <dos.h>
#include <stdio.h>
#include <process.h>
#include <stdlib.h>
#include "INYFI.H"

int n,r,s,GAMEOVER=0,vidas=3,spawn=1,diley=60,z=0;
char tecla;

class AUTITO
{
 int x,y,vida;
 public:
 AUTITO (int _x,int _y,int _vida);
 int pintar ();
 int chocar ();
 int andar ();
 int bajar ();
 int desaparecer ();
 int BajarDoble ();
 int DesaparecerDoble ();

};
AUTITO::AUTITO (int _x,int _y,int _vida)
{
 x=_x;
 y=_y;
 vida=_vida;
}

int AUTITO::pintar ()
{
 gotoxy (x,y);
 textcolor (15);

 char linea_01[]={' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',0};
 char linea_02[]={' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',0};
 char linea_03[]={'л','л','л','л','л','л','л','л','л','л','л',0};
 char linea_04[]={'л','л','л','л','л','л','л','л','л','л','л',0};
 char linea_05[]={' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',0};
 char linea_06[]={' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',0};
 char linea_07[]={' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',0};
 char linea_08[]={' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',0};
 char linea_09[]={' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',0};
 char linea_10[]={'л','л','л','л','л','л','л','л','л','л','л',0};
 char linea_11[]={'л','л','л','л','л','л','л','л','л','л','л',0};

 puts (linea_01);
 gotoxy (x,(y+1));
 puts (linea_02);
 gotoxy (x,(y+2));
 puts (linea_03);
 gotoxy (x,(y+3));
 puts (linea_04);
 gotoxy (x,(y+4));
 puts (linea_05);
 gotoxy (x,(y+5));
 puts (linea_06);
 gotoxy (x,(y+6));
 puts (linea_07);
 gotoxy (x,(y+7));
 puts (linea_08);
 gotoxy (x,(y+8));
 puts (linea_09);
 gotoxy (x,(y+9));
 puts (linea_10);
 gotoxy (x,(y+10));
 puts (linea_11);

}

int AUTITO::chocar ()
{
 if (z==0)
 {
  if (x==r)
  {
   if (vidas!=0)
   {
    clrscr ();
    gotoxy (30,25);
    cprintf ("CHOCASTE BOLUDO");
   }
   delay (300);
   spawn=1;
   vidas--;
   n=0;
   clrscr ();
  }
 }
 else
 {
  if ((x==r) || (x==(r+14)))
  {
   if (vidas!=0)
   {
    clrscr ();
    gotoxy (30,25);
    cprintf ("CHOCASTE BOLUDO");
   }
   delay (300);
   spawn=1;
   vidas--;
   n=0;
   clrscr ();
  }
 }
}

int AUTITO::andar ()
{

 if ((tecla=='a' || tecla=='A') && (x>=19))
 {
  x--;
  if (x<35)
   x=21;
  else if (x>=35)
   x=35;
 }

 if ((tecla=='d' || tecla=='D') && (x<=51))
 {
  x++;
  if (x<35)
   x=35;
  else if (x>=35)
   x=49;
 }
}

int AUTITO::bajar ()
{
 textcolor (15);

 char linea_01[]={' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',0};
 char linea_02[]={' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',0};
 char linea_03[]={'л','л','л','л','л','л','л','л','л','л','л',0};
 char linea_04[]={'л','л','л','л','л','л','л','л','л','л','л',0};
 char linea_05[]={' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',0};
 char linea_06[]={' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',0};
 char linea_07[]={' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',0};
 char linea_08[]={' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',0};
 char linea_09[]={' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',0};
 char linea_10[]={'л','л','л','л','л','л','л','л','л','л','л',0};
 char linea_11[]={'л','л','л','л','л','л','л','л','л','л','л',0};

 if (n==0)
 {
  textcolor (18);
  gotoxy (63,1);
  cprintf ("л\n\b");
  textcolor (15);
  gotoxy (r,1);
  puts (linea_11);
  n++;
  delay (diley);
 }
 else if (n==1)
 {
  gotoxy (r,1);
  puts (linea_10);
  gotoxy (r,2);
  puts (linea_11);
  n++;
  delay (diley);

  gotoxy (r,1);
  cprintf ("           \n\b");

 }
 else if (n==2)
 {
  gotoxy (r,1);
  puts (linea_09);
  gotoxy (r,2);
  puts (linea_10);
  gotoxy (r,3);
  puts (linea_11);
  n++;
  delay (diley);

  for (s=1;s<(n+2);s++)
  {
   gotoxy (r,s);
   cprintf ("           \n\b");

  }

 }
 else if (n==3)
 {
  gotoxy (r,1);
  puts (linea_08);
  gotoxy (r,2);
  puts (linea_09);
  gotoxy (r,3);
  puts (linea_10);
  gotoxy (r,4);
  puts (linea_11);
  n++;
  delay (diley);

  for (s=1;s<(n+2);s++)
  {
   gotoxy (r,s);
   cprintf ("           \n\b");

  }

 }
 else if (n==4)
 {
  gotoxy (r,1);
  puts (linea_07);
  gotoxy (r,2);
  puts (linea_08);
  gotoxy (r,3);
  puts (linea_09);
  gotoxy (r,4);
  puts (linea_10);
  gotoxy (r,5);
  puts (linea_11);
  n++;
  delay (diley);

  for (s=1;s<(n+2);s++)
  {
   gotoxy (r,s);
   cprintf ("           \n\b");

  }

 }
 else if (n==5)
 {
  gotoxy (r,1);
  puts (linea_06);
  gotoxy (r,2);
  puts (linea_07);
  gotoxy (r,3);
  puts (linea_08);
  gotoxy (r,4);
  puts (linea_09);
  gotoxy (r,5);
  puts (linea_10);
  gotoxy (r,6);
  puts (linea_11);
  n++;
  delay (diley);

  gotoxy (s,1);
  for (s=1;s<(n+2);s++)
  {
   gotoxy (r,s);
   cprintf ("           \n\b");

  }

 }
 else if (n==6)
 {
  gotoxy (r,1);
  puts (linea_05);
  gotoxy (r,2);
  puts (linea_06);
  gotoxy (r,3);
  puts (linea_07);
  gotoxy (r,4);
  puts (linea_08);
  gotoxy (r,5);
  puts (linea_09);
  gotoxy (r,6);
  puts (linea_10);
  gotoxy (r,7);
  puts (linea_11);
  n++;
  delay (diley);

  for (s=1;s<(n+2);s++)
  {
   gotoxy (r,s);
   cprintf ("           \n\b");

  }

 }
 else if (n==7)
 {
  gotoxy (r,1);
  puts (linea_04);
  gotoxy (r,2);
  puts (linea_05);
  gotoxy (r,3);
  puts (linea_06);
  gotoxy (r,4);
  puts (linea_07);
  gotoxy (r,5);
  puts (linea_08);
  gotoxy (r,6);
  puts (linea_09);
  gotoxy (r,7);
  puts (linea_10);
  gotoxy (r,8);
  puts (linea_11);
  n++;
  delay (diley);

  for (s=1;s<(n+2);s++)
  {
   gotoxy (r,s);
   cprintf ("           \n\b");

  }

 }
 else if (n==8)
 {
  gotoxy (r,1);
  puts (linea_03);
  gotoxy (r,2);
  puts (linea_04);
  gotoxy (r,3);
  puts (linea_05);
  gotoxy (r,4);
  puts (linea_06);
  gotoxy (r,5);
  puts (linea_07);
  gotoxy (r,6);
  puts (linea_08);
  gotoxy (r,7);
  puts (linea_09);
  gotoxy (r,8);
  puts (linea_10);
  gotoxy (r,9);
  puts (linea_11);
  n++;
  delay (diley);

  for (s=1;s<(n+2);s++)
  {
   gotoxy (r,s);
   cprintf ("           \n\b");

  }

 }
 else if (n==9)
 {
  gotoxy (r,1);
  puts (linea_02);
  gotoxy (r,2);
  puts (linea_03);
  gotoxy (r,3);
  puts (linea_04);
  gotoxy (r,4);
  puts (linea_05);
  gotoxy (r,5);
  puts (linea_06);
  gotoxy (r,6);
  puts (linea_07);
  gotoxy (r,7);
  puts (linea_08);
  gotoxy (r,8);
  puts (linea_09);
  gotoxy (r,9);
  puts (linea_10);
  gotoxy (r,10);
  puts (linea_11);
  n++;
  delay (diley);

  for (s=1;s<(n+2);s++)
  {
   gotoxy (r,s);
   cprintf ("           \n\b");

  }

 }
 else if (n==10)
 {
  n++;
 }

 else
 {
  gotoxy (r,(n-10));
  puts (linea_01);
  gotoxy (r,(n-9));
  puts (linea_02);
  gotoxy (r,(n-8));
  puts (linea_03);
  gotoxy (r,(n-7));
  puts (linea_04);
  gotoxy (r,(n-6));
  puts (linea_05);
  gotoxy (r,(n-5));
  puts (linea_06);
  gotoxy (r,(n-4));
  puts (linea_07);
  gotoxy (r,(n-3));
  puts (linea_08);
  gotoxy (r,(n-2));
  puts (linea_09);
  gotoxy (r,(n-1));
  puts (linea_10);
  gotoxy (r,(n-0));
  puts (linea_11);
  delay (diley);

  gotoxy (r,(n-10));
  cprintf ("          \n\b");
  gotoxy (r,(n-8));
  cprintf ("          \n\b");
  gotoxy (r,(n-1));
  cprintf ("          \n\b");

  n++;

 }

}

int AUTITO::BajarDoble ()
{
 textcolor (15);

 char linea_01[]={' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',0};
 char linea_02[]={' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',0};
 char linea_03[]={'л','л','л','л','л','л','л','л','л','л','л',' ',' ',' ','л','л','л','л','л','л','л','л','л','л','л',0};
 char linea_04[]={'л','л','л','л','л','л','л','л','л','л','л',' ',' ',' ','л','л','л','л','л','л','л','л','л','л','л',0};
 char linea_05[]={' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',0};
 char linea_06[]={' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',0};
 char linea_07[]={' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',0};
 char linea_08[]={' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',0};
 char linea_09[]={' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',0};
 char linea_10[]={'л','л','л','л','л','л','л','л','л','л','л',' ',' ',' ','л','л','л','л','л','л','л','л','л','л','л',0};
 char linea_11[]={'л','л','л','л','л','л','л','л','л','л','л',' ',' ',' ','л','л','л','л','л','л','л','л','л','л','л',0};

 if (n==0)
 {
  textcolor (18);
  gotoxy (63,1);
  cprintf ("л\n\b");
  textcolor (15);
  gotoxy (r,1);
  puts (linea_11);
  n++;
  delay (diley);
 }
 else if (n==1)
 {
  gotoxy (r,1);
  puts (linea_10);
  gotoxy (r,2);
  puts (linea_11);
  n++;
  delay (diley);
  gotoxy (r,1);
  cprintf ("                         \n\b");

 }
 else if (n==2)
 {
  gotoxy (r,1);
  puts (linea_09);
  gotoxy (r,2);
  puts (linea_10);
  gotoxy (r,3);
  puts (linea_11);
  n++;
  delay (diley);

  for (s=1;s<(n+2);s++)
  {
   gotoxy (r,s);
   cprintf ("                         \n\b");

  }

 }
 else if (n==3)
 {
  gotoxy (r,1);
  puts (linea_08);
  gotoxy (r,2);
  puts (linea_09);
  gotoxy (r,3);
  puts (linea_10);
  gotoxy (r,4);
  puts (linea_11);
  n++;
  delay (diley);

  for (s=1;s<(n+2);s++)
  {
   gotoxy (r,s);
   cprintf ("                         \n\b");

  }

 }
 else if (n==4)
 {
  gotoxy (r,1);
  puts (linea_07);
  gotoxy (r,2);
  puts (linea_08);
  gotoxy (r,3);
  puts (linea_09);
  gotoxy (r,4);
  puts (linea_10);
  gotoxy (r,5);
  puts (linea_11);
  n++;
  delay (diley);

  for (s=1;s<(n+2);s++)
  {
   gotoxy (r,s);
   cprintf ("                         \n\b");

  }

 }
 else if (n==5)
 {
  gotoxy (r,1);
  puts (linea_06);
  gotoxy (r,2);
  puts (linea_07);
  gotoxy (r,3);
  puts (linea_08);
  gotoxy (r,4);
  puts (linea_09);
  gotoxy (r,5);
  puts (linea_10);
  gotoxy (r,6);
  puts (linea_11);
  n++;
  delay (diley);

  gotoxy (s,1);
  for (s=1;s<(n+2);s++)
  {
   gotoxy (r,s);
   cprintf ("                         \n\b");

  }

 }
 else if (n==6)
 {
  gotoxy (r,1);
  puts (linea_05);
  gotoxy (r,2);
  puts (linea_06);
  gotoxy (r,3);
  puts (linea_07);
  gotoxy (r,4);
  puts (linea_08);
  gotoxy (r,5);
  puts (linea_09);
  gotoxy (r,6);
  puts (linea_10);
  gotoxy (r,7);
  puts (linea_11);
  n++;
  delay (diley);

  for (s=1;s<(n+2);s++)
  {
   gotoxy (r,s);
   cprintf ("                         \n\b");

  }

 }
 else if (n==7)
 {
  gotoxy (r,1);
  puts (linea_04);
  gotoxy (r,2);
  puts (linea_05);
  gotoxy (r,3);
  puts (linea_06);
  gotoxy (r,4);
  puts (linea_07);
  gotoxy (r,5);
  puts (linea_08);
  gotoxy (r,6);
  puts (linea_09);
  gotoxy (r,7);
  puts (linea_10);
  gotoxy (r,8);
  puts (linea_11);
  n++;
  delay (diley);

  for (s=1;s<(n+2);s++)
  {
   gotoxy (r,s);
   cprintf ("                         \n\b");

  }

 }
 else if (n==8)
 {
  gotoxy (r,1);
  puts (linea_03);
  gotoxy (r,2);
  puts (linea_04);
  gotoxy (r,3);
  puts (linea_05);
  gotoxy (r,4);
  puts (linea_06);
  gotoxy (r,5);
  puts (linea_07);
  gotoxy (r,6);
  puts (linea_08);
  gotoxy (r,7);
  puts (linea_09);
  gotoxy (r,8);
  puts (linea_10);
  gotoxy (r,9);
  puts (linea_11);
  n++;
  delay (diley);

  for (s=1;s<(n+2);s++)
  {
   gotoxy (r,s);
   cprintf ("                         \n\b");

  }

 }
 else if (n==9)
 {
  gotoxy (r,1);
  puts (linea_02);
  gotoxy (r,2);
  puts (linea_03);
  gotoxy (r,3);
  puts (linea_04);
  gotoxy (r,4);
  puts (linea_05);
  gotoxy (r,5);
  puts (linea_06);
  gotoxy (r,6);
  puts (linea_07);
  gotoxy (r,7);
  puts (linea_08);
  gotoxy (r,8);
  puts (linea_09);
  gotoxy (r,9);
  puts (linea_10);
  gotoxy (r,10);
  puts (linea_11);
  n++;
  delay (diley);

  for (s=1;s<(n+2);s++)
  {
   gotoxy (r,s);
   cprintf ("                         \n\b");

  }

 }
 else if (n==10)
 {
  n++;
 }

 else
 {
  gotoxy (r,(n-10));
  puts (linea_01);
  gotoxy (r,(n-9));
  puts (linea_02);
  gotoxy (r,(n-8));
  puts (linea_03);
  gotoxy (r,(n-7));
  puts (linea_04);
  gotoxy (r,(n-6));
  puts (linea_05);
  gotoxy (r,(n-5));
  puts (linea_06);
  gotoxy (r,(n-4));
  puts (linea_07);
  gotoxy (r,(n-3));
  puts (linea_08);
  gotoxy (r,(n-2));
  puts (linea_09);
  gotoxy (r,(n-1));
  puts (linea_10);
  gotoxy (r,(n-0));
  puts (linea_11);
  delay (diley);

  gotoxy (r,(n-10));
  cprintf ("                        \n\b");
  gotoxy (r,(n-8));
  cprintf ("                        \n\b");
  gotoxy (r,(n-1));
  cprintf ("                        \n\b");

  n++;

 }

}

int AUTITO::desaparecer ()
{
 textcolor (15);

 char linea_01[]={' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',0};
 char linea_02[]={' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',0};
 char linea_03[]={'л','л','л','л','л','л','л','л','л','л','л',0};
 char linea_04[]={'л','л','л','л','л','л','л','л','л','л','л',0};
 char linea_05[]={' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',0};
 char linea_06[]={' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',0};
 char linea_07[]={' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',0};
 char linea_08[]={' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',0};
 char linea_09[]={' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',0};
 char linea_10[]={'л','л','л','л','л','л','л','л','л','л','л',0};
 char linea_11[]={'л','л','л','л','л','л','л','л','л','л','л',0};

 if (n==50)
 {
  gotoxy (r,40);
  puts (linea_01);
  gotoxy (r,41);
  puts (linea_02);
  gotoxy (r,42);
  puts (linea_03);
  gotoxy (r,43);
  puts (linea_04);
  gotoxy (r,44);
  puts (linea_05);
  gotoxy (r,45);
  puts (linea_06);
  gotoxy (r,46);
  puts (linea_07);
  gotoxy (r,47);
  puts (linea_08);
  gotoxy (r,48);
  puts (linea_09);
  gotoxy (r,49);
  puts (linea_10);
  n++;
  textcolor (18);
  gotoxy (17,1);
  cprintf ("л\n\b");
  gotoxy (63,1);
  cprintf ("л\n\b");
  textcolor (15);
  delay (diley);

  gotoxy (s,1);
  for (s=0;s<49;s++)
  {
   gotoxy (r,s);
   cprintf ("           \n\b");
  }
 }
 if (n==51)
 {
  gotoxy (r,41);
  puts (linea_01);
  gotoxy (r,42);
  puts (linea_02);
  gotoxy (r,43);
  puts (linea_03);
  gotoxy (r,44);
  puts (linea_04);
  gotoxy (r,45);
  puts (linea_05);
  gotoxy (r,46);
  puts (linea_06);
  gotoxy (r,47);
  puts (linea_07);
  gotoxy (r,48);
  puts (linea_08);
  gotoxy (r,49);
  puts (linea_09);
  n++;
  textcolor (18);
  gotoxy (17,1);
  cprintf ("л\n\b");
  textcolor (15);
  delay (diley);

  gotoxy (s,1);
  for (s=0;s<49;s++)
  {
   gotoxy (r,s);
   cprintf ("           \n\b");
  }
 }
 if (n==52)
 {
  gotoxy (r,42);
  puts (linea_01);
  gotoxy (r,43);
  puts (linea_02);
  gotoxy (r,44);
  puts (linea_03);
  gotoxy (r,45);
  puts (linea_04);
  gotoxy (r,46);
  puts (linea_05);
  gotoxy (r,47);
  puts (linea_06);
  gotoxy (r,48);
  puts (linea_07);
  gotoxy (r,49);
  puts (linea_08);
  n++;
  textcolor (18);
  gotoxy (17,1);
  cprintf ("л\n\b");
  textcolor (15);
  delay (diley);

  gotoxy (s,1);
  for (s=0;s<49;s++)
  {
   gotoxy (r,s);
   cprintf ("           \n\b");
  }
 }
 if (n==53)
 {
  gotoxy (r,43);
  puts (linea_01);
  gotoxy (r,44);
  puts (linea_02);
  gotoxy (r,45);
  puts (linea_03);
  gotoxy (r,46);
  puts (linea_04);
  gotoxy (r,47);
  puts (linea_05);
  gotoxy (r,48);
  puts (linea_06);
  gotoxy (r,49);
  puts (linea_07);
  n++;
  textcolor (18);
  gotoxy (17,1);
  cprintf ("л\n\b");
  textcolor (15);
  delay (diley);

  gotoxy (s,1);
  for (s=0;s<49;s++)
  {
   gotoxy (r,s);
   cprintf ("           \n\b");
  }
 }

 if (n==54)
 {
  gotoxy (r,44);
  puts (linea_01);
  gotoxy (r,45);
  puts (linea_02);
  gotoxy (r,46);
  puts (linea_03);
  gotoxy (r,47);
  puts (linea_04);
  gotoxy (r,48);
  puts (linea_05);
  gotoxy (r,49);
  puts (linea_06);
  n++;
  textcolor (18);
  gotoxy (17,1);
  cprintf ("л\n\b");
  textcolor (15);
  delay (diley);

  gotoxy (s,1);
  for (s=0;s<49;s++)
  {
   gotoxy (r,s);
   cprintf ("           \n\b");
  }
 }
 if (n==55)
 {
  gotoxy (r,45);
  puts (linea_01);
  gotoxy (r,46);
  puts (linea_02);
  gotoxy (r,47);
  puts (linea_03);
  gotoxy (r,48);
  puts (linea_04);
  gotoxy (r,49);
  puts (linea_05);
  n++;
  textcolor (18);
  gotoxy (17,1);
  cprintf ("л\n\b");
  textcolor (15);
  delay (diley);

  gotoxy (s,1);
  for (s=0;s<49;s++)
  {
   gotoxy (r,s);
   cprintf ("           \n\b");
  }
 }
 if (n==56)
 {
  gotoxy (r,46);
  puts (linea_01);
  gotoxy (r,47);
  puts (linea_02);
  gotoxy (r,48);
  puts (linea_03);
  gotoxy (r,49);
  puts (linea_04);
  n++;
  textcolor (18);
  gotoxy (17,1);
  cprintf ("л\n\b");
  textcolor (15);
  delay (diley);

  gotoxy (s,1);
  for (s=0;s<49;s++)
  {
   gotoxy (r,s);
   cprintf ("           \n\b");
  }
 }
 if (n==57)
 {
  gotoxy (r,47);
  puts (linea_01);
  gotoxy (r,48);
  puts (linea_02);
  gotoxy (r,49);
  puts (linea_03);
  n++;
  textcolor (18);
  gotoxy (17,1);
  cprintf ("л\n\b");
  textcolor (15);
  delay (diley);

  gotoxy (s,1);
  for (s=0;s<49;s++)
  {
   gotoxy (r,s);
   cprintf ("           \n\b");
  }
 }
 if (n==58)
 {
  gotoxy (r,48);
  puts (linea_01);
  gotoxy (r,49);
  puts (linea_02);
  n++;
  textcolor (18);
  gotoxy (17,1);
  cprintf ("л\n\b");
  textcolor (15);
  delay (diley);

  gotoxy (s,1);
  for (s=0;s<49;s++)
  {
   gotoxy (r,s);
   cprintf ("           \n\b");
  }
 }
 if (n==59)
 {
  gotoxy (r,49);
  puts (linea_01);
  n=0;
  textcolor (18);
  gotoxy (17,1);
  cprintf ("л\n\b");
  textcolor (15);
  delay (diley);

  gotoxy (s,1);
  for (s=0;s<50;s++)
  {
   gotoxy (r,s);
   cprintf ("           \n\b");
  }
 }
}

int AUTITO::DesaparecerDoble ()
{
 textcolor (15);
 char linea_01[]={' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',0};
 char linea_02[]={' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',0};
 char linea_03[]={'л','л','л','л','л','л','л','л','л','л','л',' ',' ',' ','л','л','л','л','л','л','л','л','л','л','л',0};
 char linea_04[]={'л','л','л','л','л','л','л','л','л','л','л',' ',' ',' ','л','л','л','л','л','л','л','л','л','л','л',0};
 char linea_05[]={' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',0};
 char linea_06[]={' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',0};
 char linea_07[]={' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',0};
 char linea_08[]={' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',0};
 char linea_09[]={' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','л','л','л',' ',' ',' ',' ',0};
 char linea_10[]={'л','л','л','л','л','л','л','л','л','л','л',' ',' ',' ','л','л','л','л','л','л','л','л','л','л','л',0};
 char linea_11[]={'л','л','л','л','л','л','л','л','л','л','л',' ',' ',' ','л','л','л','л','л','л','л','л','л','л','л',0};

 if (n==50)
 {
  gotoxy (r,40);
  puts (linea_01);
  gotoxy (r,41);
  puts (linea_02);
  gotoxy (r,42);
  puts (linea_03);
  gotoxy (r,43);
  puts (linea_04);
  gotoxy (r,44);
  puts (linea_05);
  gotoxy (r,45);
  puts (linea_06);
  gotoxy (r,46);
  puts (linea_07);
  gotoxy (r,47);
  puts (linea_08);
  gotoxy (r,48);
  puts (linea_09);
  gotoxy (r,49);
  puts (linea_10);
  n++;
  textcolor (18);
  gotoxy (17,1);
  cprintf ("л\n\b");
  gotoxy (63,1);
  cprintf ("л\n\b");
  textcolor (15);
  delay (diley);

  gotoxy (s,1);
  for (s=0;s<49;s++)
  {
   gotoxy (r,s);
   cprintf ("                         \n\b");
  }
 }
 if (n==51)
 {
  gotoxy (r,41);
  puts (linea_01);
  gotoxy (r,42);
  puts (linea_02);
  gotoxy (r,43);
  puts (linea_03);
  gotoxy (r,44);
  puts (linea_04);
  gotoxy (r,45);
  puts (linea_05);
  gotoxy (r,46);
  puts (linea_06);
  gotoxy (r,47);
  puts (linea_07);
  gotoxy (r,48);
  puts (linea_08);
  gotoxy (r,49);
  puts (linea_09);
  n++;
  textcolor (18);
  gotoxy (17,1);
  cprintf ("л\n\b");
  gotoxy (63,1);
  cprintf ("л\n\b");
  textcolor (15);
  delay (diley);

  gotoxy (s,1);
  for (s=0;s<49;s++)
  {
   gotoxy (r,s);
   cprintf ("                         \n\b");
  }
 }
 if (n==52)
 {
  gotoxy (r,42);
  puts (linea_01);
  gotoxy (r,43);
  puts (linea_02);
  gotoxy (r,44);
  puts (linea_03);
  gotoxy (r,45);
  puts (linea_04);
  gotoxy (r,46);
  puts (linea_05);
  gotoxy (r,47);
  puts (linea_06);
  gotoxy (r,48);
  puts (linea_07);
  gotoxy (r,49);
  puts (linea_08);
  n++;
  textcolor (18);
  gotoxy (17,1);
  cprintf ("л\n\b");
  gotoxy (63,1);
  cprintf ("л\n\b");
  textcolor (15);
  delay (diley);

  gotoxy (s,1);
  for (s=0;s<49;s++)
  {
   gotoxy (r,s);
   cprintf ("                         \n\b");
  }
 }
 if (n==53)
 {
  gotoxy (r,43);
  puts (linea_01);
  gotoxy (r,44);
  puts (linea_02);
  gotoxy (r,45);
  puts (linea_03);
  gotoxy (r,46);
  puts (linea_04);
  gotoxy (r,47);
  puts (linea_05);
  gotoxy (r,48);
  puts (linea_06);
  gotoxy (r,49);
  puts (linea_07);
  n++;
  textcolor (18);
  gotoxy (17,1);
  cprintf ("л\n\b");
  gotoxy (63,1);
  cprintf ("л\n\b");
  textcolor (15);
  delay (diley);

  gotoxy (s,1);
  for (s=0;s<49;s++)
  {
   gotoxy (r,s);
   cprintf ("                         \n\b");
  }
 }

 if (n==54)
 {
  gotoxy (r,44);
  puts (linea_01);
  gotoxy (r,45);
  puts (linea_02);
  gotoxy (r,46);
  puts (linea_03);
  gotoxy (r,47);
  puts (linea_04);
  gotoxy (r,48);
  puts (linea_05);
  gotoxy (r,49);
  puts (linea_06);
  n++;
  textcolor (18);
  gotoxy (17,1);
  cprintf ("л\n\b");
  gotoxy (63,1);
  cprintf ("л\n\b");
  textcolor (15);
  delay (diley);

  gotoxy (s,1);
  for (s=0;s<49;s++)
  {
   gotoxy (r,s);
   cprintf ("                         \n\b");
  }
 }
 if (n==55)
 {
  gotoxy (r,45);
  puts (linea_01);
  gotoxy (r,46);
  puts (linea_02);
  gotoxy (r,47);
  puts (linea_03);
  gotoxy (r,48);
  puts (linea_04);
  gotoxy (r,49);
  puts (linea_05);
  n++;
  textcolor (18);
  gotoxy (17,1);
  cprintf ("л\n\b");
  gotoxy (63,1);
  cprintf ("л\n\b");
  textcolor (15);
  delay (diley);

  gotoxy (s,1);
  for (s=0;s<49;s++)
  {
   gotoxy (r,s);
   cprintf ("                         \n\b");
  }
 }
 if (n==56)
 {
  gotoxy (r,46);
  puts (linea_01);
  gotoxy (r,47);
  puts (linea_02);
  gotoxy (r,48);
  puts (linea_03);
  gotoxy (r,49);
  puts (linea_04);
  n++;
  textcolor (18);
  gotoxy (17,1);
  cprintf ("л\n\b");
  gotoxy (63,1);
  cprintf ("л\n\b");
  textcolor (15);
  delay (diley);

  gotoxy (s,1);
  for (s=0;s<49;s++)
  {
   gotoxy (r,s);
   cprintf ("                         \n\b");
  }
 }
 if (n==57)
 {
  gotoxy (r,47);
  puts (linea_01);
  gotoxy (r,48);
  puts (linea_02);
  gotoxy (r,49);
  puts (linea_03);
  n++;
  textcolor (18);
  gotoxy (17,1);
  cprintf ("л\n\b");
  gotoxy (63,1);
  cprintf ("л\n\b");
  textcolor (15);
  delay (diley);

  gotoxy (s,1);
  for (s=0;s<49;s++)
  {
   gotoxy (r,s);
   cprintf ("                         \n\b");
  }
 }
 if (n==58)
 {
  gotoxy (r,48);
  puts (linea_01);
  gotoxy (r,49);
  puts (linea_02);
  n++;
  textcolor (18);
  gotoxy (17,1);
  cprintf ("л\n\b");
  gotoxy (63,1);
  cprintf ("л\n\b");
  textcolor (15);
  delay (diley);

  gotoxy (s,1);
  for (s=0;s<49;s++)
  {
   gotoxy (r,s);
   cprintf ("                         \n\b");
  }
 }
 if (n==59)
 {
  gotoxy (r,49);
  puts (linea_01);
  n=0;
  textcolor (18);
  gotoxy (17,1);
  cprintf ("л\n\b");
  gotoxy (63,1);
  cprintf ("л\n\b");
  textcolor (15);
  delay (diley);

  gotoxy (s,1);
  for (s=0;s<50;s++)
  {
   gotoxy (r,s);
   cprintf ("                        \n\b");
  }
 }

}

void Inicio ();

int main ()
{
 int i,j,k,l,m,contador=200,nivel=1,aleatorio;

 Presentacion ();

 Inicio ();

 clrscr ();
 AUTITO A1(35,35,3);

// borra la parte del medio donde van los autitos

 do
 {
  gotoxy (18,1);
  for (k=0;k<50;k++)
  {
   gotoxy (18,k);
   cprintf ("                                             \n\b");
  }


// ARRANCA CON LA POSTA RUTINA

  do
  {

// dibuja las lineas de los costados

   if (spawn==1)
   {
    for (i=1;i<=49;i++)
    {
     textcolor (18);
     gotoxy (17,i);
     cprintf ("л\n\b");

     gotoxy (63,i);
     cprintf ("л\n\b");

     textcolor (0);
     gotoxy (1,i);
     cprintf ("             \n\b");
    }
    textcolor (15);
    n=0;
   }

   contador--;
   if (contador==0)
   {
    contador=300;
    nivel++;
    if (nivel<=11)
     diley=diley-5;
   }


 // subrutina de los autitos malos

   if (n==0)
   {
    r=rand()%125;
    if (r<35)
     r=21;
    else if ((r>=35) && (r<46))
     r=35;
    else
     r=49;
   }

   AUTITO A2(r,15,1);

   if (n==0)
    z=rand()%2;
   if (z==0)
   {
    if (n<=49)
     A2.bajar ();
    else
     A2.desaparecer ();
   }
   else
   {
    if (r==49)
    {
     aleatorio=rand()%2;
     if (aleatorio==0)
      r=21;
     if (aleatorio==1)
      r=35;
    }
    if (n<=49)
     A2.BajarDoble ();
    else
     A2.DesaparecerDoble ();
   }
 // subrutina del autito bueno

   A1.pintar ();
   spawn=2;

   if ((n>=34) && (n<57))
   {
    A1.chocar ();
    if (vidas==0)
    {
     clrscr ();
     GameOver ();
     GAMEOVER=1;
     delay (300);
    }
   }

 // subrutina de visualizacion de las vidas y el nivel

   if (GAMEOVER==0)
   {
    textcolor (15);
    gotoxy (68,5);
    cprintf ("NIVEL:%d",nivel);
    gotoxy (68,7);
    cprintf ("VIDAS:%d",vidas);
   }
  }
  while ((!kbhit()) && (GAMEOVER==0));

 // subrutina de deteccion de teclas

  tecla=getch ();

  A1.andar ();

 }
 while ((tecla!='p') && (GAMEOVER==0));

 return 0;
}

void Inicio ()
{
 textcolor (0);
 clrscr();

 textcolor (18);
 cprintf("                                                                           \n\r"
	 "                                                                           \n\r"
	 "                                                                           \n\r"
	 "                                                                           \n\r"
	 "                                                                           \n\r"
	 "                                                                           \n\r"
	 "                                                                           \n\r"
	 "                                                                           \n\r"
	 "                                                                           \n\r"
	 "                                                                           \n\r"
	 "       лл         лл    лл   лллллллл   лллллллл   лл    лл   лллллллл     \n\r"
	 "       лл         лл    лл   лл         лл    лл   лл    лл   лл    лл     \n\r"
	 "       лл         лл    лл   лл         лл    лл   лл    лл   лл    лл     \n\r"
	 "       лл         лл    лл   лл         лл    лл   лл    лл   лл    лл     \n\r"
	 "       лл         лл    лл   лл         лл    лл   ллл   лл   лл    лл     \n\r"
	 "       лл         лл    лл   лл         лл    лл   лллл  лл   лл    лл     \n\r"
	 "       лл         лл    лл   лл ллллл   лллллллл   лл лл лл   лл    лл     \n\r"
	 "       лл         лл    лл   лл    лл   лл    лл   лл  лллл   лл    лл     \n\r"
	 "       лл         лл    лл   лл    лл   лл    лл   лл   ллл   лл    лл     \n\r"
	 "       лл         лл    лл   лл    лл   лл    лл   лл    лл   лл    лл     \n\r"
	 "       лл         лл    лл   лл    лл   лл    лл   лл    лл   лл    лл     \n\r"
	 "       лл         лл    лл   лл    лл   лл    лл   лл    лл   лл    лл     \n\r"
	 "       лллллллл   лллллллл   лллллллл   лл    лл   лл    лл   лллллллл     \n\r"
	 "                                                                           \n\r"
	 "                                                                           \n\r"
	 "                                                                           \n\r"
	 "            лллллллл   лллллллл   лллллллл   лллллллл   лллллллл           \n\r"
	 "            лл    лл   лл    лл   лл         лл         лл    лл           \n\r"
	 "            лл    лл   лл    лл   лл         лл         лл    лл           \n\r"
	 "            лл    лл   лл    лл   лл         лл         лл    лл           \n\r"
	 "            лл    лл   лл    лл   лл         лл         лл                 \n\r"
	 "            лл    лл   лл    лл   лл         лл         лл                 \n\r"
	 "            лллллллл   лллллллл   лл         лллллллл   лллллллл           \n\r"
	 "            лллл       лл    лл   лл         лл               лл           \n\r"
	 "            лл лл      лл    лл   лл         лл               лл           \n\r"
	 "            лл  лл     лл    лл   лл         лл         лл    лл           \n\r"
	 "            лл   лл    лл    лл   лл         лл         лл    лл           \n\r"
	 "            лл    лл   лл    лл   лл         лл         лл    лл           \n\r"
	 "            лл     л   лл    лл   лллллллл   лллллллл   лллллллл           \n\r"
	 "                                                                           \n\r"
	 "                                                                           \n\r"
	 "                                                                           \n\r");

 textcolor (15);
 delay (7000);
}
