#include<iostream>
#include<utility>  // for std::pair

// <bits/stdc++.h> has all the libraries, so u don't need to add libraries again and again
// pairs are in the utility library
// stl has four parts Algorithms, containers, functions and iterators
int main(){
    // if the using namespace is not used u have to do the functions as std::cout
    std::pair<int, int> p ={1, 3};

    std::cout << p.first << " " << p.second << std::endl;

    std::pair<int,std::pair<int, int>> q = {1,{3,4}};

    std::cout << q.first << " " << q.second.second << " " << q.second.first << std::endl;

    std::pair<int, int> arr[] = {{1,2}, {2,5}, {5,1}};

    for (int i = 0; i < 3; ++i) {
        std::cout << arr[i].first << " " << arr[i].second << std::endl;
    }

    return 0;
}