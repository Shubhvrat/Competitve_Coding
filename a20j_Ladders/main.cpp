#include <iostream>

using namespace std;
int minimum_number(int a , int b) 
{
    return a>b?b:a;
}
int main()
{
    int n;
    cin>>n;
    int left[n],right[n];
    for(int i=0;i<n;i++)
    {
        cin>>right[i]>>left[i];
    }
    int r1=0,r2=0,l1=0,l2=0;
    for(int i=0;i<n;i++)
    {
        if(left[i] !=1)
        {
            r1++;
        }
        else
        {
            r2++;
        }
    }
    int result = minimum_number(r1 , r2);
    for(int i=0;i<n;i++)
    {
        if(right[i] !=1)
        {
            l1++;
        }
        else
        {
            l2++;
        }
    }
    result += minimum_number(l1,l2);
    cout<<result<<endl;
    return 0;
}
