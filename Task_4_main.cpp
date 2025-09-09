#include <iostream>
#include <string>
using namespace std;

int first_sub_string_occurence(const string &text, const string &pattern) {
    if(pattern.empty()){ 
        return 0; 
    }

    int n = text.length();
    int m = pattern.length();
    for(int i = 0; i <= n - m; i++) {
        int j;
        for(j = 0; j < m; j++) {
            if(text[i + j] != pattern[j]){ 
                break;
            }
        }
        if(j == m){
            return i;
        }     
    }

    return -1; 
}


int main() {
    test_beginning();
    test_end();
    test_not_present();
    test_empty();
    return 0;
}
