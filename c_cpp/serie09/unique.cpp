#include <iostream>
#include <vector>
#include <algorithm>    // std::sort
using std::vector;
using std::sort;

vector<double> unique(int k,vector<double> v){
    vector<double> sorted(0);
    int i,j;
    for (i = 0;i < k;i++) {
        
        for (j = 0;j < k;j++) {
    
            if(v[i] == v[j] & i != j){
                
                break;}
                
            else{
                if(j == k - 1){
                sorted.push_back(v[i]);
            }


            }
        }
    }
    sort(sorted.begin(),sorted.end());
    return sorted;
}

int main(){
    int myints[] = {71,12,12,12,26,80,53,33};
    
    vector<double> v1 (myints, myints+8);
    for(int i=0;i< unique(8,v1).size();++i){

    std::cout << unique(8,v1)[i] << " ";
    }


        
        return 1;
}

// Aufgabe 9.2. * Schreiben Sie eine Funktion unique, welche einen Vektor sortiert, die doppelten Eintr¨age
// entfernt, und den gekurzten Vektor zur ¨ uckliefert. Verwenden Sie hierzu den C++-Standardcontainer ¨
// vector. Erkl¨aren Sie die Unterschiede zu Ihrer ersten Implementierung. Speichern Sie den Source-Code
// unter unique.cpp in das Verzeichnis serie09