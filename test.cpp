#include <iostream>

#include "BST.h"
#include "printing.h"

void part1() {
    std::cout << "--- Part 1 output ---" << std::endl;

    BST tree;

    std::cout << "\nPretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 8 into the tree..." << std::boolalpha << tree.insert(8) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 10 into the tree..." << std::boolalpha << tree.insert(10) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 11 into the tree..." << std::boolalpha << tree.insert(11) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 13 into the tree..." << std::boolalpha << tree.insert(13) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 12 into the tree..." << std::boolalpha << tree.insert(12) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 15 into the tree..." << std::boolalpha << tree.insert(15) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 11 into the tree..." << std::boolalpha << tree.insert(11) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 2 into the tree..." << std::boolalpha << tree.insert(2) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 6 into the tree..." << std::boolalpha << tree.insert(6) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 14 into the tree..." << std::boolalpha << tree.insert(14) << std::endl;
    std::cout << "Ugly printing the tree...\n" << std::endl;
    ugly_print_tree(tree);

    std::cout << "\nAttempting to insert 6 into the tree..." << std::boolalpha << tree.insert(6) << std::endl;
    std::cout << "Ugly printing the tree...\n" << std::endl;
    ugly_print_tree(tree);

    std::cout << "\nAttempting to insert 9 into the tree..." << std::boolalpha << tree.insert(9) << std::endl;
    std::cout << "Ugly printing the tree...\n" << std::endl;
    ugly_print_tree(tree);

    std::cout << "\nAttempting to insert 4 into the tree..." << std::boolalpha << tree.insert(4) << std::endl;
    std::cout << "Ugly printing the tree...\n" << std::endl;
    ugly_print_tree(tree);

    std::cout << "\nAttempting to insert 1 into the tree..." << std::boolalpha << tree.insert(1) << std::endl;
    std::cout << "Ugly printing the tree...\n" << std::endl;
    ugly_print_tree(tree);

    std::cout << "\nAttempting to insert 3 into the tree..." << std::boolalpha << tree.insert(3) << std::endl;
    std::cout << "Ugly printing the tree...\n" << std::endl;
    ugly_print_tree(tree);

    std::cout << "\nAttempting to insert 5 into the tree..." << std::boolalpha << tree.insert(5) << std::endl;
    std::cout << "Ugly printing the tree...\n" << std::endl;
    ugly_print_tree(tree);

    std::cout << "\nAttempting to insert 7 into the tree..." << std::boolalpha << tree.insert(7) << std::endl;
    std::cout << "Ugly printing the tree...\n" << std::endl;
    ugly_print_tree(tree);
}

void part2() {
    std::cout << "--- Part 2 output ---" << std::endl;

    BST tree;

    std::cout << "\nPretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nInserting 8, 4, 12, 2, 6, 10, 14, 1, 3, 5,\n          9, 11, 13, and 15 into the tree..."
              << std::endl;
    tree.insert(8);
    tree.insert(4);
    tree.insert(12);
    tree.insert(2);
    tree.insert(6);
    tree.insert(10);
    tree.insert(14);
    tree.insert(1);
    tree.insert(3);
    tree.insert(5);
    tree.insert(9);
    tree.insert(11);
    tree.insert(13);
    tree.insert(15);

    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\ntree.contains(14) = " << std::boolalpha << tree.contains(14) << std::endl;
    std::cout << "tree.contains(4) = " << std::boolalpha << tree.contains(4) << std::endl;
    std::cout << "tree.contains(5) = " << std::boolalpha << tree.contains(5) << std::endl;
    std::cout << "tree.contains(15) = " << std::boolalpha << tree.contains(15) << std::endl;
    std::cout << "tree.contains(7) = " << std::boolalpha << tree.contains(7) << std::endl;
    std::cout << "tree.contains(2) = " << std::boolalpha << tree.contains(2) << std::endl;
    std::cout << "tree.contains(-3) = " << std::boolalpha << tree.contains(-3) << std::endl;
    std::cout << "tree.contains(17) = " << std::boolalpha << tree.contains(17) << std::endl;
    std::cout << "tree.contains(35) = " << std::boolalpha << tree.contains(35) << std::endl;
}

void part3() {
    std::cout << "--- Part 3 output ---" << std::endl;

    BST tree;

    std::cout << "\nPretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nInserting 8, 4, 12, 2, 6, 10, 14, 1, 3, 5, 7,\n          9, 11, 13, and 15 into the tree..."
              << std::endl;
    tree.insert(8);
    tree.insert(4);
    tree.insert(12);
    tree.insert(2);
    tree.insert(6);
    tree.insert(10);
    tree.insert(14);
    tree.insert(1);
    tree.insert(3);
    tree.insert(5);
    tree.insert(7);
    tree.insert(9);
    tree.insert(11);
    tree.insert(13);
    tree.insert(15);

    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to remove 5 from the tree..." << std::boolalpha << tree.remove(5) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to remove 6 from the tree..." << std::boolalpha << tree.remove(6) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to remove 3 from the tree..." << std::boolalpha << tree.remove(3) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to remove 2 from the tree..." << std::boolalpha << tree.remove(2) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to remove 4 from the tree..." << std::boolalpha << tree.remove(4) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to remove 12 from the tree..." << std::boolalpha << tree.remove(12) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to remove 3 from the tree..." << std::boolalpha << tree.remove(3) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to remove 12 from the tree..." << std::boolalpha << tree.remove(12) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to remove 0 from the tree..." << std::boolalpha << tree.remove(0) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to remove 18 from the tree..." << std::boolalpha << tree.remove(18) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to remove 8 from the tree..." << std::boolalpha << tree.remove(8) << std::endl;
    std::cout << "Attempting to remove 7 from the tree..." << std::boolalpha << tree.remove(7) << std::endl;
    std::cout << "Attempting to remove 1 from the tree..." << std::boolalpha << tree.remove(1) << std::endl;
    std::cout << "Attempting to remove 11 from the tree..." << std::boolalpha << tree.remove(11) << std::endl;
    std::cout << "Attempting to remove 10 from the tree..." << std::boolalpha << tree.remove(10) << std::endl;
    std::cout << "Attempting to remove 9 from the tree..." << std::boolalpha << tree.remove(9) << std::endl;
    std::cout << "Attempting to remove 14 from the tree..." << std::boolalpha << tree.remove(14) << std::endl;
    std::cout << "Attempting to remove 13 from the tree..." << std::boolalpha << tree.remove(13) << std::endl;
    std::cout << "Attempting to remove 15 from the tree..." << std::boolalpha << tree.remove(15) << std::endl;

    std::cout << "\nPretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);
}

void part4() {
    std::cout << "--- Part 4 output ---" << std::endl;

    BST tree;

    std::cout << "\nPretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nInserting 1, 2, and 3 into the tree..." << std::endl;
    tree.insert(1);
    tree.insert(2);
    tree.insert(3);

    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nClearing the tree..." << std::endl;
    tree.clear();

    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " [TEST]" << std::endl;
        std::cerr << "where TEST is one of 1, 2, 3, 4, or all" << std::endl;
        return 1;
    }

    std::string test = argv[1];

    if (test == "1") {
        part1();
    } else if (test == "2") {
        part2();
    } else if (test == "3") {
        part3();
    } else if (test == "4") {
        part4();
    } else if (test == "all") {
        part1();

        std::cout << "\n\n";
        part2();

        std::cout << "\n\n";
        part3();

        std::cout << "\n\n";
        part4();
    } else {
        std::cerr << test << " is not a valid test to run. The valid options are 1, 2, 3, 4, and all"
                  << std::endl;
        return 1;
    }

    return 0;
}