#include <iostream>
#include <vector>
using namespace std;

struct Stack {
    int *stack;
    int current_element = -1;
    int max_size_of_stack;
    //123123

    void init(int max_size){
        max_size_of_stack = max_size;
        stack = new int[max_size];
    }

    void destroy(){
        delete[] stack;
        current_element = -1;
    }

    void push(int element){
        if (current_element == max_size_of_stack - 1) throw;
        stack[++current_element] = element;
    }

    void pop(){
        if (current_element == -1) throw;
        stack[current_element--] = 0;
    }

    int top(){
        if (current_element == -1) throw;
        return stack[current_element];
    }

    bool empty(){
        if (current_element == -1) return true;
        return false;
    }

    bool full(){
        if (current_element < max_size_of_stack - 1) return false;
        return true;
    }

};

int main(){
    Stack stack1;
    Stack stack2;
    stack1.init(4);
    stack2.init(2);
    stack1.push(1);
    stack2.push(2);
    cout << stack1.top();
    cout << stack2.top();

}
