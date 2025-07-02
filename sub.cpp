#include "sub.hpp"

#include <iostream>
#include <random>
#include <thread>
#include <chrono>
#include <string>

double Random(double min, double max, bool isInteger = true) {//ランダムを作る
    std::random_device rd;
    std::mt19937 gen(rd());

    if (isInteger) {
        std::uniform_int_distribution<int> dist(static_cast<int>(min), static_cast<int>(max));
        return dist(gen);
    } else {
        std::uniform_real_distribution<double> dist(min, max);
        return dist(gen);
    }
}

void wait(double timer){//〜時間待つ
    std::this_thread::sleep_for(std::chrono::duration<double>(timer));
}

int judge(std::string or_){//判断する
    if(or_ == "right"){
        return 1; 
    }else if(or_ == "r"){
        return 1;
    }else if(or_ == "left"){
        return 0;
    }else if(or_ == "l"){
        return 0;
    }else{
        return -1;
    }
}