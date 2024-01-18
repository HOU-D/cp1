/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 04:18:45 by hoakoumi          #+#    #+#             */
/*   Updated: 2024/01/18 05:53:43 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int ac, char **av)
{
    (void)av;
    if(ac != 4)
    {
        std::cout << "Program takes three parameters" << std::endl;
        return(1);
    }
}