/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyi <tyi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:51:22 by tyi               #+#    #+#             */
/*   Updated: 2023/05/27 19:28:34 by tyi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main() {

    Point   a(0, 0);
    Point   b(10, 0);
    Point   c(0, 10);
    Point   point(5, 5);

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "point = " << point << std::endl;

    std::cout << "bsp(a, b, c, point) = " << bsp(a, b, c, point) << std::endl;

    return 0;
}