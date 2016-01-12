#include <iostream>

/*
 * Your teacher has given you the task of drawing a staircase
 * structure. Being an expert programmer, you decided to make
 * a program to draw it for you instead. Given the required
 *  height, can you print a staircase as shown in the example? 
 * Note: The last line has zero spaces before it.
 * 
 * Constraints 
 *   1≤N≤100

 * Input Format:
 *   You are given an integer N depicting the height of the staircase.
 * 
 * Output Format:
 *   Print a staircase of height N that consists of # symbols
 *   and spaces as given in Sample Output.
 * 
 * Sample Input:
 *   6
 * 
 * Sample Output
 * 
 *        #
 *       ##
 *      ###
 *     ####
 *    #####
 *   ######
 */

int main()
{
    int n;
    std::cin >> n;

    for (std::size_t i = 1; i <= n; i++) {
        for (std::size_t spaces = 0; spaces < n - i; spaces++)
            std::cout << " ";
        for (std::size_t pounds = 0; pounds < i; pounds++)
            std::cout << "#";
        std::cout << std::endl;
    }

    return 0;
}

