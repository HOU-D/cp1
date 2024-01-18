/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 04:14:05 by hoakoumi          #+#    #+#             */
/*   Updated: 2024/01/18 05:19:19 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;
    
    std::cout << "\033[35m The memory address of the string variable : \033[0m" << &str << std::endl;
    std::cout << std::endl;
    std::cout << "\033[35m The memory address held by stringPTR      : \033[0m" << stringPTR << std::endl;
    std::cout << std::endl;
    std::cout << "\033[35m The memory address held by stringREF      : \033[0m" << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "\033[35m The value of the string variable          : \033[0m" << str << std::endl;
    std::cout << std::endl;
    std::cout << "\033[35m The value pointed to by stringPTR         : \033[0m" << *stringPTR << std::endl;
    std::cout << std::endl;
    std::cout << "\033[35m The value pointed to by stringREF         :\033[0m " << stringREF << std::endl;
    
    return 0;
}
