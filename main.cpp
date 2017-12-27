/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: setler
 *
 * Created on December 25, 2017, 8:48 PM
 */

#include <cstdlib>

#include <iostream>
#include "Product.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int count = 0;
    int id = 0;
    bool exit = false;
        
    count = Product::getCount();
    
    Product *products = new Product[count];
    
    std::cout << "Search by a product name:" << std::endl;
    Product::getByName(products);
    
    std::cout << "Search by a product name and a price:" << std::endl;
    Product::getByNameAndPrice(products);
    
    std::cout << "Search by a shelf life:" << std::endl;
    Product::getByDate(products);
    
    delete [] products;
    return 0;
}