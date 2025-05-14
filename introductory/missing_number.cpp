#include<iostream>

void solve(){
    int n {0};
    int nSum {0};
    int num {0};
    std::cin >> n;
    for (int i{1}; i<n; i++){
        std::cin >> num;
        nSum += i-num;
    }
    std::cout<<nSum+n;
}

int main(){
    solve();
    return 0;
}