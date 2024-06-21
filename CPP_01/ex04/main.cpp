/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 18:39:19 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/20 19:31:15 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int argc, char **argv)
{
    if (argc != 4){
        std::cerr << "Error: invalid number of arguments" << std::endl;
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    std::string fileName = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    FileProcessor processor(fileName);

    processor.replaceOccurrences(s1, s2);
    return 0;
}