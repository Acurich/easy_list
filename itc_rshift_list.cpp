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

void itc_lshift(vector <int> &a){
    int counter = a.size();
    vector<int> a2 = a;
    if(counter != 0){
        for(int i = counter - 2; i >= 0; i = i - 2){
            a[i] = a2[i + 1];
            a[i - 1] = a2[i];
        }
        a[counter - 1] = a2[0];
    }
}
