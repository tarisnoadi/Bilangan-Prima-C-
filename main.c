#include <stdio.h>
#include <stdlib.h>

int main (void)

{
       int input,cek,prima,bil;
       printf ("Masukkan Batas  = \n");
       scanf("%d", &input);
        
       printf ("bilangan prima %d \n", input);
       for(prima=2; prima<=input; prima++)
       {
       cek=0;
      
              for (bil=2; bil<prima; bil++)
              {
                     if(prima%bil == 0)
                     {
                           cek=1;
                     }
              }
                     if(cek==0)
                     {
                            printf(" %d ", prima);
                     }            
       }
       system ("pause");
       return (0);

}

