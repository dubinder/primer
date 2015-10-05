//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// Dylan Binder
// Copyright 2015
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
//* __4:__ Write a class named Person that represents the name and address of a person.
//  Use a string to hold each of these elements.Subsequent exerciese will incrementally add features to this class.
//
//* __5 :__ Provide operations in your Person class to return the name and address.
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

#pragma once
#ifndef PERSON_H
#define PERSON_H

#include<string>

class Person
{
  public:

    std::string getName() const { return m_name; }
    std::string getAddress() const { return m_address; }

  private:
    std::string m_name;
    std::string m_address;
};

#endif /* PERSON_H */
