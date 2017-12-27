/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Product.cpp
 * Author: setler
 * 
 * Created on December 25, 2017, 8:48 PM
 */

#include "Product.h"
#include <iostream>
#include <string>
#include "Time.h"

Product::Product() {
    
    std::cout <<  "Product name: ";
    std::cin >> this->name;
    
    std::cout << "Product manufacturer: ";
    std::cin >> this->manufacturer;
    
    std::cout << "Product price: ";
    std::cin >> this->price;
    
    std::cout << "Product shelf life(15-01-2018): ";
    std::cin >> this->shelf_life;
    
    std::cout << "Product quantity: ";
    std::cin >> this->quantity;
    
    std::cin.clear();
}

Product::~Product() {
    
}

int Product::getCount() {
    
    int count = 0;
    
    std::cout << "Product items: ";
    
    std::cin >> count;
    
    return count;
}

void Product::getByName(Product *products) {
    
    std::string name;
    std::cout << "Enter product name: ";
    std::cin >> name;
    
    for (int i = 0; !products[i].name.empty(); i++) {
        
        if (products[i].name == name) {
            products[i].show();
            break;
        }
    }
    
}

void Product::getByNameAndPrice(Product *products) {
    
    std::string name;
    int price;
    std::cout << "Enter product name: ";
    std::cin >> name;
    
    std::cout << "Enter product price: ";
    std::cin >> price;
    
    for (int i = 0; !products[i].name.empty() && products[i].price != 0; i++) {
        
        if (products[i].name == name
            && products[i].price >= price) {
            products[i].show();
        }
    }
    
}

void Product::getByDate(Product *products) {
    
    std::string shelf_life;
        
    std::cout << "Enter shelf life: ";
    std::cin >> shelf_life;
    
    for (int i = 0; !products[i].shelf_life.empty(); i++) {
        
        if (Time::getTimestamp(products[i].shelf_life) >= Time::getTimestamp(shelf_life)) {
            products[i].show();
        }
    }
    
}

void Product::show() {
    
    std::cout <<  "Product name: ";
    std::cout << this->name << std::endl;
    
    std::cout << "Product manufacturer: ";
    std::cout << this->manufacturer << std::endl;
    
    std::cout << "Product price: ";
    std::cout << this->price << std::endl;
    
    std::cout << "Product shelf life(15-01-2018): ";
    std::cout << this->shelf_life << std::endl;
    
    std::cout << "Product quantity: ";
    std::cout << this->quantity << std::endl;
    
}