#include<bits/stdc++.h>
using namespace std;

void explainList() {
    list<int> ls;

    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2,4}

    ls.push_front(5); // {5,2,4}
    ls.emplace_front(); // {2,4}
    
    list<int>::iterator it = ls.begin();
    it ++;
    cout << *(it) << " ";

    //rest all function are like vectors
}
void explainDeque() {
    deque<int> dq;

    dq.push_back(2); // {2}
    dq.emplace_back(4); // {2,4}

    dq.push_front(5); // {5,2,4}
    dq.emplace_front(); // {2,4}

    //rest all function are like vectors
}

int main() {
    explainList();

    return 0;
}

// "Deque is also exactly similar to vector and list"