#include "Node.npp"
using namespace std;

int main(){
	Node* node = new Node("hello", NULL);
	Node* node2 = new Node("hi", NULL);
	node ->set_node(*node2);
	cout << node->get_node()->get_data() << endl;
	node->set_data("bye");

	return 0;
}