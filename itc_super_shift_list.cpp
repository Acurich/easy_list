#include "easy_list.h"

void itc_super_shift_list(vector <int> &a, int n) {
    if (a.size() != 0){
        if (n >= 0) {
            n = (n + a.size()) % a.size();
            for (int i = 0; i < n; i++)
                itc_rshift_list(a);
        }
        else {
            n = -n;
            n = (n + a.size()) % a.size();
            for (int i = 0; i < n; i++)
                itc_lshift_list(a);
        }
    }
}
