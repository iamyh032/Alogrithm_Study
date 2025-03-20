#include <iostream>
#include <string>
using namespace std;

double gradeToNum(string str){
    if(str=="A+"){
        return 4.5;
    } else if(str=="A0"){
        return 4.0;
    } else if(str=="B+"){
        return 3.5;
    } else if(str=="B0"){
        return 3.0;
    } else if(str=="C+"){
        return 2.5;
    } else if(str=="C0"){
        return 2.0;
    } else if(str=="D+"){
        return 1.5;
    } else if(str=="D0"){
        return 1.0;
    } else {
        return 0;
    }
}

int main() {
    double credits = 0, thisCredit, sum=0;
    string name, grade;
    for(int i=0; i<20; i++){
        cin >> name >> thisCredit >> grade;
        if(grade != "P"){
            credits += thisCredit;
            sum += gradeToNum(grade)*thisCredit;
        }
    }
    sum = sum/credits;
    cout << sum;
}
