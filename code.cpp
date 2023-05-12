#include<iostream>
using namespace std;



// void printArray(int arr[], int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// void changeArray(int arr[], int size){
//     arr[0]=10;
//     arr[1]=20;
//     arr[2]=30;
// }




// bool find(int arr[], int size, int key){
//     int flag = 0;
//     for(int i=0;i<size;i++){
//         if(arr[i]==key){
//             flag=1;
//         }
//     }
//     return flag;
// }





// void foundNoOfZeroAndOne(int arr[], int size){
//     int zero=0, one=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]==0){
//             zero++;
//         }
//         else{
//             one++;
//         }
//     }

//     cout<<"Number of Zero : "<<zero<<endl;
//     cout<<"Number of one : "<<one;
// }





// int findMax(int arr[], int size){
//     int max = arr[0];
//     for(int i=1;i<size;i++){
//         if(arr[i]>max){
//         max = arr[i];
//         }
//     }
//     return max;
    
// }









int main(){
    // int array[10];
    // cout<<array<<endl;
    // cout<<&array;


    // int array[8] = {1,2,3,4,5,6};
    // cout<<array[0]<<endl;
    // cout<<array[1]<<endl;
    // cout<<array[2]<<endl;
    // cout<<array[3]<<endl;
    // cout<<array[4]<<endl;
    // cout<<array[5]<<endl;
    // cout<<array[6]<<endl;
    // cout<<array[7]<<endl;
    // cout<<array[8];




    // int array[8] = {1,2,3,4,5,6};
    // for(int i=0;i<6;i++){
    //     cout<<array[i]<<endl;
    // }


    // int array[10];
    // for(int i=0;i<10;i++){
    //     cout<<"Enter value at "<<i<<"th position : ";
    //     cin>>array[i];
    //     cout<<endl;
    // }
    // // printing values
    // for(int i=0;i<10;i++){
    //     cout<<array[i]<<endl;
    // }



    // int arr[] = {1,2,3};
    // int size=3;
    // cout<<"Array before change is : ";
    // printArray(arr,size);
    // changeArray(arr,size);
    // cout<<"Array before change is : ";

    // printArray(arr,size);



    // int arr[5] = {1,2,3,4,5};
    // int key, size = 5;

    // cout<<"Enter the key to find : ";
    // cin>>key;

    // if(find(arr,size,key)){
    //     cout<<"Found";
    // }
    // else{
    //     cout<<"Not found";
    // }




    // int arr[8] = {1,2,3,4,5,6,7,8};
    // int key, size = 8;
    // int flag=0;

    // cout<<"Enter the key to find : ";
    // cin>>key;

    // for(int i=0; i<size;i++){
    //     if(arr[i] == key){
    //         flag=1;
    //     }
    // }

    // if(flag){
    //     cout<<"Found";
    // }
    // else{
    //     cout<<"Not Found";
    // }




    // int arr[10] = {0,1,1,1,1,1,0,0,1,0};
    // int size=10;

    // foundNoOfZeroAndOne(arr,size);



    // int arr[10] = {1,5,12,4,56,23,6,9,67,35};
    // int size = 10;

    // int max = findMax(arr,size);
    
    // cout<<"Maximum no is : "<<max;




    // int arr[11] = {1,2,3,4,5,6,7,8,9,10,11};
    // int size = 11;
    // // for(int i=0, j=size-1;i<=size/2, j>=size/2;i++,j--){
    // //     cout<<arr[i]<<" "<<arr[j]<<" ";
    // // }

    // int start =0,end=size-1;

    // while(true){
    //     if(start > end)
    //         break;
    //     if(start==end){
    //         cout<<arr[start];
    //         break;
    //     }
    //     else{
    //         cout<<arr[start]<<" ";
    //         cout<<arr[end]<<" ";
    //     }

        
    //     start++;
    //     end--;
        
    // }



    int arr[8] = {1,2,3,4,5,6,7,8};
    int size=8;

    int start=0, end=size-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    

    cout<<"Printing Array";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }





    return 0;

}