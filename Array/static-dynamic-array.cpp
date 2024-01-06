#include <iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int A[5]={2,4,6,8,10};
    int *p;
    int i;

    p=new int[5];

    p[0]=3;
    p[1]=5;
    p[2]=7;
    p[3]=9;
    p[4]=11;

    for(i=0;i<5;i++)
        printf("%d\n",A[i]);
    printf("\n");

    for(i=0;i<5;i++)
        printf("%d\n",p[i]);
    printf("\n");


    int *q;
    q=new int[10];

    for(i=0;i<5;i++)
        q[i]=p[i];
    delete []p;
    p=q;
    q=NULL;

    for(i=0;i<10;i++)
        printf("%d\n",p[i]);

        return 0;

}
