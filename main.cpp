#include <fstream>
#include <iostream>
#include <thread>
#include <Windows.h>
#include "CommandRunner.h"
#include "Print.h"

void CommandRunner::Links::createFile(const std::string& Name, const std::string& CMD ) {
    std::ofstream file(Name);

    const char *pointer = new char;
    const char *message = pointer;
    file << CMD;

    delete message;
    return static_cast<void>(file);
}

static std::string getTimeSleeper() {

    std::cout << "Sleep Ended" << std::endl;
    return "";
}

enum class IType : int {

    POINT = 1,
};


int main() {
    bool isWorking = true;

    if constexpr (static_cast<bool>(IType::POINT)) {
        std::cout << "File Was Created" << std::endl;
    }


    while (isWorking) {
        std::cout << "Enter URL Of Website: " << std::endl;
        std::string LINK;
        std::cin >> LINK;

        Print::Prints::getVoidMessage("Would You Like to Save Website to File: ");
        std::string option;
        std::cin >> option;

        if (option == "Yes") {
            CommandRunner::Links::createFile("main.links.app", LINK);
            ShellExecute(nullptr, "open", LINK.c_str(), nullptr, nullptr, SW_SHOWDEFAULT);
        }

        std::thread t(getTimeSleeper);
        t.join();

        isWorking = false;
    }
}