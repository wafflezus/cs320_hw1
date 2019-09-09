//
// Created by Dad on 9/8/19.
//

#ifndef CS370_HW1_EXECUTOR_H
#define CS370_HW1_EXECUTOR_H

#include <string>

class Executor {
public:
    static const std::string EXECUTOR;

    static int get_iteration_count(int rand);
    static int get_arr_size(int rand);
    static char get_arr_val(int rand);
    static float char_ratio(char *arr, int size, int *maxCountPointer);

    static double get_running_ratio();
};

#endif //CS370_HW1_EXECUTOR_H
