#include "easy_list.h"

void itc_rev_list(vector <int> &a) {
    if (a.size() != 0){ int tmp; for (int i = 0; i < a.size() / 2; i++){ tmp = a[i]; a[i] = a[a.size() - i - 1]; a[a.size() - i - 1] = tmp;}}
}
