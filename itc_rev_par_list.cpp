#include "easy_list.h"

void itc_rev_par_list(vector <int> &a){
    int tmp;
    for(int i = 0; i < a.size() - 1; i+=2){
        tmp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = tmp;
    }
}
