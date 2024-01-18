/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 04:13:06 by hoakoumi          #+#    #+#             */
/*   Updated: 2024/01/18 05:01:58 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name )
{
    Zombie *horde;
    int i ;

    horde = new Zombie[N];
    i = 0;

    while(i < N)
    {
        horde[i].name = name;
        i++;
    }
    return(horde);
}