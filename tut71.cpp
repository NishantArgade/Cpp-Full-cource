#include<iostream>
#include<vector>
using namespace std;
//Vectors are sequence containers representing arrays that can change in size.
void display(vector<int> &v){
  for(int i=0;i< v.size();i++)
      
    cout<<v[i]<<" ";
  }
int main(){
    vector<int> vec1;
    int size;
    cin>>size;
  for(int i=0;i<size;i++){
      int element;
      cin>>element;
    vec1.push_back(element);
  }
// //   vec1.pop_back();
// //   vec1.pop_back();
// //   vec1.pop_front();
// vector<int>::iterator iter =vec1.begin();
// vec1.insert(iter+1,500,384);
// vector<int>vec4;
// vector<int>vec2(4);
// vector<int>vec4(vec2);
vector<int>vec4(6,58);

display(vec4);
    return 0;
}