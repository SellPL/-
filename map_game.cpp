#include <map>
#include <iostream>
#include <iterator>
using namespace std;

int main(){
    int num; int i; int j; int L;
    map<int, int> houses;
    cout << "How many houses are on the street? ";
    cin >> num;
    for (i = 0; i < num; i++)
    {
        cout << "What is this house's number? ";
        cin >> L;
        cout << endl;
        cout << "How many people are living here? ";
        cin >> j;
        houses.insert(make_pair(L, j));
    }

    map<int, int>::iterator it;
    while (j != 3){
        cout << "Go ahead! type 0 to check for a house and people; type 1  to delete a key; type 2 to add a new house and 3 to stop! ";
        cin >> j;
        cout << endl;
        if (j=0){
            cout << "What house are we looking for? ";
            cin >> L;
            it = houses.find(L);
             
        }
        if (j=1){
            cout << "What house should we abandon? ";
            cin >> L;
            cout << endl;
            houses.erase(L);
        }
        if (j=2){
            cout << "Type two numbers in this order: house:people ";
            cin >> L;
            cout << ' ';
            cin >> num;
            houses.insert(make_pair(L, num));
        }
    }
}