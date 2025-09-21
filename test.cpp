/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 12:54:19 by mdahani           #+#    #+#             */
/*   Updated: 2025/09/21 12:54:19 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Person{
    private:
        std::string name;
    public:
        // * Default Constructor
        Person(const std::string &name);
        
        // * Copy Constructor
        Person(const Person &other);

        // * Copy Assignment Operator
        Person &operator=(const Person &other);

        // * Destructor
        ~Person();

        // * Setters & Getters
        void setName(const std::string &value);
        std::string getName() const;

        // * Metod
        void sayHello() const;
};

// * initializer list in Default Constructor
Person::Person(const std::string &name) : name(name) {}

// * initializer list in Copy Constructor
Person::Person(const Person &other) : name(other.name) {}

// * Copy Assignment Operator
Person &Person::operator=(const Person &other){
    if (this != &other){
        this->name = other.name;
    }
    return *this;
}

// * Destructor
Person::~Person(){}

// * Setters & Getters
void Person::setName(const std::string &value){
    this->name = value;
}

std::string Person::getName()const {
    return this->name;    
}

void Person::sayHello() const {
    std::cout << "Hello " << this->getName() << std::endl;
}

int main(){
    Person p1("Mohamed");
    p1.sayHello();

    Person p2(p1);
    p2.sayHello();
    p2.setName("Soufiane");

    Person p3("Aymen");
    p3 = p2 = p1;
    p3.sayHello();
}
