/*
Implementing the 1-based indexing
*/
#include <iostream>
#include <algorithm>
using namespace std;
class Heap
{
    int arr[100];
    int size;

public:
    Heap()
    {
        size = 0;
        arr[0] = -1;
    }
    void insert(int val)
    {
        size++;
        int index = size;
        arr[index] = val;
        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent; // updating index to find the next parent
            }
            else
            {
                return;
            }
        }
    }
    void print()
    {
        // size
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void deleteFromHeap()
    {
        // if there is no element in the heap
        if (size == 0)
        {
            return;
        }
        // swaping the first to last actually we are deleting the root node
        arr[1] = arr[size];
        size--;//node is deleted
        int i = 1;
        while (i < size)
        {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;
            if (arr[leftIndex] > arr[rightIndex])//left 
            {
                if (leftIndex <= size && arr[i] < arr[leftIndex])
                {
                    swap(arr[i], arr[leftIndex]);
                    i = leftIndex;
                }
                else
                {
                    return;
                }
            }
            else
            {
                if (rightIndex <= size && arr[i] < arr[rightIndex])
                {
                    swap(arr[i], arr[rightIndex]);
                    i = rightIndex;
                }
                else
                {
                    return;
                }
            }
        }
    }
};
int main()
{
    Heap h;
    h.insert(50);
    h.print();
    h.insert(80);
    h.print();
    h.insert(70);
    h.print();
    h.insert(60);
    h.print();
    h.insert(90);
    h.print();
    h.insert(20);
    h.print();
    h.insert(30);
    h.print();
    h.deleteFromHeap();
    h.print();
    h.deleteFromHeap();
    h.print();
    h.deleteFromHeap();
    h.print();
    h.deleteFromHeap();
    h.print();
    return 0;
}