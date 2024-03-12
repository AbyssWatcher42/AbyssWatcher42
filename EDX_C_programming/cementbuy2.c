/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cementbuy2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsmeyer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 05:32:19 by stsmeyer          #+#    #+#             */
/*   Updated: 2024/02/23 05:32:23 by stsmeyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main() {
    double cementNeeded;
    const int bagWeight = 120; // Weight of one bag in pounds
    const int bagCost = 45; // Cost of one bag in dollars
    
    // Prompt the user for the amount of cement needed
    printf("Enter the amount of cement needed (in pounds): ");
    scanf("%lf", &cementNeeded);
    
    // Calculate the number of bags needed
    // Since the amount of cement needed will NEVER be a multiple of 120,
    // we can safely add a small value to cementNeeded before dividing
    // to ensure we always round up when there's any remainder.
    int bagsNeeded = (int)((cementNeeded + (bagWeight - 0.1)) / bagWeight);
    
    // Calculate the total cost
    int totalCost = bagsNeeded * bagCost;
    
    // Display the result
    printf("The total cost of the cement bags needed: $%d\n", totalCost);
    
    return 0;
}
