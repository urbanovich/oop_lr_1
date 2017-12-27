/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Time.cpp
 * Author: setler
 * 
 * Created on December 27, 2017, 10:16 AM
 */

#include "Time.h"
#include <string>
#include <time.h>

Time::Time() {
}

Time::~Time() {
}

unsigned long Time::getTimestamp(std::string date) {
    
    struct tm time;
    
    std::string date_time = date + " 00:00:00";
    
    strptime(date_time.c_str(), "%d-%m-%Y %H:%M:%S", &time);
       
    return mktime(&time);
}