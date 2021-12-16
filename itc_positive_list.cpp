#include "easy_list.h"
int itc_positive_list(const vector <int> &a){
    int counter = a.size();
    int Counter = 0;
    if(counter != 0){
        for(int i = 0; i < counter; i++){
            if(a[i] >= 0){
                Counter++;
            }
        }
    }
    return Counter;
}
