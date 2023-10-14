#include "Global.h"
#include "Product_Manager.h"
#include "Product.h"
#include <vector>

using namespace std;

Product_Manager::Product_Manager()
{
}

Product_Manager::~Product_Manager()
{
}

//void Product_Manager::Insert(Product *p){
//	arr.push_back(p);
//}


void Product_Manager::Insert(Product *p){
	arr.push_back(p);
}

void Product_Manager::Update(int id,Product *p){
	vector<Product *>::iterator itr;
	for(itr = arr.begin(); itr!=arr.end(); itr++){
		if(id == (*itr)->get_id()){
			(*itr)->set_id(p->get_id());
			(*itr)->set_like(p->get_like());
			(*itr)->set_price(p->get_price());
			(*itr)->set_name(p->get_name());
			(*itr)->set_description(p->get_description());
			break;
		}
	}
}

void Product_Manager::Delete(int id){
	int i = 0;
	vector<Product *>::iterator itr;
	for(itr = arr.begin(); itr!=arr.end(); itr++,i++) {
		if(id == (*itr)->get_id()){
			delete *itr;
			arr.erase(arr.begin()+i);
			break;
		}
	}
}

Product Product_Manager::getById(int id){
	vector<Product *>::iterator itr;
	for(itr = arr.begin(); itr!=arr.end(); itr++) {
		if(id == (*itr)->get_id()){
			return **itr;
		}
	}
}
