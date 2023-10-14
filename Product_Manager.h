#ifndef PRODUCT_MANAGER_H
#define PRODUCT_MANAGER_H
#include "Product.h"
using namespace std; 

class Product_Manager
{
	
	public:
		Product_Manager();
		~Product_Manager();
		void Insert(Product *p);
		void Update(int id,Product *p);
		void Delete(int id);
		Product getById(int id);
	protected:
};

#endif

