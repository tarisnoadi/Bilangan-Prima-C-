#include <stdio.h>
#include <stdlib.h>

int main (void)

{
       int input,cek,p,q;
       printf ("Masukkan Batas  = \n");
       scanf("%d", &input);
        
       printf ("bilangan prima %d \n", input);
       for(p=2; p<=input; p++)
       {
       cek=0;
      
              for (q=2; q<p; q++)
              {
                     if(p%q == 0)
                     {
                           cek=1;
                     }
              }
                     if(cek==0)
                     {
                            printf(" %d ", p);
                     }            
       }
       system ("pause");
       return (0);

}
