/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 04:13:02 by hoakoumi          #+#    #+#             */
/*   Updated: 2024/01/18 05:07:51 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie :: announce( void )
{
    std::cout << name << " Hello" << std::endl;

}

Zombie::Zombie(){}

Zombie::~Zombie()
{
    std::cout << name << ": has been destroyed." << std::endl;

}
