/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Product.h
 * Author: setler
 *
 * Created on December 25, 2017, 8:48 PM
 */

#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
public:
    
    std::string name;
    std::string manufacturer;
    float price;
    std::string shelf_life;
    int quantity;
    
    Product();
    virtual ~Product();
    
    static int getCount();
    
    static void getByName(Product *products);
    static void getByNameAndPrice(Product *products);
    static void getByDate(Product *products);
    
    void show();
private:

};

#endif /* PRODUCT_H */

