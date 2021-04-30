#include <iostream>
#include <chrono>
#include <thread>

int main()
{
    using namespace std::chrono_literals;
    std::cout << "Roblox failed to launch! \n" << std::flush;
    std::cout << "\nGathering error data... (  0%) [O] [------]" << std::flush;
    std::this_thread::sleep_for(250ms);
    std::cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
    std::cout << " 17%) [/] [#-----]" << std::flush;
    std::this_thread::sleep_for(250ms);
    std::cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
    std::cout << " 17%) [-] [#-----]" << std::flush;
    std::this_thread::sleep_for(250ms);
    std::cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
    std::cout << " 33%) [\\] [##----]" << std::flush;
    std::this_thread::sleep_for(250ms);
    std::cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
    std::cout << " 50%) [|] [###---]" << std::flush;
    std::this_thread::sleep_for(250ms);
    std::cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
    std::cout << " 50%) [/] [###---]" << std::flush;
    std::this_thread::sleep_for(250ms);
    std::cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
    std::cout << " 67%) [-] [####--]" << std::flush;
    std::this_thread::sleep_for(250ms);
    std::cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
    std::cout << "100%) [0] [######]" << std::flush;
    std::this_thread::sleep_for(1000ms);
    std::cout << "\n---LOG-------------------\n";
    std::cout << "<FATAL> Application exited with code 2:\n  Required application library is not found.\n<DEBUG> Running launch fail debugger...";
    std::cout << "\n---LOG END---------------\n" << std::flush;
    std::cout << "\nPlease try reinstalling roblox on the next official update date:\n  May 06 2021\n";
    std::cout << "Current downloaded release is confirmed to be latest, but no fix has been reported. Thanks for using Roblox!" << std::flush;
    std::this_thread::sleep_for(1000ms);
    std::cout << "\n\nClosing this terminal in 5 seconds." << std::flush;
    std::this_thread::sleep_for(5000ms);
}
