/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 10:00:28 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/07 18:44:03 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Test {
    int *data;
public:
    Test() { data = new int(42); }
    ~Test() { delete data; }

    int getData(void){
        return *data;
    }

    Test &operator=(Test &other) {
        if (this != &other)
        {
            *this->data = *other.data;
        }
        
        return *this;
    }
};


int main(){
    Test a;
    Test b;
    b = b;

    
    std::cout << b.getData() << std::endl;
}
