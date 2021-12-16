#include "easy_list.h"

void itc_super_shift_list(vector <int> &a, int n){
    int counter = a.size();
    if(counter != 0){
        if(n >= 0){
            n = (n + counter) % counter;
            for(int i = 0; i< n; i++){
                itc_rshift_list(a);
            }
        }
        else{
            n = n * -1;
            n = (n + counter) % counter;
            for(int i = 0; i < n; i++){
                itc_lshift(a);
            }
        }
    }
}
