/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 04:11:58 by hoakoumi          #+#    #+#             */
/*   Updated: 2024/01/18 04:12:06 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zom;
    zom = NULL;

    zom = zom->newZombie("houda");
    zom->randomChump("mimi");
    delete zom;
}  
