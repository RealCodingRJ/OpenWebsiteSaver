//
// Created by Crawz on 10/29/2025.
//

#ifndef WEBSITELINKSAVER_COMMANDRUNNER_H
#define WEBSITELINKSAVER_COMMANDRUNNER_H
#include <string>


class CommandRunner {

public:

    struct Links {
        virtual ~Links() = default;
        virtual void getLinks() = 0;
        static void createFile(const std::string &Name, const std::string &CMD);

    };
};


#endif //WEBSITELINKSAVER_COMMANDRUNNER_H