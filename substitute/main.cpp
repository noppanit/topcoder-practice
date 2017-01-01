//
//  main.cpp
//  substitute
//
//  Created by Charassinvichai, Noppanit on 12/31/16.
//  Copyright © 2016 Charassinvichai, Noppanit. All rights reserved.
//

#include <iostream>
#include <string>

class Substitute {
public:
    int getValue(std::string key, std::string code) {
        int result = 0;
        for (int i = 0; i < code.length(); i++) {
            std::string::size_type loc = key.find(code[i]);
            if( loc != std::string::npos ) {
                result *= 10;
                result += loc % 10;
            }
        }
        return result;
    }
};

int main(int argc, const char * argv[]) {
    Substitute substitute;
    std::string key = "TRADINGFEW";
    std::string code = "LGXWEV";
    
    int result = substitute.getValue(key, code);
    
    std::cout << result;
    return 0;
}
