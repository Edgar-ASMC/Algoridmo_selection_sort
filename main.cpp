#include <iostream>
#include <vector>
#include <string>
using namespace std;

void swap(int & a,int & b){
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(vector<int> &vec){
    int n = vec.size();

    for(int i=0; i<n-1; i++){
        int minval = i;
        for(int j=i+1; j<n; j++){
            if(vec[j] < vec[minval]){
                minval = j;
            }
        }
        if(minval != i){
            swap(vec[i], vec[minval]);
        }
    }
}

int main() {

    vector<int> vec = {5,4,3,2,1};

    selectionSort(vec);

    for(int num:vec){
        cout<<num<<",";
    }

    return 0;
}