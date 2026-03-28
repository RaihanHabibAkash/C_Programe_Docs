/*
#include<stdio.h>
void func(int *a)     // একটি পয়েন্টার দিয়ে এরে রিসিভ করা হচ্ছে
{
  int sz = sizeof(a)/sizeof(int);   // সাইজ বের করা হচ্ছে। সেইম মেইন ফাংশনের মতো করে।
  printf("Size in func = %d\n",sz);  // ফাংশনের ভিতর এরে সাইজ বের করা হচ্ছে।
}
int main()
{
  int n;
  scanf("%d",&n);  // এরে সাইজ ইনপুট নেওয়া হচ্ছে। 
  int a[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);   // এরে এলিমেন্ট ইনপুট নেওয়া হচ্ছে। 
  }
  int sz = sizeof(a)/sizeof(int);  
  printf("Size in main function = %d\n",sz);  // এরে সাইজ প্রিন্ট করা হচ্ছে। 
  func(a);  // ফাংশনকে কল করে এরে পাস করে দেওয়া হচ্ছে। 
}
*/

/*
#include<stdio.h>
void func(int a[], int n)  // প্যারামিটার হিসেবে প্রথমে এরে নেওয়া হচ্ছে, তারপর এরে সাইজ।
{
  for(int i=0;i<n;i++)
  {
    printf("%d ",a[i]);  // এরে এলিমেন্ট প্রিন্ট করা হচ্ছে। 
  }
}
int main()
{
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);  // এরে এলিমেন্ট ইনপুট নেওয়া হচ্ছে। 
  }
  func(a,n);    // ফাংশনকে কল করে একই সাথে এরে এবং এরের সাইজ পাস করে দেওয়া হচ্ছে।
}
*/