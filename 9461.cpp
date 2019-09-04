#include<iostream>

using namespace std;

long long int Padoban_Sequence_Arr[1000000]= {0,1,1,1,};

long long int Padoban_Sequence(int x)
{
    if (x==1)
        return Padoban_Sequence_Arr[1];
    if (x==2)
        return Padoban_Sequence_Arr[2];
    if (x==3)
        return Padoban_Sequence_Arr[3];
    if (Padoban_Sequence_Arr[x]!=0)
        return Padoban_Sequence_Arr[x];
    return Padoban_Sequence_Arr[x]=Padoban_Sequence(x-2)+Padoban_Sequence(x-3);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin>>T;
    for (int i=0; i<T; i++)
    {
        int a;
        cin>>a;
        cout<<Padoban_Sequence(a)<<"\n";
    }
}

// 1 1 1 2 2 3 4 5 7 9 12 16 21 ...
