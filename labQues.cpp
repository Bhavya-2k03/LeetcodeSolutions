#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
 
int partition(int arr[], int start, int end)
{
    int pivot = arr[start];
    int count = 0;
    for (int i = start + 1; i <= end; i++) 
    {
        if (arr[i] <= pivot) count++;
    }
 
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    int i = start, j = end;
 
    while (i < pivotIndex && j > pivotIndex) 
    {
        while (arr[i] <= pivot) i++;
        while (arr[j] > pivot) j--;
        if (i < pivotIndex && j > pivotIndex) swap(arr[i++], arr[j--]);
    }
 
    return pivotIndex;
}
 
void quickSort(int arr[], int start, int end)
{
    if (start >= end) return;
    int p = partition(arr, start, end);
    quickSort(arr, start, p - 1);
    quickSort(arr, p + 1, end);
}

int main()
{
    cout<<"Enter class strength: "<<endl;
    int class_strength;
    cin>>class_strength;

    int *arr=new int[class_strength];
    for (int i = 0; i < class_strength; i++)
    {
        cout<<"Enter marks: "<<endl;
        int temp;
        cin>>temp;
        arr[i]=temp;
    }

    quickSort(arr,0,class_strength-1);
    
    int count=0;
    for (int i = 0; i < class_strength; i++)
    {
        if(arr[i]==arr[i+1]) count++;
        else
        {
            cout<<"count of marks: "<<arr[i]<<" is "<<count+1<<endl;
            count=0;
        }
    }
    
return 0;
}