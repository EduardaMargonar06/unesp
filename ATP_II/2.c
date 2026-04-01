
#include <stdio.h>

int main()
{
   char array[5];

   for(int i=0;i<5;i++){
       array[i]='A' + i;
   }

   for (int i = 0; i < 5; i++) {
        printf("%c ", array[i]);
    }
}

