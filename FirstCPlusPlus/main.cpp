//
//  main.cpp
//  FirstCPlusPlus
//
//  Created by Kuo, Sean on 1/23/18.
//  Copyright © 2018 Kuo, Sean. All rights reserved.
//

#include <iostream>

using namespace std;

int oldMain()
{
    // insert code here...
    cout << "Hello, World!" << endl;
    string word;
    getline(cin, word);
//    cin >> word;
    cout << "Hello " << word << endl;
    cout << (3 + 5 * 43) << endl;
    return 0;
}
