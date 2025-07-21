/* Print the series :
     2,4,8,16,32,64,128,256,512,1024
*/
#include<iostream>
#include<cmath>
using namespace std;
void result(int range,int num)
{
    int res;
   /*for(int i=num; i<=range; i=i*2)
    {
        res=num*i;
        cout<<"Result is :"<<res<<endl;
        cout<<"Value of i is :"<<i<<endl;
    }*/
    for(int i=2;i<=range ;i+=1)
    {
        int res = pow(num,i);
        cout<<"The result is : "<<res<<endl;
    }
}
int main ()
{
    int range,no ;
    cout<<"Enter the range up to you get the series"<<endl;
    cin>>range;
    cout<<"Enter the number"<<endl;
    cin>>no;
    result(range,no);
}
