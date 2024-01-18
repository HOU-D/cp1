/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 04:12:42 by hoakoumi          #+#    #+#             */
/*   Updated: 2024/01/18 04:12:44 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie :: announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;

}

Zombie::Zombie(){}

Zombie::~Zombie()
{
    std::cout << name << ": has been destroyed." << std::endl;

}
