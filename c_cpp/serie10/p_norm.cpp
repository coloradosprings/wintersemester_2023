// Aufgabe 10.6. Sei p, q, m, n ≥ 1, A ∈ R
// n×m gegeben. Die L
// p,q Norm ist durch
// ∥A∥p,q =
// 
// 
// Xm
// j=1 Xn
// i=1
// |ai,j |
// p
// !q/p
// 
// 1/q
// definiert. Erweitern Sie die Klasse Matrix um eine Methode, die die L
// p,q Norm berechnet. Verwenden
// Sie (read-only) Referenzen wo es sinnvoll ist!

double Matrix::frobeniusNorm(){
 double sum = 0;
 for (int i=0; i<getN(); ++i) {
sum_i = 0
 for(int j=0;j<getM(); ++j){

 sum = fabs(coeff[i][j]);
 }
pow(sum_i,p/q);
 }
 return pow(sum,1./p);}