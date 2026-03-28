/*
#include<stdio.h>
#include<limits.h>


int main()
{
    int n;
    scanf("%d",&n);   
    int a[n];
    for(int i=0;i<n;i++)  // এরে ইনপুট নেওয়া হচ্ছে। 
    {
        scanf("%d",&a[i]);
    }
    
    int min = INT_MAX;   // প্রথমে min সমান অনেক বড় একটি মান রেখেছি(INT_MAX = 2147483647)
    int max = INT_MIN;    // প্রথমে max সমান অনেক ছোট একটি মান রেখেছি(INT_MIN = –2147483648)


    for(int i=0;i<n;i++)  // লুপ চালিয়ে এরের প্রতিটি ইন্ডেক্সে যাচ্ছি। 
    {
        if(a[i] < min) {  //এরের প্রত্যেকটি ভ্যালুর জন্য চেক করতেছি min এর থেকে ছোট কিনা।
            min = a[i];   // min এর থেকে ছোট হলে, min সমান এরের ভ্যালুটি রেখে দিচ্ছি।
        }


        if(a[i] > max) {  //এরের প্রত্যেকটি ভ্যালুর জন্য চেক করতেছি max এর থেকে বড় কিনা।
            max = a[i];   // max এর থেকে বড় হলে, max সমান এরের ভ্যালুটি রেখে দিচ্ছি।
        }
    }
    
    printf("Minimum = %d, Maximum = %d\n", min, max); // min এবং max ভেরিয়েবল প্রিন্ট করা হয়েছে।
    

    return 0;

}
*/