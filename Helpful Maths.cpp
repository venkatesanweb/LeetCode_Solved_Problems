#include<iostream>
using namespace std;

int main(){
    string s1;
    cin >> s1;

    char arr[s1.length() / 2 + 1];
    int index = 0;

    for(int i = 0; i < s1.length(); i++){
        if(s1[i] != '+'){
            arr[index] = s1[i];
            index++;
        }
    }

    for(int i = 0; i < index; i++){
        for(int j = 0; j < index - i - 1; j++){
            if(arr[j] > arr[j+1]){
                char temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    
    string s = "";
    for(int i = 0; i < index; i++){
        s += arr[i];
        if(i < index - 1) s += '+';
    }

    cout << s;
}

