#include <cs50.h>
#include <stdio.h>
#include<string.h>

int main(int argc, string argv[])
{
    if(argc==2)
    {
        string anahtar;
       anahtar=argv[1];
       for(int c=0;c<strlen(anahtar);c++)
       {
           int b=(int)anahtar[c];
           if(!((b>=65&&b<=90)||(b>=97&&b<=122)))
           {
               return 1;
           }
       }
       string plaintext=get_string("plaintext: ");
           int c=0;
       for(int i=0;i<strlen(plaintext);i++)
       {
               int k=(int)anahtar[c];
               if(anahtar[c]=='\0')
               {
                   c=0;
                   k=(int)anahtar[0];
               }
               if(k>=65&&k<=90)
               {
                   k=k%65;
               }
               if(k>=97&&k<=122)
               {
                   k=k%97;
               }

               int a=(int)plaintext[i];
               if(a>=65&&a<=90)
               {
                   a+=k;
                   if(a>90)
                   {
                       while(!(a>=65&&a<=90))
                       {
                           a=65+(a-90)-1;
                       }
                   }
                   plaintext[i]=(char)a;
                     c++;
               }
               if(a>=97&&a<=122)
               {
                   a+=k;
                   if(a>122)
                   {
                       while(!(a>=97&&a<=122))
                       {
                           a=97+(a-122)-1;
                       }

                   }
                   plaintext[i]=(char)a;

                     c++;
           }


       }
       printf("ciphertext: %s\n",plaintext);
    }
    else
    {
     return 1;
    }
    return 0;
}
