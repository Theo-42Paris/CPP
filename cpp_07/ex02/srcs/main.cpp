/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzara <tzara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 13:27:05 by tzara             #+#    #+#             */
/*   Updated: 2026/04/02 13:44:28 by tzara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "Array.hpp"

int main() {

    std::cout << "=== Test 1: Constructeur par défaut ===" << std::endl;
    {
        Array<int> empty;
        std::cout << "Taille : " << empty.size() << std::endl;
    }

    std::cout << "\n=== Test 2: Constructeur avec taille ===" << std::endl;
    {
        Array<int> arr(5);
        std::cout << "Taille : " << arr.size() << std::endl;
        
        std::cout << "Valeurs par défaut : ";
        for (unsigned int i = 0; i < arr.size(); i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "\n=== Test 3: Modification des éléments ===" << std::endl;
    {
        Array<int> arr(5);
        
        for (unsigned int i = 0; i < arr.size(); i++) {
            arr[i] = i * 10;
        }
        
        std::cout << "Valeurs modifiées : ";
        for (unsigned int i = 0; i < arr.size(); i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "\n=== Test 4: Constructeur par copie ===" << std::endl;
    {
        Array<int> original(3);
        original[0] = 10;
        original[1] = 20;
        original[2] = 30;
        
        Array<int> copy(original);
        
        std::cout << "Original : ";
        for (unsigned int i = 0; i < original.size(); i++) {
            std::cout << original[i] << " ";
        }
        std::cout << std::endl;
        
        std::cout << "Copy : ";
        for (unsigned int i = 0; i < copy.size(); i++) {
            std::cout << copy[i] << " ";
        }
        std::cout << std::endl;
        
        copy[0] = 999;
        
        std::cout << "Après modification de copy[0] = 999 :" << std::endl;
        std::cout << "Original[0] : " << original[0] << " (doit rester 10)" << std::endl;
        std::cout << "Copy[0] : " << copy[0] << " (doit être 999)" << std::endl;
    }

    std::cout << "\n=== Test 5: Opérateur d'assignation ===" << std::endl;
    {
        Array<int> a(3);
        a[0] = 1;
        a[1] = 2;
        a[2] = 3;
        
        Array<int> b;
        b = a;
        
        std::cout << "a : ";
        for (unsigned int i = 0; i < a.size(); i++) {
            std::cout << a[i] << " ";
        }
        std::cout << std::endl;
        
        std::cout << "b : ";
        for (unsigned int i = 0; i < b.size(); i++) {
            std::cout << b[i] << " ";
        }
        std::cout << std::endl;
        
        b[0] = 100;
        std::cout << "Après b[0] = 100 :" << std::endl;
        std::cout << "a[0] : " << a[0] << " (doit rester 1)" << std::endl;
        std::cout << "b[0] : " << b[0] << " (doit être 100)" << std::endl;
    }
	
    std::cout << "\n=== Test 6: Exception out of bounds ===" << std::endl;
    {
        Array<int> arr(5);
        
        try {
            std::cout << "Accès à arr[10] :" << std::endl;
            arr[10] = 42;
            std::cout << "❌ ERREUR : Pas d'exception levée !" << std::endl;
        }
        catch (std::exception &e) {
            std::cout << "✓ Exception attrapée : " << e.what() << std::endl;
        }
    }

    std::cout << "\n=== Test 7: Array<std::string> ===" << std::endl;
    {
        Array<std::string> arr(3);
        arr[0] = "Hello";
        arr[1] = "World";
        arr[2] = "!";
        
        std::cout << "Contenu : ";
        for (unsigned int i = 0; i < arr.size(); i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
	
    return 0;
}