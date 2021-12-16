#include "easy_list.h"

void itc_rev_par_list(vector <int> &a) {
    if (a.size() != 0){
        int tmp;
        for (int i = 1; i < a.size(); i += 2){
            tmp = a[i];
            a[i] = a[i - 1];
            a[i - 1] = tmp;
    }
    }
}
