//Start Time=7:42
//End Time=7:47

#include<stdio.h>
int main()
{
    int a,b,n;
    printf("Enter a,b values");
    scanf("%d %d",&a,&b);
    printf("SELECT REQUIRED OPERATOR\n1:addition\n2:subtraction\n3:multiplication\n4:division\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            n=a+b;
            printf("Addition is %d",n);
            break;
        case 2:
            n=a-b;
            printf("Subtraction is %d",n);
            break;
        case 3:
            n=a*b;
            printf("Product is %d",n);
            break;
        case 4:
            n=a/b;
            printf("Division is %d",n);
            break;
    }
}
