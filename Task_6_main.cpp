# include <iostream>
using namespace std;

int mode_calculation(int arr[],int size){
    int mode = arr[0];
    int max_occurence =0;
    if(size==0){
        mode =-1;
        return mode;
    }
    for(int i =0;i<size;i++){
        int curr_count =0;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
                curr_count+=1;
            }
        }
        if(curr_count > max_occurence){
            max_occurence = curr_count;
            mode = arr[i];
        }
    }
    return mode;
}
void test_unique_mode(){
    int arr[]={1,2,2,3,3,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    int result = mode_calculation(arr,size);
    if(result==3){
        cout<<"test 1 (unique mode) passed.";
    }else{
        cout<<"test 1 (unique mode) failed"; 
    }
}
void test_multiple_mode(){
    int arr[]={1,2,2,2,3,3,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    int result = mode_calculation(arr,size);
    if(result==2 || result==3){
        cout<<"test 2 (multiple mode) passed.";
    }else{
        cout<<"test 2 (multiple mode) failed"; 
    }
}
void test_empty_array_mode(){
    int arr[1];
    int size =0;
    int result = mode_calculation(arr,size);
    if(result==-1){
        cout<<"test 3 (empty array mode) passed.";
    }else{
        cout<<"test 1 (empty array mode) failed"; 
    }
}

int main(){
    test_unique_mode();
    cout<<endl;
    test_multiple_mode();
    cout<<endl;
    test_empty_array_mode();

    return 0;
}