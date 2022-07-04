#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <typeinfo>

using namespace std;
class Card_validation
{
public:
    string card_number;
    string num;
    int number = 0;
    int total = 0;




    void iterating_string()
    {
        cout << "User Enter Card NUmber; ";
        cin >> card_number;
        for (char i : card_number)
        {
            cout << i ;
            cout << " ";
        }
        cout << "Reversed ";

    }
    void string_reverse()
    {
        num = card_number;
        reverse(num.begin(), num.end());
        for (int l = 0; l < num.length(); l ++)
        {
            cout << typeid(num[l]).name() << endl;
        }
       

    }
};

int main() {
   Card_validation start;
   start.iterating_string();
   start.string_reverse();
    return 0;
}

