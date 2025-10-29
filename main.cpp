#include <fstream>
#include <iostream>
#include <Windows.h>
#include "CommandRunner.h"


void CommandRunner::Links::createFile(const std::string& Name, const std::string& CMD ) {

    std::ofstream file(Name);

    const char *pointer = new char;
    const char *message = pointer;

    file << CMD;

    delete message;

    return static_cast<void>(file);
}


int main() {
    std::cout << "File Was Created" << std::endl;
    bool isWorking = true;

    while (isWorking) {
        std::string LINK;
        std::cin >> LINK;

        if (!LINK.empty()) {
            CommandRunner::Links::createFile("main.links.app", LINK);
            ShellExecute(nullptr, "open", LINK.c_str(), nullptr, nullptr, SW_SHOWDEFAULT);
            break;
        }

        isWorking = false;
    }
}