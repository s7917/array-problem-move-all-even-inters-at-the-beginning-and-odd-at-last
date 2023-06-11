//give an aarray if integer a movea ll the even integers at the beginning of the array followed by all the odd integers t. the relative order of odd and even integer
// does not mattter
#include<iostream>
#include<vector>
using namespace std;
void evenoddsort(vector<int>&v){
    int left_ptr =0;
    int right_ptr =v.size()-1;
    while(left_ptr<right_ptr)
{
    if(v[left_ptr]%2==1 && v[right_ptr]%2==0){
      swap(v[left_ptr],v[right_ptr]);
      left_ptr++;
      right_ptr--;
    }
    if(v[left_ptr]%2==0){
        left_ptr++ ;

    }
    if(v[right_ptr]%2==1){
        right_ptr--;
    }
}
     return;
}

int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    vector<int>v;
    for(int i=0 ; i<n ; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    evenoddsort(v);
    for(int i=0  ; i<n ; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}
