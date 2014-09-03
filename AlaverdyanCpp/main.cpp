//
//  main.cpp
//  AlaverdyanCpp
//
//  Created by Alaverdyan Miqael on 9/4/14.
//  Copyright (c) 2014 Alaverdyan Miqael. All rights reserved.
//

#include <iostream>

using namespace std;

int main(void) {
    double num1 = 0.0;
    double num2 = 0.0;
    double num3 = 0.0;
    
    double average;
    
    cout << "input 3 numbers " << endl ;
    
    cin >> num1 ;
    cin >> num2 ;
    cin >> num3 ;
    
    average = (num1 + num2 + num3)/3 ;
    
    cout << "average is " << average << endl ;
    
    system("pause");
    
    cout << "yayay" <<endl ;
    
    
    
    return 0;
}
