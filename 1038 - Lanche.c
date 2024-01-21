#include <bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
cout << setprecision(2) << fixed;
map<int, double>vetor;
vetor[1] = 4.00;
vetor[2] = 4.50;
vetor[3] = 5.00;
vetor[4] = 2.00;
vetor[5] = 1.50;
int N,qtd;
cin>>N>>qtd;
cout << "Total: R$ " << vetor[N]*qtd << endl;
    return 0;
}
