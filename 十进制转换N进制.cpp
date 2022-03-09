#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

void turnX(double x, int y){
    double a = x - floor(x);        //����ȡ��
    int b = floor(x);
    
    if(b){                          //��������
        vector <int> B;
        while(b){
            B.push_back(b % y);
            b /= y;
        }
    
        for (auto i = B.end() - 1; i > B.begin() - 1; i -- ){
            if(*i >= 10){
                cout << (char)(*i + 55);
                continue;
            }
            cout << *i;
        }
    }else{
        cout << 0;
    }
    
    if(a){                          //С������
        cout << '.';
        while(a != floor(a)){
            a *= y;
            if(floor(a) >= 10)
                cout << (char)(floor(a) + 55);
            else
                cout << floor(a);
            a = a - floor(a);
        }
    }
    cout << endl;
}

int main()
{
    double x;               //Ҫת������
    int y;                  //ת��Ϊy������
    cin >> x >> y;
    
    while(x && y){
        turnX(x, y);
        cin >> x >> y;
    }

    return 0;
}
