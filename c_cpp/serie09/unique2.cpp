#include <iostream>
#include <vector>
#include <algorithm>    // std::sort
using std::vector;
using std::sort;

vector<double> unique(int k,vector<double> v){
    sort(v.begin(),v.end());
    int i,j;
    for (i = 0;i < k;i++) {
        if{v[i] == v[i + 1]}(
            
        )
    }

    return v;
}

int main(){
    int myints[] = {32,71,12,45,26,80,53,33};
    
    vector<double> v1 (myints, myints+8);

    unique(8,v1);
    // for(int i=0;i< unique(8,v1).size();++i){

    // std::cout << unique(8,v1)[i] << " ";
    // }


        
        return 1;
}

// Aufgabe 9.2. * Schreiben Sie eine Funktion unique, welche einen Vektor sortiert, die doppelten Eintr¨age
// entfernt, und den gekurzten Vektor zur ¨ uckliefert. Verwenden Sie hierzu den C++-Standardcontainer ¨
// vector. Erkl¨aren Sie die Unterschiede zu Ihrer ersten Implementierung. Speichern Sie den Source-Code
// unter unique.cpp in das Verzeichnis serie09