//
// Created by Dad on 9/8/19.
//

#include "Invoker.h"
#include <iostream>
#include "Executor.h"

const std::string Invoker::INVOKER("[INVOKER]: ");

int main(int argc, char *argv[]) {

    if (argc != 2) {
        std::cout << Invoker::INVOKER << "Wrong number of command line arguments: " << argc << std::endl;
        return -1;
    } else {
        int seed = std::atoi(argv[1]);
        srand(seed);

        std::cout << Invoker::INVOKER << "With seed: " << seed << '\n';
        double running_ratio = Executor::get_running_ratio();
        std::cout << Invoker::INVOKER << "Running ratio: " << running_ratio << std::endl;
    }
}