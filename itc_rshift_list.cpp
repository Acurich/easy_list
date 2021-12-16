#include "easy_list.h"

void itc_rshift_list(vector <int> &a) {
    if (a.size() != 0){
        vector <int> a2(a.size());
        a2[0] = a[a.size() - 1];
        for (int i = 1; i < a.size(); i++)
            a2[i] = a[i - 1];
        a = a2;
    }
}
