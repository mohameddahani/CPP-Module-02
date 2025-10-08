/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 10:00:28 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/08 18:07:06 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Test {
    public:
    int getNumber() {
        return 10;
    }
};

std::ostream &operator<<( std::ostream &cout, Test &obj){
    cout << obj.getNumber();
    return cout; 
}


int main(){
    Test a;
    std::cout << a << std::endl;
}
