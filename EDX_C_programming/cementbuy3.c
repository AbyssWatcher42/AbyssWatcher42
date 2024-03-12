/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cementbuy3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsmeyer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 05:32:51 by stsmeyer          #+#    #+#             */
/*   Updated: 2024/02/23 05:33:10 by stsmeyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main() 
{
    double cementNeeded;
    const int bagWeight = 120; // Weight of one bag in pounds
    const int bagCost = 45; // Cost of one bag in dollars
    
    // Prompt the user for the amount of cement needed
    printf("Enter the amount of cement needed (in pounds): ");
    scanf("%lf", &cementNeeded);
    
    // Calculate the number of bags needed
    int bagsNeeded = (int)(cementNeeded / bagWeight);
    
    // Check if there is a need for an extra bag
    if (cementNeeded > bagsNeeded * bagWeight) {
        bagsNeeded++;
    }
    
    // Calculate the total cost
    int totalCost = bagsNeeded * bagCost;
    
    // Display the result
    printf("The total cost of the cement bags needed: $%d\n", totalCost);
    
    return 0;
}
