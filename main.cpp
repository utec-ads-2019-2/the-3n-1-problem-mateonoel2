#include <iostream>

using namespace std;

int process(int n){
    int contador = 1;
    while (n != 1) {
        if (n % 2 != 0) {
            n = 3 * n + 1;
            contador+=1;
        }
        else {
            n = n / 2;
            contador+=1;
        }
    }
    return contador;
}

int extraNumber(int i, int j){
    int max = 0;
    if(i<j){
        for(int n=i; n<=j ;n++){
            if (max < process(n)){
              max=process(n);
            }
        }
        return max;
    }
    else{
        for(int n=j; n<=i ;n++){
            if (max < process(n)){
                max=process(n);
            }
        }
        return max;
    }
}

int main() {
   int i, j;
    while(cin>>i>>j){
        cout<< i<<" "<< j<<" ";
        cout<<extraNumber(i, j)<<'\n';
    }
    return 0;
}
