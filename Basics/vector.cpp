#include <vector>
#include <iostream>
using namespace std;

int main() {

  vector <int> vec(3,100);

  cout<<"vector size: "<<vec.size()<<endl;
  cout<<"Is empty: "<<vec.empty()<<endl;
  cout<<"firs element: "<<vec.at(0)<<endl;

  vec.pop_back(); //Remove final element
  cout<<"vector size: "<<vec.size()<<endl;
  cout<<"Final element: "<<vec.back()<<endl;

  vec.clear(); //Remove all elements
  cout<<"Vector size: "<<vec.size()<<endl;

  vec.push_back(200); //Remove final elements
  cout<<"vector size: "<<vec.size()<<endl;
  cout<<"First Element: "<<vec.front()<<endl;


  return 0;
}
