#include <stdio.h>

void main()
{
    printf("Lyoum Ghanbiyenlk program diyalk Ch7al wella dki\n");
    printf("ghan7sblk lmjmo3 diyal l2ar9am mn 1 tal fin ma bghiti \n");
    
    int n, i;
    int sum = 0;

    printf("tal fin bghitini n7ssblk : ");
    scanf("%d", &n);
    
    printf("\nsbar 3lia n7ssb lmjmo3 diyal ar9am mn 0 tal %d \n",n);

    // Using a for loop to calculate the sum of numbers from 1 to n
    for (i = 1; i <= n; i++) {
        sum += i; //sum = sum + i
    }

    printf("\nlmjmo3 mn  0 tal %d howa : %d\n", n, sum);

    printf("haaa kijitek, hsseb m3aya t2eked belli maghletch !\n");

}
