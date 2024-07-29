#include<bits\stdc++.h>
using namespace std;

void SelectionSort(){
    vector<int> le;
    int i;
    cout << "Enter the number of elements in the array: ";
    cin >> i;
    for(int j =1; j<=i ;j++)
    {
        int a;
        cout << "Enter element: ";
        cin >> a;
        le.push_back(a);
    }
    cout << "The Array you gave is this" << endl;
    for(auto it : le) cout << it << " ";
    cout << endl;

    for(int j=0 ; j<i ; j++)
    {
        int mini = j;
        for(int a=j+1; a<i ; a++)
        {
            if(le[mini] > le[a]) mini = a;
        }
        int temp = le[mini];
        le[mini] = le[j];
        le[j] =temp;
    }

    cout << "This is the sorted Array" << endl;
    for(auto it: le) cout << it << " ";
    cout << endl;
}

void BubbleSort(){
    vector<int> le;
    int i;
    cout << "Enter the number of elements in the array: ";
    cin >> i;
    for(int j =1; j<=i ;j++)
    {
        int a;
        cout << "Enter element: ";
        cin >> a;
        le.push_back(a);
    }
    cout << "The Array you gave is this" << endl;
    for(auto it : le) cout << it << " ";
    cout << endl;

    for(int j=0;j<i;j++){
        int count = 0;
        for(int a=0;a<i-j-1;a++)
        {
            if(le[a] > le[a+1]){
                int temp = le[a+1];
                le[a+1] = le[a];
                le[a] = temp;
                count = 1;
            }
        }
        if(count == 0) break;
    }

    cout << "This is the sorted Array" << endl;
    for(auto it: le) cout << it << " ";
    cout << endl;
}

void InsertionSort(){
    vector<int> le;
    int i;
    cout << "Enter the number of elements in the array: ";
    cin >> i;
    for(int j =1; j<=i ;j++)
    {
        int a;
        cout << "Enter element: ";
        cin >> a;
        le.push_back(a);
    }
    cout << "The Array you gave is this" << endl;
    for(auto it : le) cout << it << " ";
    cout << endl;

    for(int j=0 ; j<i ; j++)
    {
        int a = j;
        while((le[a] < le[a-1]) && (a>0))
        {
            int temp = le[a];
            le[a] = le[a-1];
            le[a-1] = temp;
            a--;
        }
    }

    cout << "This is the sorted Array" << endl;
    for(auto it: le) cout << it << " ";
    cout << endl;
}

int main(){
    // SelectionSort(); //timecomplexity is n^2
    // BubbleSort(); // timecomplexity is n^2
    // InsertionSort();
    return 0;
}