#include <cs50.h>
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, string argv[])
{

    if(argc==2)
    {

        if(atoi(argv[1]) !=0)
        {
   string mesaj=get_string("giriþ: ");
   for(int i=0;i<strlen(mesaj);i++)
   {
      int a=(int)mesaj[i];
      if(a>=65&&a<=90)
      {
        a+= atoi(argv[1]);
        if(a>90)
        {
               while(!(a>=65&&a<=90))
          {
           a=65+(a-90)-1;
          }
           mesaj[i]=(char)a;
        }
        else
        mesaj[i]=(char)a;
      }
      if(a>=97&&a<=122)
      {
           a+= atoi(argv[1]);
        if(a>122)
        {
             while(!(a>=97&&a<=122))
          {
           a=97+(a-122)-1;
          }
           mesaj[i]=(char)a;
        }
        else
        mesaj[i]=(char)a;
      }
   }
    printf("çýkýþ: %s\n",mesaj);
        }
        return 0;
    }
    return 1;
     }
