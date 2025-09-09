# include <iostream>
using namespace std;

void pascal_triangle(int n){

    cout<<"no of rows equals :"<<n<<endl;
    for(int i =0;i<n;i++){
        int value = 1;
        for(int k = 0;k<n-i-1;k++){
            cout<<"  ";
        }
        for(int j =0;j<=i;j++){
            cout<<value<<"   ";
            value = value * (i-j)/(j+1);
        }
        cout<<endl;
    }
}
void test_n(){
    cout<<"Test case 1: "<<endl;
    pascal_triangle(3);
    cout<<endl;
    cout<<endl;
    pascal_triangle(4);
    cout<<endl;
    cout<<endl;
    pascal_triangle(5);
    cout<<endl;
}
void test_verify_rows(){
    bool pass = true;
    int rows[] = {1, 4, 6, 4, 1};
    int n = sizeof(rows)/sizeof(int); 
    int row_index = n - 1; 

    for(int j = 0; j < n; j++){
        int value = 1;
        for(int k = 0; k < j; k++){
            value = value * (row_index - k) / (k + 1);
        }
        if(value != rows[j]){
            pass = false;
            break;
        }
    }

    cout<<"test Case 2(5 rows verification) :"<<endl;
    if(pass){
        cout << "Row " << row_index + 1 << " verification: PASS" << endl;
    } else {
        cout << "Row " << row_index + 1 << " verification: FAIL" << endl;
    }
}

int main(){
    test_n();
    test_verify_rows();

    return 0;
}