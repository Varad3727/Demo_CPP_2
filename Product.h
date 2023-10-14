#ifndef PRODUCT_H
#define PRODUCT_H
#include<string>
using namespace std; 

class Product
{
	int id, like;
	float price;
	string name;
	string description;
	
	public:
		Product();
		Product(int id, int like, float price, string name, string description);
		~Product();
		
		// Declarations of all the setters
		void set_id(int id);
		void set_like(int like);
		void set_price(float price);
		void set_name(string name);
		void set_description(string description);
		
		// Declarations of all the getters
		int get_id();
		int get_like();
		float get_price();
		string get_name();
		string get_description();
		
	protected:
};

#endif

