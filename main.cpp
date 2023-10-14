#include <iostream>
#include "Product.h"
#include <vector>
#include "Product_Manager.h"
#include "Global.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void display_product(Product *p){
	cout<<"\nThe name of the product is "<<p->get_name()<<endl;
	cout<<"The id of the product is "<<p->get_id()<<endl;
	cout<<"The price of the product is "<<p->get_price()<<endl;
	cout<<"The like of the product is "<<p->get_like()<<endl;
	cout<<"The description of the product is "<<p->get_description()<<endl<<endl;
}

void display_all_products(){
	int i = 0;
	vector<Product *>::iterator itr;
	for(itr = arr.begin(); itr!=arr.end(); itr++,i++) {
		display_product(*itr);
	}
	if(i == 0){
		cout<<"There is no element in the product list\n";
	}
}

Product* get_product_details(){
	
	int id, like;
	float price;
	string name;
	string description;
	char ch;
	cout<<"\nEnter the id of the product: ";
	cin>>id;
	cout<<"Enter the name of the product: ";
	getline(cin,name);
	getline(cin,name);
	cout<<"Enter the price of the product: ";
	cin>>price;
	cout<<"Enter the like(count) of the product: ";
	cin>>like;
	cout<<"Enter the description of the product: ";
	getline(cin,description);
	getline(cin,description);
	Product *p = new Product(id, like, price, name, description);
	cout<<endl;
	return p;
}

int main(int argc, char** argv) {
	int choice; 
	Product_Manager p;
	cout<<"Welcome to product management program:\n\n";
	while(1){
		cout<<"Enter 1 to add the product: "<<endl;
		cout<<"Enter 2 to update the product: "<<endl;
		cout<<"Enter 3 to delete the product: "<<endl;
		cout<<"Enter 4 to get the product by its id: "<<endl;
		cout<<"Enter 5 to display all the products: "<<endl;
		cout<<"Enter 6 to exit the program: "<<endl;
		cout<<endl;
		cout<<"Enter your choice: ";
		cin>>choice;

		switch(choice){
			case 1:{
				p.Insert(get_product_details());
				break;
			}
			case 2:{
				int id;
				cout<<"\nEnter the id of the product you want to update: ";
				cin>>id;
				cout<<"\nEnter the details of the new product: ";
				p.Update(id,get_product_details());
				break;
			}
			case 3:{
				int id;
				cout<<"\nEnter the id of the product you want to delete: ";
				cin>>id;
				p.Delete(id);
				break;
			}
			case 4:{
				int id;
				cout<<"\nEnter the id of the product you want: ";
				cin>>id;
				Product prod = p.getById(id);
				display_product(&prod);
				break;
			}
			case 5:{
				display_all_products();
				break;
			}
			case 6:{
				cout<<"\nProgram ended sucessfully\n";
				return 0;
			}
			default:
				cout<<"Please enter the correct choice from the following\n";
				break;
		}	
	}
	return 0;
}
