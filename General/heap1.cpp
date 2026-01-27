#include <iostream>
#include <queue>

using namespace std;


class Heap{
    public:
    int arr[100];
    int size;

    Heap(){
        arr[0]=-1;
        size=0;
    }
    void insert(int val){
        size++;
        int index=size;
        arr[index]=val;

        while(index>1){
            int parent=index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }else{
                return;
            }
        }
  
    }

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }

    void deletefromheap(){
        if(size==0){
            cout<<"Nothing to delete"<<endl;
            return;
        }

        arr[1]=arr[size];
        size--;

        int i=1;

        while(i<size){
            int left=2*i;
            int right=2*i+1;

            if(left<size && arr[i]<arr[left]){
                swap(arr[i],arr[left]);
                i=left;
            }else if(right<size && arr[i]<arr[right]){
                swap(arr[i],arr[right]);
                i=right;
            }else{
                return;
            }
        }
    }

    void heapify(int arr[],int size,int i){
        int largest=i;
        int left=2*i;
        int right=2*i+1;

        if(left<=size && arr[largest]<arr[left]){
            largest=left;
        }
        if(right<=size && arr[largest]<arr[right]){
            largest=right;
        }

        if(largest!=i){
            swap(arr[i],arr[largest]);
            heapify(arr,size,largest);
        }
    }


    void heapsort(int arr[],int n){
        int size=n;
        while(size>1){
            swap(arr[1],arr[size]);
            size--;
            heapify(arr,size,1);
        }
    }



    
};
int main(){
    Heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    h.print();


    h.deletefromheap();
    h.print();

    int arr[6]={-1, 54, 53, 55, 52, 50};
    int n=5;

    for(int i=n/2;i>0;i--){
        h.heapify(arr,n,i);
    }

    h.heapsort(arr,n);

    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    cout<<"priority queue"<<endl;
    priority_queue<int> pq;

    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(50);

   cout<<"size of priority queue is "<<pq.size()<<endl;
   cout<<"top element of priority queue is "<<pq.top()<<endl;
   pq.pop();
   cout<<"top element of priority queue is "<<pq.top()<<endl;

   if(pq.empty()){
    cout<<"priority queue is empty"<<endl;
   }else{
    cout<<"priority queue is not empty"<<endl;
   }


   //min heap
   priority_queue<int,vector<int>,greater<int>> minheap;
   minheap.push(10);
   minheap.push(20);
   minheap.push(30);
   minheap.push(40);
   minheap.push(50);

   cout<<"size of min heap is "<<minheap.size()<<endl;
   cout<<"top element of min heap is "<<minheap.top()<<endl;
   minheap.pop();
   cout<<"top element of min heap is "<<minheap.top()<<endl;

   if(minheap.empty()){
    cout<<"min heap is empty"<<endl;
   }else{
    cout<<"min heap is not empty"<<endl;
   }

   
    return 0;

}