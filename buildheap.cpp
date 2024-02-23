#include<iostream>

int heapify(vector<int>& arr,int N,int i){
    int largest = i;
    int l = 2*i+1;
    int r = 2*i+2;
    if(l<N && arr[l]>arr[largest]){
        largest = l;
    }
    if(r<N && arr[r]>arr[largest]){
        largest = r;
    }
    if(largest!=i){
        swap(arr[i],arr[largest]);
    }
    heapify(arr,N,largest);
}
void buildHeap(vector<int>&arr,int N){
    
    for(int i=N/2-1;i>=0;i--){
        heapify(arr,N,i);
    }

}
void printHeap(int arr[],int N){
    cout<<"the elements of the array are"<< endl;
    for(int i=0;i<=N;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";


}
int main(){
    int arr[]={1,2,4,5,7,12,14,15};
    int N = sizeof(arr)/sizeof(arr[0]);
    buildHeap(arr,N);
    printHeap(arr,N);
}