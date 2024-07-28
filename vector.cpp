#include<bits/stdc++.h>
using namespace std;

// vector are dynamic in nature, so u can always increase the size of vector
int main(){
    vector<int> v;
    
    // push_back will add that values in the vector.
    // emblace back dynamically inreaces the size dynamically and add the value in the vector. Also it is faster than oush_back

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>> vec;

    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int> x(5,100); // 5 is size with 100 {100, 100, 100, 100, 100}
    vector<int> m(5); // a container of size 5, you can increase the size even after 5 instances 
    vector<int> v1(5,20); // a container of 5 instances of 20
    vector<int> v2(v1); // to copy v1 container to some other container

    cout << v[0] << " " << v.at(0) << endl; // index system is similar to what u already know

    vector<int>::iterator it = v.begin();  // iterator points directly to the memory
    it++;
    cout << *(it) << " "; // * is used to access the memory

    cout << endl;

    it = it+2;
    cout << *(it) << " ";
 
    // In similar fashion
    // vector<int>::iterator it = v.end();  to start from the end
    // vector<int>::iterator it = v.rend();  to reverse end so after reversing the container we go to the end
    // vector<int>::iterator it = v.rbegin(); to reverse begin so after reversing the container we go to the begin
    
    cout << v.back() << endl; // the last index

    for(vector<int>::iterator it = v.begin(); it!=v.end(); it++){
        cout << *(it) << " ";
    }

    for(auto it = v.begin(); it != v.begin(); it++){
        cout << *(it) << " ";
    }

    for(auto it :v){
        cout << it << " "; // printing will result in a lot of garbage values so be careful
    }

    v.erase(v.begin()+1); // single element deleted
    v.erase(v.begin()+2, v.begin()+4); // start is included but end is not included

    vector<int> w(2,100);//{100,100}
    w.insert(w.begin(),300);//{300,100,100}
    w.insert(w.begin()+1,2,10);//{300,10,10,100,100}

    vector<int> copy(2,50);
    w.insert(w.begin(), copy.begin(), copy.end()); // {50,50,300,10,10,100,100}

    cout << v.size();

    v.pop_back();//last element deleted

    v1.swap(v2); // v1 -> {30,40}, v2 -> {10,20}

    v.clear(); //erases the entire vector

    cout << v.empty();  

    return 0;
}