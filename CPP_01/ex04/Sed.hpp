/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 19:16:24 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/20 19:48:12 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <fstream>
#include <sstream>

class FileProcessor{
	public:
		FileProcessor(const std::string &filename);
		~FileProcessor();
		void replaceOccurrences(const std::string &s1, const std::string &s2);

	private:
		std::string filename;
		std::ifstream inputFile;
		std::ofstream outputFile;

		bool openInputFile();
		bool createOutputFile();
		void closeInputFile();
		void closeOutputFile();
};

#endif
