//
// Created by Crawz on 10/29/2025.
//

#ifndef WEBSITELINKSAVER_PRINT_H
#define WEBSITELINKSAVER_PRINT_H
#include <iostream>
#include <ostream>
#include <string>


class Print {

public:

    struct Prints {
        virtual ~Prints() = default;
        virtual void getVoidMessages(std::string& output) = 0;

        static void getVoidMessage(const std::string& output) {
            std::cout << output << std::endl;
        }
    };

};


#endif //WEBSITELINKSAVER_PRINT_H