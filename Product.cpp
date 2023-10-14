#include "Product.h"
using namespace std; 

Product::Product(int id, int like, float price, string name, string description)
{
	this->id = id;
	this->like = like;
	this->price = price;
	this->name = name;
	this->description = description;
}

Product::Product()
{
	
}

Product::~Product()
{
	
}

// Definitions of all the setters
void Product::set_id(int id){
	this->id = id;
}

void Product::set_like(int like){
	this->like = like;
}

void Product::set_price(float price){
	this->price = price;
}

void Product::set_name(string name){
	this->name = name;
}

void Product::set_description(string description){
	this->description = description;
}

// Definitions of all the getters
int Product::get_id(){
	return this->id;
}

int Product::get_like(){
	return this->like;
}

float Product::get_price(){
	return this->price;
}

string Product::get_name(){
	return this->name;
}

string Product::get_description(){
	return this->description;
}

