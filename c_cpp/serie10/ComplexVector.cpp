

// Aufgabe 10.1. * Schreiben Sie eine Klasse ComplexVector zur Speicherung von Vektoren v = (v1, . . . , vn) ∈
// C
// n fur ¨ n ∈ N. Implementieren Sie folgende Methoden:
// • Konstruktor ComplexVector(int n, Complex z)
// • size(), welche die L¨ange n zuruckgibt ¨
// • Zugriffsmethoden void setEntry(int i, Complex z) und Comlpex getEntry(int i)
// Sie durfen die Klasse ¨ Complex (Skriptum, Folie 56) verwenden. Verwenden Sie const und Referenzen wo
// n¨otig. Implementieren Sie außerdem folgende Funktionen
// • Complex scalarProduct(ComplexVector u, ComplexVector v), welche das Skalarprodukt
// u · v =
// Xn
// i=1
// aibi ∈ C
// berechnet
// • ComplexVector sum(ComplexVector u, ComplexVector, v), welche die Summe von zwei Vektoren berechnet.
// Verwenden Sie (read-only) Referenzen wo es sinnvoll ist!
// Das Produkt zweier komplexer Zahlen a = ar + iai
// , b = br + ibi ∈ C ist durch
// ab = arbr − aibi + i(arbi + aibr)