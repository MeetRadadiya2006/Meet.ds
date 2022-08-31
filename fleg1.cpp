#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
   clrscr();
   textcolor(2);
   for(i=1;i<=12;i++)
   {
     for(j=1;j<=43;j++)
     {
	if(i>=1&&i<=4)
	  {
	  textcolor(4);
	   cprintf("*");
	   }
       else if(i>=5&&j==21&&i<=8||i>=5&&j==22&&i<=8
	       ||j>=19&&i==6&&j<=24||j>=19&&i==7&&j<=24)
	{
	 textcolor(1);
	 cprintf("*");
       }
       else if(i>=5&&i<=8)
	{
	textcolor(15);
	cprintf("*");
	}
	else
	{  textcolor(2);
	cprintf("*");
	}

     }printf("\n");
   }
   for(i=1;i<=11;i++)
   {
     for(j=1;j<=60;j++)
     {
      if(i<=13&&j==2||i<=13&&j==1||i<=13&&j==3)
      {
       textcolor(6);
       cprintf("|");
       }
       else if(j>=30&&i==6&&j<=37||i==7&&j==36||
      j>=40&&i==6&&j<=47||i==7&&j==40)
       {
	 textcolor(4);
	 cprintf("*");
       }
       else if(i==8&&j==35||i==9&&j==34
       ||j>=40&&i==8&&j<=47||i==9&&j==47)
       {
	  textcolor(15);
	  cprintf("*");
       }
       else if(i==10&&j==33||i==11&&j==32
       ||j>=40&&i==11&&j<=47||i==10&&j==47)
       {
	 textcolor(2);
	 cprintf("*");
       }
       else
       {
       printf(" ");
       }
     }
     printf("\n");
     }
   return 0;
   }