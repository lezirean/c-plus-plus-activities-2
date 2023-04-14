#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    //int T; cin >> T;


    int times = 0;
    int num; cin >> num;
    string stars; cin >> stars;

    // find the index of first 0
    int index = -1;
    for(int i = 0; i < num; i++){
        if(stars[i] == '0'){
            index = i;
            break;
        }
    }

    while(index != -1){
        ++times;
        for(int i = index; i < num; i++){
            if(stars[i] == '0'){
                stars[i] = '1';
            } else {
                stars[i] = '0';
            }
        }

        for(int i = 0; i < num; i++){
            if(stars[i] == '0'){
                index = i;
                break;
            }
        }
    }

    cout << times;


    return 0;
}
