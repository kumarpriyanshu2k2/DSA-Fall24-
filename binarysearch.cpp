#include <iostream>
using namespace std;
int binarySearch(int arr,int size,int key){
    int start=0;
    int end = size-1;
    int mid = (start+end)/2;
    while(start<=end){
        if(key==arr[mid])return mid;
        if(key>arr[mid])start=mid+1;
        if(key<arr[mid])end=mid-1;
        mid=(start+end)/2;


    }
    return -1;

}
int main(){
    int even[6]={2,4,6,8,12,18};
    int odd[5] ={3,8,11,14,16};

    return 0;
}
// above code is not complete, you have to complete it.