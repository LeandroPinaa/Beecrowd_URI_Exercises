#include <bits/stdc++.h>
using namespace std;

int main(){
map<int, string>vetor;
vetor[61] = "Brasilia";
vetor[71] = "Salvador";
vetor[11] = "Sao Paulo";
vetor[21] = "Rio de Janeiro";
vetor[32] = "Juiz de Fora";
vetor[19] = "Campinas";
vetor[27] = "Vitoria";
vetor[31] = "Belo Horizonte";
int N;
cin >> N;
if(vetor.find(N) == vetor.end())
    cout << "DDD nao cadastrado" << endl;
else
    cout << vetor[N] << endl;
    return 0;
}
