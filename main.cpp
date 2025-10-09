/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 10:00:28 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/09 14:56:58 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include <iostream>
using namespace std;

class Number {
    int value;
public:
    Number(int v) : value(v) {}

    int getValue() const { return value; }
    void setValue(int v) { value = v; }

    // دالة ترجع أصغر Number
    static Number& min(Number &a, Number &b) {  // ⚠️ non-const reference
        return (a.value < b.value) ? a : b;
    }

    // دالة ترجع أصغر Number للـ const objects
    static const Number& min(const Number &a, const Number &b) {
        return (a.value < b.value) ? a : b;
    }
};

int main() {
    Number n1(10);
    Number n2(20);

    // استخدام الدالة العادية (non-const)
    Number &small = Number::min(n1, n2);
    small.setValue(5); // ✅ مسموح بالتعديل

    cout << "n1: " << n1.getValue() << ", n2: " << n2.getValue() << endl;

    // استخدام دالة const
    const Number c1(15);
    const Number c2(25);
    const Number &smallConst = Number::min(c1, c2);
    // smallConst.setValue(100); // ❌ خطأ! لا يمكن تعديل const

    cout << "smallConst: " << smallConst.getValue() << endl;

    return 0;
}

