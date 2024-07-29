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

void merge(vector<int> &arr, int l, int m, int r)
    {
         int left = l;
         int right = m+1;
         vector<int> temp;
         while((left<=m) && (right<=r))
         {
             if(arr[left] <= arr[right]){
                 temp.push_back(arr[left]);
                 left++;
             }
             else{
                 temp.push_back(arr[right]);
                 right++;
             }
         }
         while(left<=m){
             temp.push_back(arr[left]);
             left++;
         }
         while(right<=r){
             temp.push_back(arr[right]);
             right++;
         }
         for(int i = l; i<=r ; i++) arr[i] = temp[i-l];
         
    }
void mergeSort(vector<int> &arr, int l, int r){
    if(l == r) return;
    int m = (l + r)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
}

void MergeSort(){
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

    mergeSort(le,0,le.size()-1);

    cout << "This is the sorted Array" << endl;
    for(auto it: le) cout << it << " ";
    cout << endl;
}

void RecursiveBubble(vector<int> &arr, int n){
    if (n == 1) return;

    int didSwap = 0;
    for (int j = 0; j <= n - 2; j++) {
        if (arr[j] > arr[j + 1]) {
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
            didSwap = 1;
        }
    }

    // if no swapping happens.
    if (didSwap == 0) return;

    //Range reduced after recursion:
    RecursiveBubble(arr, n - 1);
}

void RecursiveBubbleSort(){
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
    
    RecursiveBubble(le, le.size());

    cout << "This is the sorted Array" << endl;
    for(auto it: le) cout << it << " ";
    cout << endl;
}

void RecursiveInsertion(vector<int> &arr, int i, int n){
    if (i == n) return;

    int j = i;
    while (j > 0 && arr[j - 1] > arr[j]) {
        int temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;
        j--;
    }

    RecursiveInsertion(arr, i + 1, n);
}

void RecursiveInsertionSort(){
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
    
    RecursiveInsertion(le, 0, le.size());

    cout << "This is the sorted Array" << endl;
    for(auto it: le) cout << it << " ";
    cout << endl;
}

int partition(vector<int> &arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while((arr[i] <= pivot) && (i<=high)) i++;
        while((arr[j] > pivot) && (j>=low)) j--;
        if(i<j) swap(arr[i], arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}

void quicklysort(vector<int> &arr, int low, int high){
    if(low<high){
        int pI = partition(arr,low,high);
        quicklysort(arr,low,pI-1);
        quicklysort(arr,pI+1,high);
    }
}

void QuickSort(){
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

    quicklysort(le, 0, le.size());

    cout << "This is the sorted Array" << endl;
    for(auto it: le) cout << it << " ";
    cout << endl;
}

int main(){
    // SelectionSort(); //timecomplexity is n^2
    // BubbleSort(); // timecomplexity is n^2
    // InsertionSort(); // timecomplexity is n^2
    // MergeSort(); //time complexity is n*logn  where base of log is 2
    // RecursiveBubbleSort(); // time complexity is n^2
    // RecursiveInsertionSort(); // time complextiy is n^2
    // QuickSort(); //time complexity is n*logn where base of log is 2
    return 0;
}