#include "easy_list.h"

void itc_super_shift_list(vector <int> &a, int n){
    n %= a.size();
    int tmp;
    long long chislo;
    for(int i = 0; i < a.size(); i++){
        chislo = i - n;
        if(chislo < 0){
            chislo = a.size() + chislo;
        }else if(chislo > a.size() -1){
            chislo = chislo  - a.size;
        }
        tmp = a[i];
        a[i] = a[chislo];
        mass[chislo] = tmp;
    }
}
