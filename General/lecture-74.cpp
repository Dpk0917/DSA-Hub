#include <iostream>
using namespace std;

class heap {
public:
    int arr[100];
    int size;

    heap() {
        arr[0] = -1;  // not used
        size = 0;
    }

    void insert(int value) {
        size++;
        int index = size;
        arr[index] = value;

        // Move up until parent is bigger
        while (index > 1) {
            int parent = index / 2;

            if (arr[parent] < arr[index]) {
                swap(arr[parent], arr[index]);
                index = parent;
            } else {
                return;
            }
        }
    }

    void display() {
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deleteRoot() {
        if (size == 0) {
            cout << "Nothing to delete" << endl;
            return;
        }

        // Replace root with last element
        arr[1] = arr[size];
        size--;

        int i = 1;
        while (i <= size) {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;
            int largest = i;

            if (leftIndex <= size && arr[largest] < arr[leftIndex]) {
                largest = leftIndex;
            }
            else if (rightIndex <= size && arr[largest] < arr[rightIndex]) {
                largest = rightIndex;
            }
            else{
                return ;
            }
           
        }
    }
};

void heapify(int arr[],int n,int i){
    int largest=i;
    int left=2*i;
    int right=2*i+1;

    if(left<=n && arr[left]>arr[largest]){
        largest=left;
    }
    if(right<=n && arr[right]>arr[largest]){
        largest=right;
    }
    if(largest!=i){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}

void heapsort(int arr[], int n) {
    
    int size=n;

    while(size>1){

        // step1
        swap(arr[size],arr[1]);
        size--;

        // step2
        heapify(arr,size,1);
    }
}

int main() {
    heap h;
    h.insert(10);
    h.insert(20);
    h.insert(30);
    h.display();   // 30 10 20

    h.deleteRoot();
    h.display();   // 20 10

    int arr[6]={-1,54,53,55,52,50};
    int n=6;
    
    // heapcreation
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }

    // heap sort
    heapsort(arr,n);
    
    cout<<"Printing the array now "<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    return 0;
}
