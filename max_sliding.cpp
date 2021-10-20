#include<iostream>
using namespace std;

int main()
{
    int n,i,k;
    cin>>n>>k;
    int a[n];
    for (i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int sum1,sum2,position,sum3;
    for(i=0;i<k;i++){
        sum1+=a[i];
    }
    sum3=sum1;
    position=i-1;

    for(i=k;i<n;i++){
        sum1-=a[i-k];
        sum1+=a[i];
        if(sum1>sum3){
            sum3=sum1;
            position=i;
        }
    }
    cout<<"sum = "<<sum3<<endl;
    for(i=position-k+1;i<=position;i++){
        cout<<a[i];
    }





}
