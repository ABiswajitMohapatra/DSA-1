#include<iostream>
using namespace std;     //Heap is a complete binary tree that comes with a heap order property.
// Max Heap: 1. tree should be CBT 2. value of Parent node must be greater than child nodes(applicable for whole tree.)
// Min heap: 1. tree should be CBt 2. value of Parent node must be less than child nodes(applicable for whole tree.)
/*To find left child or right child:
for 1 based indexing: ith left child = 2*i ; ith right child: 2*i+1;
for 0 based indexing: ith left child = 2*i+1 ; ith right child: 2*i+2;
To find parent of ith node: i/2  */

class Heap
{
    public:
    int arr[100];
    int size;

    Heap()
    {
        arr[0]=-1;
        size = 0;
    }

    void insert(int val)
    {
        size = size+1;
        int index = size;
        arr[index]= val;
        
        while(index > 1)
        {
            int parent  = index/2;
            if(arr[parent]<arr[index])
            {
                swap(arr[parent],arr[index]);
                index=parent;

            }
            else{
                return;
            }
        }
    }
    void print()
    {
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<" ";
        }
    }

};