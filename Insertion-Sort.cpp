//
//  Created by azx on 16/3/5.
//  Copyright © 2016年 azx. All rights reserved.
//
//  输入要排序的数字，终止符结束，用插入排序得出非降序列

#include <cstdio>

int A[10000];

int main()
{
    int count = 1;
    scanf("%d", &A[0]); // 先将第一个数字放入数组的首位
    while (scanf("%d", &A[count]) == 1) {
        for (int i = count; i > 0; i--) {
            if (A[i] < A[i-1]) {  // 如果插入值比前一个小，则交换
                int tmp = A[i];
                A[i] = A[i-1];
                A[i-1] = tmp;
            }
        }
        count++;
    }
    for (int j = 0; j < count; j++) {
        printf("%d ", A[j]);
    }
    return 0;
}
