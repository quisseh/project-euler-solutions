/*
 * The main function.
 *
 * Created by quisseh on 11/1/15.
 */

#include "problem0060.h"

int main() {
    problem0060 problem;
    std::cout << "\nSolution for problem " << problem.getProblemNumber() << ":\n";
    std::chrono::time_point<std::chrono::system_clock> start, end;

    start = std::chrono::system_clock::now();
    problem.run();
    end = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed(end - start);
    std::cout << "\n\nRan in:\n" << elapsed.count() << " seconds\n";
    return 0;
}
