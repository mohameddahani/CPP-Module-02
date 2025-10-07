/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 10:00:28 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/07 10:11:16 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Student{
    private:
        int *age;
    public:
        Student(int age){
            this->age = new int(age);
        }
        Student &operator=(const Student &other){
            this->age = other.age;
            return *this;
        }
        void getAge(){
            std::cout << "age: " << *age << std::endl;
        }
        ~Student(){
            std::cout << "rah mcha" << std::endl;
            delete age;
        };
};


int main(){
    Student s1(20);
    Student s2(10);
    s2 = s1;
    s2.getAge();
}
