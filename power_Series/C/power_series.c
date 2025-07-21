/*Print the series:
    2,4,8,16,32,64,128,256,512,1024
            or
    3,6,36,216,46656
*/
#include<stdio.h>
#include<math.h>
int series(int range,int num,int p)
{
    int res ;
    for(int i=1; i<=range; i+=1)
    {
        res = pow(num,i);
        printf("The result is %d :",res);
        printf("\n");
    }
}
int main()
{
    int num,range;
    int pow;
    printf("\n Enter the power");
    scanf("%d",&pow);
    printf("\n Enter the number :");
    scanf("%d",&num);
    printf("\n Enter the length of the series");
    scanf("%d",&range);
    series(range,num,pow);
}
