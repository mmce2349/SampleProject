//
//  Controller.cpp
//  SampleProject
//
//  Created by Mcentire, Mitchell on 1/25/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

Controller :: Controller()
{
  
}

void Controller :: start()
{
    for (int index = 0; index < 10; index++)
    {
        cout << "This loop has executed " << index + 1 << " times" << endl;
    }
    
}
void Controller :: Array()
{
    int Horray [] = {4, 3 ,5 ,79, 11};
    int n, result=0;
    
    for ( n=0 ; n<5 ; ++n )
    {
        result += Horray[n];
    }
    cout << result << endl;
  
    
    
}


