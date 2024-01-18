/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 04:12:55 by hoakoumi          #+#    #+#             */
/*   Updated: 2024/01/18 05:12:19 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zom_hord = NULL;
    int i;

    i = 0;
    zom_hord = zom_hord->zombieHorde(2 , "houdita");
    while(i < 2)
    {
        zom_hord[i].announce();
        i++;
    }
    delete[] zom_hord;
}