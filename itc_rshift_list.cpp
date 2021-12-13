#include "easy_list.h"

void itc_rshift_list(vector <int> &a){
    int tmp = a[a.size()-1];
    for(int i = a.size() - 1; i > 0; i--){
        a[i] = a[i - 1];
    }
    a[0] = tmp;
}
