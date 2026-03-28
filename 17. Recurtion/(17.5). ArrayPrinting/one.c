/*
#include<stdio.h>


void fun(int a[], int n, int i) {
    // বেস কেস: যদি i এর মান n এর সমান হয়
    if(i == n) 
        return;
    
    // এই ইন্ডেক্সের মান প্রিন্ট করা
    printf("%d\n", a[i]);
    
    // পরবর্তী ইনডেক্সের জন্য রিকার্সিভ কল
    fun(a, n, i+1);
}


int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    
    // অ্যারের উপাদানগুলি ইনপুট নেওয়া
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // রিকার্সিভ ফাংশন কল
    fun(a, n, 0);
    
    return 0;
}

*/