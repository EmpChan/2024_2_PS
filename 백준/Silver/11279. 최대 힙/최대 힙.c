#include <stdio.h>
#include <malloc.h>

int arr[300001], size = 0;

void insert(int item)
{
    arr[++size] = item;
    int p = size;
    while (p>1 && arr[p] > arr[p/2])
    {
        int tmp = arr[p];
        arr[p] = arr[p/2];
        arr[p/2] = tmp;
        p /= 2;
    }

}

void delete()
{
    if (size == 0)
    {
        printf("0\n");
        return;
    }
    printf("%d\n", arr[1]);
    arr[1] = arr[size--];
    int p = 1;
    while (p*2<=size || p*2+1<=size)
    {
        if (p*2+1<=size && arr[p*2] < arr[p*2+1])
        {
            if(arr[p*2+1] > arr[p]) {
                int tmp = arr[p*2+1];
                arr[p*2+1] = arr[p];
                arr[p] = tmp;
                p=p*2+1;
            }
            else break;
        }
        else
        {
            if (arr[p*2] > arr[p])
            {
                int tmp = arr[p];
                arr[p] = arr[p*2];
                arr[p*2] = tmp;
                p=p*2;
            }
            else break;
        }
    }
}

int main(){
    int n, yaho;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &yaho);
        if (yaho == 0)
        {
            delete();
        }
        else
        {
            insert(yaho);
        }
    }
    return 0;
}