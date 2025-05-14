#include <iostream>

void solve(){
    long n {0};
    std::cin >> n;
    while (n != 1){
        std::cout<<n<<" ";
        if (n & 1) n= (n<<1) + n + 1;
        else n>>=1;
    }
    std::cout<<n;
}

int main(){
    solve();
}