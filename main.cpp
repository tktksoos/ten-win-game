#include "sub.hpp"

#include <iostream>
#include <random>
#include <thread>
#include <chrono>
#include <string>

int main()
{
    int go_times = 1;
    std::string which;
    bool how;
    int how_num = 1;
    std::cout << "let's play the game!\n10連続成功を目指しましょう！" << std::endl;
    for(int i = 0; i < 10000; i++){
        std::cout << i + 1 << "回目の挑戦です" << std::endl;
        how = true;
        while(how){
            if(how_num != 1){
                std::cout << how_num -1 << "連チャン" << std::endl;
            }
            do{
                std::cout << "which are you go,left(l) or right(r)?" << std::endl;
                std::cin >> which;
            }while(!(which == "left" || which == "right" || which == "l" || which == "r"));
            std::cout << "success or failure";
            wait(0.3); std::cout << '.';
            wait(0.3); std::cout << '.';
            wait(0.3); std::cout << ". ";
            wait(0.1);
            if(Random(0,1,true) == judge(which)){
                std::cout << "success!ツ" << std::endl;
                how = true;
                how_num++;
            }else{
                std::cout << "failure(´-ω-`)" << std::endl;
                how = false;
                how_num = 1;
            }
        }
    }
    
    return 0;
}