#include "easy_list.h"
int itc_positive_list(const vector <int> &a){
    int result = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] >= 0){
            result++;
        }
    }
    return result;
}
