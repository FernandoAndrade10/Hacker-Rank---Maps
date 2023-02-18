//Fernando Andrade
//Visual Studio 2019

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;


int main() {
     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
     int n = 0;
     string key = {};
     int value = 0;
     string query = {};

     map<string, int> myMap;

     cin >> n;

     for (int i = 0; i < n; i++) {
          cin >> key >> value;

          myMap.insert(pair<string, int>(key, value));
     }

     while (cin >> query)
     {
          if (myMap.find(query) != myMap.end())
          {
               cout << query << "=" << myMap.find(query)->second << endl;
          }
          else
          {
               cout << "Not found" << endl;
          }
     }

     return 0;
}
