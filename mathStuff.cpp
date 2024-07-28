#include<bits/stdc++.h>
using namespace std;

void countdigitinainteger(){
    // t complexity is log10(i).  Input is divided by 10 so the base will be 10
    int i,count = 0;
    cin >> i;
    
    while(i>0){
        count ++;
        i = i/10;
    }

    cout << count << endl; 
}

void countofdigitwithlog(){
    // time complexity = O(constant)
    int i,count = 0;
    cin >> i;
    count = (int)(log10(i)) + 1;
    cout << count << endl;
}

void reverseAnumber(){
    int i,reverse_i = 0;
    cin >> i;
    while(i>0){
        reverse_i = reverse_i*10 + (i%10);
        i = i/10;
    }
    cout << reverse_i;
}

void check_palindrome(){
    int i,j,a = 0;
    cin >> i;
    j = i;
    while(j>0){
        a = a*10 + j%10;
        j = j/10;
    }
    if(i == a) cout << "Yes";
    else cout << "No";
}

void armstrongNumber(){
    int i,j,a=0;
    cin >> i;
    j=i;
    while(j>0){
        int l = j%10;
        a += pow(l,3);
        j = j/10;
    }
    if(i == a){ 
        cout << "Yes";
    } else {
        cout << "No";
    }
}

void printalldivisiors(){
    int i;
    vector<int> ls;
    cin >> i;
    for(int j=1 ; j*j <= i ; j++)
    {
        if(i%j==0)
        {
            ls.push_back(j);
            if(i/j != j)
            {
                ls.push_back(i/j);
            } 
        }
    }
    sort(ls.begin(), ls.end());
    for(auto it : ls) cout << it << " ";
}

void prime(){
    int i,count = 0;
    cin >> i;
    for(int j = 1; j*j <= i; j++)
    {
        if(i%j == 0)
        {
            count += 1;
            if(i/j != j)
            {
                count +=1;
            }
        }
    }
    if(count == 2) cout << "Is a Prime";
    else cout << "Not a Prime";
}

// int helper(int a,int b){
//     if(a%b == 0) return b;
//     if(b%a == 0) return a;
//     return helper(max(a,b)%min(a,b),min(a,b));
// }
// void HCF(){
//     int a, b;
//     cin >> a >> b;
//     int res = helper(a,b);
//     cout << res;
// }
void HCF(){
    int a, b;
    cin >> a >> b;
    while(a > 0 && b > 0)
    {
        if(a > b) a = a % b;
        else b = b % a;
    }
    if(a == 0) cout << b;
    cout << a;
}

int main(){
    // countdigitinainteger();
    // countofdigitwithlog();
    // reverseAnumber();
    // check_palindrome();
    // armstrongNumber();
    // printalldivisiors();
    // prime();
    HCF();
    return 0;
}


#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        int n, k;
        cin >> n >> k;
        int arr[n][n];
        for(int i = 0; i<n ; i++)
        {
            for(int j=0;j<n;j++)
            {
                cin >> arr[i][j];
            }
        }
        
        int a = n/k;
        int res[n/a][n/a];
        for(int i=0;i<n;i=i+a)
        {
            for(int j=0;j<n;j=j+a)
            {
                res[i][j] == arr[i][j];
            }
        }
        
        for(int i = 0; i<n/a ; i++)
        {
            for(int j=0;j<n/a;j++)
            {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}