#include <stdio.h>
#include<limits.h>
#define max 100
int heap[max],size=0;
void swap(int* a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void shiftup(int i)
{
    while(i>0 && (heap[(i-1)/2]>heap[i]))
    {
        swap(&heap[(i-1)/2],&heap[i]);
        i=(i-1)/2;
    }
}
void insert(int value)
{
    heap[size]=value;
    shiftup(size);
    size++;
}
void shiftdown(int n,int i)
{
    int smallest=i;
    int right=2*i+2;
    int left=2*i+1;
    if(left<n && heap[smallest]>heap[left]) smallest=left;
    if(right<n && heap[smallest]>heap[right]) smallest=right;
    if(smallest!=i)
    {
        swap(&heap[smallest],&heap[i]);
        shiftdown(n,smallest);
    }
}
void removetop()
{
    heap[0]=heap[--size];
    shiftdown(size,0);
}
void sort()
{
    int n=size;
    for(int i=n-1;i>=0;i--)
    {
        swap(&heap[0],&heap[i]);
        shiftdown(i,0);
    }

}
void print()
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",heap[i]);
    }
}
int main()
{
    insert(45);
    insert(42);
    insert(23);
    insert(35);
    insert(21);
    insert(4);
    insert(22);
    insert(19);
    insert(25);
    print();
    sort();
    printf("\n");
    print();
    printf("\n");
    removetop();
    print();
}