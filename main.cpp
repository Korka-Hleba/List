#include <iostream>
#include "Lists.h"

using namespace std;

int main()
{
    Stack<int> stack;
    int stack_size;

    Queue<int> queue;
    int queue_size;

    std::cout << "Enter size of stack : ";
    std::cin >> stack_size;


    std::cout << "Enter elements:\n";
    for (int i = 0; i < stack_size; ++i)
    {
        int elem;
        std::cin >> elem;
        stack.Push(elem);
    }

    std::cout << "Your stack: " << std::endl;
    stack.Print();

    std::cout << "Stack size: " << stack.Size() << std::endl;

    if (!stack.IsEmpty())
    {
        std::cout << "Head element: " << stack.GetFront() << std::endl;
        stack.Pop();
        std::cout << "Stack after Pop: " << std::endl;
        stack.Print();
    }
    else
    {
        std::cout << "Stack is empty" << std::endl;
    }

    std::cout << "Stack size: " << stack.Size() << std::endl;

    Stack<int> copied_stack(stack);
    std::cout << "Copied stack: " << std::endl;
    copied_stack.Print();
    copied_stack.Push(7);
    copied_stack.Print();
    stack.Print();


    Stack<int> moved_stack = std::move(stack);
    std::cout << "Moved stack: " << std::endl;
    moved_stack.Print();
    stack.Print();
    moved_stack.Push(5);
    moved_stack.Print();



    std::cout << "Enter size of queue : ";
    std::cin >> queue_size;

    std::cout << "Enter elements:\n";
    for (int i = 0; i < queue_size; ++i)
    {
        int elem;
        std::cin >> elem;
        queue.Push(elem);
    }

    std::cout << "Your queue: " << std::endl;
    queue.Print();

    std::cout << "Queue size: " << queue.Size() << std::endl;

    if (!queue.IsEmpty())
    {
        std::cout << "Head element: " << queue.GetFront() << std::endl;
        queue.Pop();
        std::cout << "Queue after Pop: " << std::endl;
        queue.Print();
    }
    else
    {
        std::cout << "Queue is empty" << std::endl;
    }

    std::cout << "Queue size: " << queue.Size() << std::endl;

    Queue<int> copied_queue = queue;
    std::cout << "Copied queue: " << std::endl;
    copied_queue.Print();
    copied_queue.Push(7);
    copied_queue.Print();
    queue.Print();

    std::cout << "Copied 1 queue: " << std::endl;

    Queue<int> q1(queue);
    q1.Print();
    Queue<int> moved_queue = std::move(queue);
    std::cout << "Moved queue: " << std::endl;
    moved_queue.Print();
    moved_queue.Push(5);
    moved_queue.Print();
    queue.Print();


    return 0;
}
