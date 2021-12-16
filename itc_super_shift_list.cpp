#include "easy_list.h"
void itc_abs(int & a)
{
    if (a < 0)
        a *= -1;
}
void itc_rshift_list(vector <int> & a)
{
    int len = a.size();
    if (len != 0)
    {
        vector <int> res(a);
        res[0] = a[len - 1];
        for (int i = 1; i < len; i++)
        {
            res[i] = a[i - 1];
        }
        a = res;
    }
}

void itc_lshift_list(vector <int> & a)
{
    int len = a.size();
    if (len != 0)
    {
        vector <int> res(len);
        res[len - 1] = a[0];
        for (int i = 0; i < len - 1; i++)
        {
            res[i] = a[i + 1];
        }
        a = res;
    }
}

void itc_super_shift_list(vector <int> & a, int n)
{
    if (n >= 0)
    {
        for (int i = 0; i < n; i++)
        {
            itc_rshift_list(a);
        }
    }
    else
    {
        get_abs(n);
        for (int i = 0; i < n; i++)
        {
            itc_lshift_list(a);
        }
    }
}
