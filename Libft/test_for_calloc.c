/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_for_calloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsmeyer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 08:38:22 by stsmeyer          #+#    #+#             */
/*   Updated: 2024/03/24 08:56:06 by stsmeyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

void *ft_calloc(size_t nmemb, size_t size);
void *ft_memset(void *s, int c, size_t n);

void test_normal_allocation() {
    int n = 5;
    int *ptr = (int*)ft_calloc(n, sizeof(int));
    if (ptr == NULL) {
        printf("Test 1 failed: ft_calloc returned NULL\n");
        exit(1);
    }
    for (int i = 0; i < n; ++i) {
        if (ptr[i] != 0) {
            printf("Test 1 failed: allocated memory not initialized to zero\n");
            exit(1);
        }
    }
    free(ptr);
    printf("Test 1 passed\n");
}

void test_zero_elements() {
    int *ptr = (int*)ft_calloc(0, sizeof(int));
    if (ptr == NULL) {
        printf("Test 2 failed: ft_calloc returned NULL for zero elements\n");
        exit(1);
    }
    free(ptr);
    printf("Test 2 passed\n");
}

void test_zero_size() {
    int n = 5;
    int *ptr = (int*)ft_calloc(n, 0);
    if (ptr == NULL) {
        printf("Test 3 failed: ft_calloc returned NULL for zero size\n");
        exit(1);
    }
    free(ptr);
    printf("Test 3 passed\n");
}

void test_large_allocation() {
    int *ptr = (int*)ft_calloc(SIZE_MAX / sizeof(int) + 1, sizeof(int));
    if (ptr != NULL) {
        printf("Test 4 failed: ft_calloc did not return NULL for large allocation\n");
        exit(1);
    }
    printf("Test 4 passed\n");
}

void test_memory_usage() {
    char *str = (char*)ft_calloc(11, sizeof(char));
    if (str == NULL) {
        printf("Test 5 failed: ft_calloc returned NULL\n");
        exit(1);
    }
    strcpy(str, "0123456789");
    if (strcmp(str, "0123456789") != 0) {
        printf("Test 5 failed: allocated memory not usable\n");
        exit(1);
    }
    free(str);
    printf("Test 5 passed\n");
}

int main() {
    test_normal_allocation();
    test_zero_elements();
    test_zero_size();
    test_large_allocation();
    test_memory_usage();
    printf("All tests passed!\n");
    return 0;
}
