/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Time.h
 * Author: setler
 *
 * Created on December 27, 2017, 10:16 AM
 */

#ifndef TIME_H
#define TIME_H

#include <time.h>
#include <string>

class Time {
public:
    Time();
    virtual ~Time();
    
    static unsigned long getTimestamp(std::string);
private:

};

#endif /* TIME_H */

