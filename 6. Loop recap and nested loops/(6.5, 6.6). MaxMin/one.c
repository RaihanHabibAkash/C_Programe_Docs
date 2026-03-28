/*
#include<stdio.h>
#include<limits.h>   // INT_MIN, INT_MAX এর জন্য এই হেডার ফাইলটি ইনক্লুড করা হচ্ছে
int main()
{
    int n;
    scanf("%d",&n);    // কতগুলো সংখ্যা থাকবে তা ইনপুট নিচ্ছি
    int a,max=INT_MIN;   // শুরুতে সবথেকে ছোট নাম্বার রেখে দিচ্ছি
    for(int i=1;i<=n;i++)   
    { 
        scanf("%d",&a);   // লুপ চালিয়ে প্রতিবার সংখ্যা ইনপুট নিচ্ছি
        if(a>max)         // চেক করে দেখছি যে সংখ্যাটি ম্যাক্স এর থেকে বড় কিনা
        {
            max=a;        // বড় হলে ম্যাক্স ভেরিয়েবলকে আপডেট করছি
        }
    }
    printf("%d",max);
    return 0;
}
*/


/*
#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,max=INT_MIN,min=INT_MAX;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a>max)
        {
            max=a;
        }
        if(a<min)     // চেক করা হচ্ছে যে সংখ্যাটি মিনিমাম এর থেকেও ছোট কিনা
        {
            min=a;     // ছোট হলে সেইমভাবে মিনিমাম ভেরিয়েবলটি আপডেট করা হচ্ছে
        } 
    }
    printf("%d %d\n",min,max);
    return 0;
}
*/