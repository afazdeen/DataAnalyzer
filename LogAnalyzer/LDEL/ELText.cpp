    //
//  ELText.cpp
//  LogAnalyzer
//
//  Created by Dileepa Jayathilaka on 1/11/14.
//  Copyright (c) 2014 99x Eurocenter. All rights reserved.
//

//Afaz Deen
//Add symbols for text class

#include "ELText.h"

ELText::ELText ()
: ELString() {
    AddChar(' ');
    AddChar('\t');
    AddChar('/');
    AddChar(',');
    AddChar('-');
    AddChar('\\');
    AddChar('.');
    AddChar('@');
    AddChar('(');
    AddChar(')');
    AddChar('{');
    AddChar('}');
    AddChar('[');
    AddChar(']');
    AddChar('+');
    AddChar('-');
    AddChar('=');
    AddChar('!');
    AddChar('#');
    AddChar('$');
    AddChar('%');
    AddChar('^');
    AddChar('&');
    AddChar('*');
    AddChar('<');
    AddChar('>');
    AddChar('?');
    AddChar('\'');
    AddChar('"');
    AddChar(':');
    AddChar(';');
    AddChar('|');
    AddChar('~');
    AddChar('`');
}

ELText::~ELText() {
    
}
