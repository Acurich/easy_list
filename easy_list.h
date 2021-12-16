#ifndef EASY_LIST_H_INCLUDED
#define EASY_LIST_H_INCLUDED
#include <iostream>
#include <vector>
#include <string>
using namespace std;


void itc_abs(int & a);
void itc_even_index_list (const vector <int> &a1, vector <int> &a2);
void itc_even_parts_list(const vector <int> &a1, vector <int> &a2);
int itc_positive_list(const vector <int> &a);
int itc_sl_list(const vector <int> &a);
bool itc_same_parts_list(const vector <int> &a);
void itc_rev_list(vector <int> &a);
void itc_rev_par_list(vector <int> &a);
void itc_rshift_list(vector <int> &a);
void itc_super_shift_list(vector <int> &a, int n);
void itc_lshift(vector <int> &a);

#endif // EASY_LIST_H_INCLUDED
