#include "easy_list.h"

bool itc_same_parts_list(const vector <int> &a){
    int counter = a.size(), c = 0;
    if(counter != 0){for(int i = 0; i < counter; i++){ if(a[i] < 0 and a[i + 1] < 0){ c++;} if(a[i] >= 0 and a[i + 1] >= 0 and i + 1 < counter){c++;}}}
    if(c > 0){return true;}
    return false;
}
