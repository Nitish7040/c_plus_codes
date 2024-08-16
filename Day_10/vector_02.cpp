#include <iostream>
#include <vector>
using namespace std;

int main()
{
vector <double> d;
d={1.2,8.5,4,7,4};
cout<<"capacity"<<d.capacity();

// insert elements in array :- 
d.push_back(100);
for(int j:d)
cout<<j<<endl;

d.insert(d.begin(),500);
cout<<endl;

d.insert(d.begin()+2,500);
for(int k:d)
cout<<"d "<<k<<endl;

return 0;
}