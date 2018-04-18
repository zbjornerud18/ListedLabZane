#include "Node.hpp"

Node::Node(std::string data, Node n){
	node = &n;
	this->data = data;

}

Node::get_data()const{return data;}
void Node::set_data(std::string d){
	data = d;
}

Node* Node::get_node()const{
	return node;}
void Node::set_node(Node n){
node = &n;}
