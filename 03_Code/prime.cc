#include<iostream>
#include<vector>
using namespace std;

bool isPrime(long long num)
{
    long long count=0,factor=0;
    if(num==0 || num==1)
        return 0;
    for(long long i=2;i*i<=num;i++)
    {
        if(!(num%i))
        {
                cout<<"Total Iterations::"<<count;
                return false;
        }    
        count++;
    }
    cout<<"Total Iterations::"<<count;
    return true;
}

void sieveofErasthones(int n)
{   
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        arr[i]=true;
    arr[0]=arr[1]=false;
    arr[2]=true;
    for(int i=2;i*i<=n;i++)
    {
        if(arr[i]==true){
        for(int j=i*i;j<=n;j+=i)
        {
            arr[j]=false;
        }
    }
    }
    for(int i=2;i<n;i++)
        if(arr[i])
            cout<<i<<"\t";
}


int main()
{
    long long num;
    cout<<"\nEnter the Number::\t";
    cin>>num;
    sieveofErasthones(num);
    // if(isPrime(num))
    //     cout<<"\nPrime Number\n";
    // else
    //     cout<<"\nNot a Prime Number\n";
    return 0;
}