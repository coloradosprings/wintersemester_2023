#include <stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    if(n%2 == 0){
        printf("teilbar durch 2\n");
    }
    if(n%3 == 0){
        printf("teilbar durch 3\n");
    }
    if(n%6 == 0){
        printf("teilbar durch 6\n");
        
    }

}

// Schreiben Sie ein Program, welches eine Zahl x ∈ N := {1, 2, 3, . . . } einliest, ob diese
// durch 2, durch 3 oder durch 6 teilbar ist pruft und das Ergebnis am Bildschirm ausgibt. Speichern Sie ¨
// den Source-Code unter teiler.c in das Verzeichnis serie02.