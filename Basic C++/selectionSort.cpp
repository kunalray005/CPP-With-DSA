// #include<iostream>
// using namespace std;
// void selectionSort(int arr[],int n){
//     for(int i=0;i<=n-2;i++){
//         int min=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[min]){
//                 min=j;
//             }
//         }
//         if(min!=i){
//             swap(arr[i],arr[min]);
//         }

//     }
// }

// void displayArray(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     int arr[5]={23,5,67,2,1};
//     int arr2[6]={26,8,7,23,90,7};
//     selectionSort(arr,5);
//     displayArray(arr,5);
//     cout<<endl;
    
    
//     selectionSort(arr2,6);
//     displayArray(arr2,6);
// }


// Descending order sorting ussing selection sort
#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[min]){              // change the eqaulity sign
                min=j;
            }
        }
        if(min!=i){
            swap(arr[i],arr[min]);
        }

    }
}

void displayArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5]={23,5,67,2,1};
    int arr2[6]={26,8,7,23,90,7};
    selectionSort(arr,5);
    displayArray(arr,5);
    cout<<endl;
    
    
    selectionSort(arr2,6);
    displayArray(arr2,6);
}




































