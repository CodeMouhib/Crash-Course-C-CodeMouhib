#include <stdio.h>

void main()
{
    int n, i, sum = 0;

    printf("lyoum ghant3elem n7sseb lmjmo3 diyal ar9ab zawjiya fa9at\n\n");
    printf("Asidi 3tini nemra : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {

        if (i % 2 == 0) {

            sum += i;

        }else{

	printf("Asidi %d machi ra9m zawji",i);
	
	}
	


    }

   printf("lmjmo3 diyal ar9am zawjiya mn 1 tal %d howa : %d \n", n, sum);

   printf("\n\n\t kijitek 3awtani flmath, gha codini mzyan rah n3jbk !\n\n Matnsach t7sseb m3aya man3rft nghlet !!\n");


}
