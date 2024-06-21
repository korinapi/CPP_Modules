/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 19:23:59 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/20 19:48:40 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

FileProcessor::FileProcessor(const std::string &filename) : filename(filename) {
}

FileProcessor::~FileProcessor() {
    closeInputFile();
    closeOutputFile();
}

void FileProcessor::replaceOccurrences(const std::string &s1, const std::string &s2)
{
    if (!openInputFile()){
        std::cerr << "Error: could not open file : " << filename << std::endl;
        return;
    }

    if (!createOutputFile()){
        std::cerr << "Error: could not create file : " << filename << ".replace" << std::endl;
        closeInputFile();
        return;
    }

    std::stringstream buffer;
    buffer << inputFile.rdbuf();
    std::string content = buffer.str();

    closeInputFile();

    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos){
        content.replace(pos, s1.length(), s2);
        pos += s2.length();
    }

    outputFile << content;
    closeOutputFile();
}

bool FileProcessor::openInputFile(){
    inputFile.open(filename);
    return inputFile.is_open();
}

bool FileProcessor::createOutputFile(){
    outputFile.open(filename + ".replace");
    return outputFile.is_open();
}

void FileProcessor::closeInputFile(){
    if (inputFile.is_open())
        inputFile.close();
}

void FileProcessor::closeOutputFile(){
    if (outputFile.is_open())
        outputFile.close();
};