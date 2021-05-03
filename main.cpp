#include <iostream>
#include <chrono>
#include <thread>

int main()
{
    using namespace std::chrono_literals;
    std::cout << "Hehe starting \n" << std::flush;
    std::cout << "\nUwU... (  0%) [O] [------]" << std::flush;
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
    std::cout << "hehe UwU go brr";
    std::cout << "\n---LOG END---------------\n" << std::flush;
    std::cout << "\nOwO I'm bored";
    std::cout << "reeeeeeeeeeeeeee" << std::flush;
    std::this_thread::sleep_for(1000ms);
    std::cout << "\n\neeeee" << std::flush;
    std::this_thread::sleep_for(5000ms);
}
