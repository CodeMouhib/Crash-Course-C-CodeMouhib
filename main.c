#include <stdio.h>


void lmjmo3DiyalAr9amZawjiya(int m)
{

    int  i, sum = 0;

    

    for (i = 1; i <= m; i++) {

        if (i % 2 == 0) {

            sum += i;

        }else{

	printf("\nAsidi %d machi ra9m zawji\n",i);
	
	}
	


    }

   printf("lmjmo3 diyal ar9am zawjiya mn 1 tal %d howa : %d \n", m, sum);
   
}

void main()
{
    int n ;
    	
    printf("lyoum ghant3elem n7sseb lmjmo3 diyal ar9ab zawjiya fa9at\n\n");
    printf("Asidi 3tini nemra : ");
    scanf("%d", &n);
    
    lmjmo3DiyalAr9amZawjiya(n);
    
    
    printf("\n\n\t kijitek 3awtani flmath, gha codini mzyan rah n3jbk !! \n\n Matnsach t7ssb moraya !! \n");


}
