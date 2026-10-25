#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int euler_totient(int n)
{
    int count=0;
    for(int i=1;i<n;i++)
    {
        if(gcd(i,n)==1)
            count++;
    }
    return count;
}

int main()
{
    int n;
    cout<<"Enter the Number::";
    cin>>n;
    cout<<euler_totient(n)<<endl;
    return 0;
}