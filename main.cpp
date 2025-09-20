/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 09:39:02 by mdahani           #+#    #+#             */
/*   Updated: 2025/09/17 09:40:14 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// From Module 02 to Module 09, your classes must be designed in the Orthodox Canonical Form:
class Student {
private:
    std::string name;

public:
    // 1. Constructor افتراضي
    Student() : name("Unknown") {}

    // 2. Copy Constructor
    Student(const Student& other) : name(other.name) {}

    // 3. Copy Assignment Operator
    Student& operator=(const Student& other) {
        if (this != &other)
            name = other.name;
        return *this;
    }

    // 4. Destructor
    ~Student() {}
};
