#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
{
    int n,i,j;
    n=9;
    for (i=0; i<n; i++)
    {
        for (j=0;j<n-i;j++)
            printf("");
        for (j=0;j<=i;j++)  ////
            printf("%d",j+1);
        printf("\n");
    }
    getch();
}
}
