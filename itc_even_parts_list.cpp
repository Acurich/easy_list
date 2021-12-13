void itc_even_parts_list(const vector <int> &a1, vector <int> &a2){
    for(int i = 0; i < a1.size(); i++){
        if(a1[i] % 2 == 0){
            a2.push_back(a1[i]);
        }
    }
}
