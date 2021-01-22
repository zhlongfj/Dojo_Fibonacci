//
// Created by Hualong Zhang on 2021/1/22.
//

#ifndef DOJO_FIBONACCI_FIBONACCI_H
#define DOJO_FIBONACCI_FIBONACCI_H


#include <cstdint>

class Fibonacci {

public:
    int64_t calculate(int index);

    int64_t calculateCore(int index) const;
};


#endif //DOJO_FIBONACCI_FIBONACCI_H
