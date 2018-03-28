/*************************************************************************
	> File Name: quick_sort.c
	> Author: luoyi
	> Mail: 596890983@qq.com
	> Created Time: 2018年03月03日 星期六 11时01分11秒
 ************************************************************************/

#include<stdio.h>

#define swap(a, b) { \
    *(a) ^= *(b); \
    *(b) ^= *(a); \
    *(a) ^= *(b); \
}

void quick_sort(int *data, int left, int right) {
    if(left >= right) return;
    int l = left, r = right, target = data[l];
    while(l < r) {
        while(l < r && data[r] >= target) r--;
        if(l < r) swap(data + l, data + r);
        while(l < r && data[l] <= target) l++;
        if(l < r) swap(data + l, data + r);
    }
    data[l] = target;
    quick_sort(data, left, l - 1);
    quick_sort(data, l + 1, right);
    return ;
}

