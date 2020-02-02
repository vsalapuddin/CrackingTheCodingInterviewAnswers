#include <iostream>
#include <fstream>
#include <sstream>
#include <string> 
#include <iomanip>
#include <vector>
using namespace std; 

/*
Code for the more important BigO functions
*/

//Reverses an array in O(N) runtime

void reverse(int[] array) 
{
    for (int i = 0; i < array.length / 2; i++)
    {
        int other = array.length - i - 1;
        int temp = array[i];
        array[i] = array[other];
        array[other] = temp; 
    }
}

//Sums all the nodes in a balanced binary search tree in O(n) time

int sum(Node node)
{
    if (node == null)
    {
        return 0;
    }
    return sum(node.left) + node.value +sum(node.right);
}

//Check if a numer is prime in O(sqrt(n)) time

boolean isPrime(int n) 
{
    for (int x = 2; x * x <= n; x++)
    {
        if (n % x == 0)
        {
            return false; 
        }
    }
    return true;
}

//Computs n! (n factorial) in O(n) time

int factorial(int n)
{
    if (n < 0 )
    {
        return -1;
    }
    else if (n == 0)
    {
        return 1; 
    }
    else 
    {
        return n * factorial(n - 1); 
    }
}

//Prints permutations of a string in O(n!) time

void permutation(String str)
{
    permutation(str, "");
}
void permutation(String str, String prefix)
{
    if (str.length() == 0)
    {
        System.out.println(prefix);
    }
    else 
    {
        for (int i = 0; i < str.length(); i++)
        {
            String rem = str.substring(0,i) + str.substring(i+1);
            permutation(rem, prefix + str.charAt(i));
        }
    } 
}

//Computes Nth fibonacci number in O(2^n) time
int fib(int n)
{
    if (n <= 0 ) return 0;
    else if (n == 1) return 1;
    return fib(n-1) + fib(n-2);
}

