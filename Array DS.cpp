#include <iostream>
using namespace std;
//Array Data Structure
void Traverse(int *arr){
    cout<<endl<<"Array:"<<endl;
    for(auto i=0;i<6;i++)
        cout<<arr[i]<<endl;
}
void Insertion(int *arr){
    for(int i=5;i>=3;i--)
        arr[i+1]=arr[i];
    arr[3]=4;
    Traverse(arr);
}
void Deletion(int* arr){
    int k=3;
    for(int i=k-1;i<6;i++)
        arr[i]=arr[i+1];
    Traverse(arr);
}
void Search(int x,int* arr) {
    int i;
    for (i = 0; i < 6; i++) {
        if (arr[i] == x)
            cout << "Found " << x << " at Position " << i + 1 << endl;
    }
}
void Update(int pos,int val,int* arr){
    arr[pos-1]=val;
    Traverse(arr);
}

int main() {
    int arr[10]={1,2,3,5,6};
    //Traverse
    Traverse(arr);
    //Insertion
    Insertion(arr);
    //Deletion
    Deletion(arr);
    //Search
    Search(2,arr);
    //Update
    Update(3,3,arr);
    return 0;
}
