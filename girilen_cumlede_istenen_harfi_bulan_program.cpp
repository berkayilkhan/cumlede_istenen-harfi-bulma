#include<stdio.h>
#include<string.h>
int main()
{
   int i,top=0;
   char x, kelime[50];
   printf("Bir cumle girin : ");
   //scanf("%s" ,kelime); // %slerde & iþareti yoktur.
   gets(kelime);
   printf("aranacak harf ne :");
   scanf("%c",&x);
   for(i=0;i<strlen(kelime);i++)
   if(kelime[i]==x)
   top++;
   printf("Girilen cumlede %d tane %c harfi var.\n",top,x);
   return 0;
   

}
