#include <iostream>
#include <map>
using namespace std;

void cezar(map<char, int> abc, string mus, int n) {
    map<char, int>::iterator it;
    int pos;
    for (int i = 0; i < mus.size(); i++) {
        it = abc.find(mus[i]);
        pos = (it->second + n) % 26;
        it = abc.begin();    
        for(int j = 1; j < pos; j++) {
            it++;
        }
        mus[i] = it->first;
    }
    for (int i = 0; i < mus.size(); i++) {
        cout << mus[i];
    }
    cout << endl;
}

int main(){
    string fn; string sn; string surn;
    cout << "Type in first name! " << endl;
    cin >> fn;
    cout << "Now second name " << endl;
    cin >> sn;
    cout << "And surname " << endl;
    cin >> surn;
    map <char, int> abc = {{'a', 1},
    {'b', 2},
    {'c', 3},
    {'d', 4},
    {'e', 5},
    {'f', 6},
    {'g', 7},
    {'h', 8},
    {'i', 9},
    {'j', 10},
    {'k', 11},
    {'l', 12},
    {'m', 13},
    {'n', 14},
    {'o', 15},
    {'p', 16},
    {'q', 17},
    {'r', 18},
    {'s', 19},
    {'t', 20},
    {'u', 21},
    {'v', 22},
    {'w', 23},
    {'x', 24},
    {'y', 25},
    {'z', 26}};
    cout << "in Caesar's cipher it is ";
    cezar(abc, fn, 6);
    cezar(abc, sn, 13);
    cezar(abc, surn, 28);
}