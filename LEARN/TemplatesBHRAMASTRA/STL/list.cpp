#include <iostream>
#include <list>

using namespace std;



void display(list<int> &lst){
    list<int> :: iterator it;
    for (it=lst.begin(); it!=lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
}

int main(){
    
    
    list<int> list1;
    list1.push_back(5);
    list1.push_back(4);
    list1.push_back(3);
    list1.push_back(2);
    
    display(list1);
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(3);//for removing specific data even it is repeated and its fast //
//sorting the list//
    list1.sort();

    display(list1);


    list<int> list2(3);
    list<int> :: iterator iter;
    iter = list2.begin();//pointing at the first element //
    *iter=45;
    iter++;
    *iter=6;
    iter++;
    *iter=9;
    iter++;
    display(list2);

    list1.merge(list2);
    list1.sort();
    cout<<"After Merging: "<<endl;
    display(list1);

    list1.reverse();
    display(list1);
    
    



    return 0;
}