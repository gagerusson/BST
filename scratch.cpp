#include <iostream>

#include "BST.h"
#include "printing.h"

int main(int argc, char *argv[]) {
    // Write your test code here. Remember that `printing.h` gives you access to
    // the functions `pretty_print_tree` and `ugly_print_tree`, which you can
    // use to print a representation of your tree like so:
    BST tree;
    pretty_print_tree(tree);
    ugly_print_tree(tree);

    return 0;
}