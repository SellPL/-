#include <iostream>
#include <cstdlib>
using namespace std;

const int DIM1 = 4;
const int DIM2 = 3;
int ary[DIM1][DIM2];
int main() {
    int sum;
 for (int i = 0; i < DIM1; i++) {
 for (int j = 0; j < DIM2; j++) {
 ary[i][j] = (rand() %100) - (rand() %100);
 }
 }
 for (int i = 0; i < DIM1; i++) {
 for (int j = 0; j < DIM2; j++) {
 cout << ary[i][j] << ' ';
 }
 cout << endl;
 }
 for (int i = 0; i < DIM1; i++) {
 for (int j = 0; j < DIM2; j++) {
 if (ary[i][j] < 0){
    sum = sum + ary[i][j];
 }
 }
 }
cout << "Total of negative numbers is " << sum;
}