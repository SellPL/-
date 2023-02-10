#include <iostream>
#include <iterator>
#include <list>
using namespace std;

int main(){
    list<int> mylist;
    list<int> listmerge = {15, 85, 74, 5, 6};
    list<int>::iterator it;
    it = mylist.begin();
    mylist.insert(it, 15); it++;
    mylist.insert(it, 45); it++;
    mylist.insert(it, 98);
    cout << "listmerge: ";
    copy(listmerge.begin(), listmerge.end(), ostream_iterator<int>(cout," "));
    cout << endl;
    cout << "mylist: ";
    for (list<int>::iterator it = mylist.begin(); it != mylist.end(); ++it)
    {
        cout << *it << ' ';
    }
    cout << endl;
    cout << "merged lists: ";
    mylist.merge(listmerge);
        for (list<int>::iterator it = mylist.begin(); it != mylist.end(); ++it)
    {
        cout << *it << ' ';
    }
}