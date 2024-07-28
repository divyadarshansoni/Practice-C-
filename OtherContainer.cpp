#include<bits\stdc++.h>
using namespace std;

void explainStack(){
    // stack is similar to what it was in python
    // it is lifo. guy who comes last is first 
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2,1}
    st.push(3); // {3,2,1}
    st.push(3); // {3,3,2,1}
    st.emplace(5); // {5,3,3,2,1}

    cout << st.top();

    st.pop();

    cout << st.top();

    cout << st.size();

    cout << st.empty();

    stack<int> st1,st2;
    st1.swap(st2);
}

void explainQueue(){
    // the first who comes first

    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1,2}
    q.emplace(4); // {1,2,4}

    q.back() += 5; // {1,2,9}
    cout << q.back(); // 9 is printed

    cout << q.front(); // 1 is printed
    q.pop(); // {2,9}

    cout << q.front(); //2 is printed
    
    // size swap empty same as stack
}

void explainPQ(){
    // the hisghest values is at hteh front
    //max heap
    priority_queue<int> pq;
    pq.push(5); //{5}
    pq.push(2); // {5,2}
    pq.push(8); // {8,5,2}
    pq.emplace(10); //{10,8,5,2}

    cout << pq.top();
    pq.pop();
    cout<< pq.top();

    // size, swap,empty same as others
    
    //min heap
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(5); //{5}
    pq2.push(2); // {2,5}
    pq2.push(8); // {2,5,8}
    pq2.emplace(10); //{2,5,8,10}

    cout << pq2.top(); // prints 2
}

void explainSet(){
    // stores exerthing in a sorted manner and only unique values
    // in logarithmic time complexity
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(4);
    s.emplace(3);
    auto it = s.find(3);
    // auto it = s.find(6);

    s.erase(5);

    int cnt = s.count(1);

    // auto it = s.find(3);
    s.erase(it);

    auto it1 = s.find(2);
    auto it2 = s.find(4);
    s.erase(it1,it2);
    // change the name of th evariable everytime, here for simplicity's sake i am using same variable everytime 
    // auto it = s.lower_bound(2);
    // auto it = s.upper_bound(3); 
}

void explainMultiset(){
    //only obeys sorted

    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    ms.erase(1); //all 1 are erased

    int cnt = ms.count(1);

    ms.erase(ms.find(1)); // only a single 1 erased

    //ms.erase(ms.find(1), ms.find(1)+2);
    // rest all functions are same as set
}

void explainUset(){
    unordered_set<int> st;
    // a random order is given here
    // lower and upper bound functions do not work here
    // it also has better t complexity than st in most cases
    //rest all functions are same as set
}

void explainMap(){
    // it is like hash 
    // it stores in a sorted order of key. key is the first element
    map<int, int> mpp;
    // map<int,pair<int,int>> mpp;
    // map<pair<int,int>,int> mpp;

    mpp[1] = 2;
    // mpp.emplace({3, 1});
    
    mpp.insert({2,4});
    // mpp[{2,3}] = 10; for the third  definition 

    for(auto it : mpp){
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1];
    cout << mpp[5];

    auto it = mpp.find(3);
    // cout << *(it).second;

    // auto it = mpp.find(5); //it points to mpp.end()

    // there are upeer and lower bound functions and also all the rest
}

void exlpainMultiMap(){
    // everthing same as a map but only it stores multiple keys
    // only map[key] cannot be used here
}

void explainUnorderedMap(){
    // same as ser and unordered_set difference
    // random insertion
    // works in cont time almost always
}

bool comp(pair<int,int> p1, pair<int,int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    // same wala case
    if(p1.first > p2.first) return true;
    return false;
}

void explainExtra(){
    // there may be a lot of error as there are not variables currently of that implementation 

    sort(a , a+n); // a is start and a+n is end
    sort(v.begin(),v.end());
    sort(a+2,a+4);
    sort(a,a+n,greater<int>);
    
    pair<int,int> a[] = {{1,2},{2,1},{4,1}};

    sort(a,a+n, comp); // comp is the condition we want to sort according to

    int num = 7;
    int cnt = _builtin_popcount();

    long long num = 165786578687;
    int cnt = _builtin_popcountll();

    string s = "123";

    do{
        cout << s << endl;
    }while(next_permutation(s.begin(),s.end()));

    int maxi = *max_element(a,a+n); // similary min element is there 
}

int main(){
    return 0;
}