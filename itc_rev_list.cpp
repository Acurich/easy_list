#include "easy_list.h"

void itc_rev_list(vector <int> &a){
    int tmp;
    for(int i = 0; i <= a.size() / 2 - 1 + (a.size()%2); i++){
        tmp = a[i];
        a[i] = a[a.size() - 1 - i];
        a[a.size() - 1 - i] = tmp;
    }
}
