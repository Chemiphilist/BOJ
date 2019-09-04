#include <stdio.h>

int arr[1000000] = {1,2,};

int Tile(int x)
{
    if ( x <= 1)
        return arr[x];
    else
    {
        if(arr[x] > 0)
            return arr[x];
    }
    return arr[x] = (Tile(x-1) + Tile(x-2))%15746;
}

int main ()
{
    int T;
    scanf("%d",&T);
    if (T == 1)
        printf("1");
    else if(T == 2)
        printf("2");
    else
    {
        Tile(T);
        int k=arr[T-1];
        printf("%d",k);
    }
}
