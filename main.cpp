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

struct Print {
    virtual ~Print() = default;
    virtual void getVoidMessages(std::string& output) = 0;

    static void getVoidMessage(const std::string& output) {
        std::cout << output << std::endl;
    }
};

int main() {
    std::cout << "File Was Created" << std::endl;
    bool isWorking = true;

    while (isWorking) {

        Print::getVoidMessage("Would You Like to Save Website to File: ");
        std::string LINK;
        std::cin >> LINK;

        if (LINK.contains("Yes")) {

            if (!LINK.empty()) {
                CommandRunner::Links::createFile("main.links.app", LINK);
                ShellExecute(nullptr, "open", LINK.c_str(), nullptr, nullptr, SW_SHOWDEFAULT);
                break;
            }
        }

        else {
            return 0;
        }

        isWorking = false;
    }
}