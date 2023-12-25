#include <iostream>
#include <vector>
#include <algorithm>    // std::sort
using std::vector;
using std::sort;

vector<double> unique(int k,vector<double>& v){
    vector<double> sorted(0);

    sorted.push_back(1);
    std::cout << sorted[0];
    sort(sorted.begin(),sorted.end());
    return sorted;
}

int main(){
      int myints[] = {32,71,12,45,26,80,53,33};
        std::vector<double> vector (myints, myints+8);
        unique(8,vector);
        return 1;}