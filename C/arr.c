// #include <stdio.h>

// int main() {
//     int a[5]={3,2,3,6,7};
//     printf("%d\n",a[3]);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int i,ar[10];
// printf("enter the values\n"); for(i=0;i<10;i++)
// {scanf("%d",&ar[i]);} printf("values in array are:\n");
// for(i=0;i<10;i++)
// {printf("%d ",ar[i]);}
//     return 0;
// }

#include <stdio.h>

int main() {
    int a,b=0,c[30];
    for(int i=0;i<30;i++){
        scanf("%d\n",c[i]);
    }
    for(int i=0;i<30;i++)
    b=b+c[i];
    a=b/30;
    printf("%d\n",a);

    return 0;
}