#include "easy_list.h"
void itc_even_index_list(const vector <int> &a1, vector <int> &a2) {
    if (a1.size() != 0)
        for (int i = 0; i < a1.size(); i += 2)
            a2.push_back(a1[i]);
}
