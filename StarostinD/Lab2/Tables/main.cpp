#include <iostream>
#include "unordered_table.h"
#include "rb_tree.h"
#include "hash_table.h"

using namespace std;

/*int main() {
	Table<int>* tt = new unordered_table<int>(3);
	tt->insert("1", 1);
	tt->insert("3", 2);
	tt->insert("2", 3);

	int a;
	tt->extract("1", a);
	cout << a << '\n';

	tt->extract("3", a);
	cout << a << '\n';

	tt->extract("2", a);
	cout << a << '\n';

	cout << tt->getOperationsCount() << '\n';
	tt->extract("2", a);
	cout << a << '\n';

	cout << tt->getOperationsCount() << '\n';

	rb_tree<int>* rb = new rb_tree<int>{};
	cout << "\nTree check:\n";
	rb->insert("7", 1);
	cout << rb->isValidRBTree() << '\n';
	rb->insert("2", 2);
	cout << rb->isValidRBTree() << '\n';
	rb->insert("8", 3);
	cout << rb->isValidRBTree() << '\n';
	rb->insert("9", 1);
	cout << rb->isValidRBTree() << '\n';
	rb->insert("1", 2);
	cout << rb->isValidRBTree() << '\n';
	rb->insert("5", 3);
	cout << rb->isValidRBTree() << '\n';
	rb->insert("6", 1);
	cout << rb->isValidRBTree() << '\n';
	rb->insert("4", 2);
	cout << rb->isValidRBTree() << '\n';
	rb->insert("3", 5);
	cout << rb->isValidRBTree() << '\n';

	rb->extract("7", a);
	cout << rb->isValidRBTree() << '\n';
	rb->extract("7", a);
	cout << rb->isValidRBTree() << '\n';
	rb->extract("9", a);
	cout << rb->isValidRBTree() << '\n';
	rb->extract("5", a);
	cout << rb->isValidRBTree() << '\n';
	cout << '\n' << a << '\n';

	for (int i = 0; i < 10000; i++) {
		rb->insert(std::to_string(rand()), i);
	}
	cout << "\nCHECK1: " << rb->isValidRBTree() << '\n';

	for (int i = 0; i < 10000; i++) {
		rb->erase(std::to_string(rand()));
		//if (!rb->isValidRBTree()) {
		//	cout << "\nCHECK?: " << rb->isValidRBTree() << " iter(" << i << ")\n";
		//}
	}

	cout << "\nCHECK2: " << rb->isValidRBTree() << '\n';
	return 0;
}*/