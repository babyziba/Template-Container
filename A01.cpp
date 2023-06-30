//
//  main.cpp
//  plswork
//
//  Created by Princess on 2/25/23.
//

#include <iostream>
#include "Container.h"

int main() {
    
    std::cout << "\n******************* Test 1*******************\n";
    std::cout << "Testing Container <std::string ,5>\n";
    Container <std::string ,5> container_of_strings;
    std::cout << "Testing Container <std::string ,5>:: add_items () {Green , Red , Black}\n";
    container_of_strings.add_item("Green");
    container_of_strings.add_item("Red");
    container_of_strings.add_item("Black");
    std::cout << "Testing Container <std::string ,5>::range -based -for -loop ()\n";
    for (auto& str : container_of_strings)
    std::cout << str << " ";
    std::cout << "\nTesting Container <std::string ,5>:: remove_item(Red)\n";
    container_of_strings.remove_item("Red");
    std::cout << "Testing Container <std::string ,5>::range -based -for -loop ()\n";
    for (auto& str : container_of_strings)
    std::cout << str << " ";
    std::cout << "\nTesting Container <std::string ,5>:: size ()\n";
    std::cout << "container_of_strings.size ()=" << container_of_strings.size() << "\n";

    std::cout << "\n******************* Test 2*******************\n";
    std::cout << "Testing Container <int ,10>:: add_item (){0 ,2 ,4 ,... ,64 ,81}\n";
    Container <int ,10> container_of_ints;
    for (int i = 0; i < 10; i++)
    container_of_ints.add_item(i * i);
    std::cout << "Testing Container <int ,10>::range -based -for -loop\n";
    for (auto num : container_of_ints)
    std::cout << num << " ";
    std::cout << "\nTesting Container <int ,10>:: remove_item (16)\n";
    container_of_ints.remove_item (16);
    std::cout << "Testing Container <int ,10>::range -based -for -loop\n";
    for (auto num : container_of_ints)
    std::cout << num << " ";
    std::cout << "\nTesting Container <int ,10>:: clear ()\n";
    container_of_ints.clear ();
    std::cout << "Testing Container <int ,10>:: empty ()\n";
    std::cout << "container_of_ints.empty() is "
    << (container_of_ints.empty() ? "True" : "False")<<"\n";

    return 0;
}
