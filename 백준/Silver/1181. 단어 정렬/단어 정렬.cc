#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

char arr[20000][51];
char tmp[20000][51];

int comlen(char a[], char b[]) {
    if (strlen(a) < strlen(b)) {
        return 1;
    }
    else if (strlen(a) > strlen(b)) {
        return 2;
    }
    else
        return 3;
}

int combook(char a[], char b[]) {
    if (strcmp(a, b) <= 0)
        return 1;
    else
        return 2;
}

void merge(int left, int right) {
    int mid = (left + right) / 2;
    int lp = left, rp = mid + 1, k = left;
    while ((lp <= mid) && (rp <= right)) {
        if (comlen(arr[lp], arr[rp]) == 1) {
            strcpy(tmp[k++], arr[lp++]);
        }
        else if (comlen(arr[lp], arr[rp]) == 2) {
            strcpy(tmp[k++], arr[rp++]);
        }
        else {
            if (combook(arr[lp], arr[rp]) == 1)
                strcpy(tmp[k++], arr[lp++]);
            else
                strcpy(tmp[k++], arr[rp++]);
        }
    }
    while (lp <= mid) {
        strcpy(tmp[k++], arr[lp++]);
    }
    while (rp <= right) {
        strcpy(tmp[k++], arr[rp++]);
    }
    for (int i = left; i <= right; i++)strcpy(arr[i], tmp[i]);
}

void partition(int left, int right) {
    if (left >= right) return;
    int mid = (left + right) / 2;
    partition(left, mid);
    partition(mid + 1, right);
    merge(left, right);
}


int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }
    partition(0, n - 1);
    for (int i = 0; i < n; i++) {
        while(i + 1<n && strcmp(arr[i], arr[i+1]) == 0)i++;
        printf("%s\n", arr[i]);
    }
    return 0;
}