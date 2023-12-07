#include <bits/stdc++.h> 


int partition(vector<int> &arr, int low ,int high)
{
     int pivot = arr[low];
     int i = low ,j =high;

     while( i<j)
     {
         // find the element from the left portion who is greator the arr[pivot]
         while(pivot>=arr[i] && i <=high-1)
         {
             i++;
         }

         //finding the element from the right who is lesser than arr[pivot]
          while(pivot<arr[j] && j >= low+1)
         {
             j--;
         }
         if(i<j){ swap(arr[i], arr[j]); }
     }
     swap( arr[low], arr[j]);
     return j;

}
void qS( vector<int> &arr , int low , int high)
{
    if(low<high)
    {
        int pIndex = partition( arr,  low , high);
        qS( arr, low , pIndex-1);
        qS( arr, pIndex+1 , high);
    }

}
vector<int> quickSort(vector<int> arr)
{
    // Write your code here.
    qS(arr,0 , arr.size()-1);
    return arr;
}
