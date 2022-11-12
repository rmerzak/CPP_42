/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 21:24:38 by rmerzak           #+#    #+#             */
/*   Updated: 2022/11/12 20:21:49 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <algorithm>

int main(int argc, char **argv)
{
    //std::size_t temp;
    std::string myText;
    int i;
    if (argc == 4)
    {
        std::ifstream MyFile(argv[1]);
        std::ofstream MyReplaceFile(("file.replace"));
        if (!strcmp(argv[2], argv[3])) {
            return 0;
        }
        while (getline(MyFile, myText))
        {
            i = 0;
            while (i != -1)
            {
                i = myText.find(argv[2]);
                if(i != -1) {
                    myText.erase(i, 5);
                    myText.insert(i, argv[3]);    
                }
            }
            if(!MyFile.eof())
            {
                myText.append("\n");
            }
            MyReplaceFile << myText;
        }
        MyFile.close();
        MyReplaceFile.close();
    }
}

// find => erase ==> insert