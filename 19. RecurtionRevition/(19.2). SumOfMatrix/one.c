/*
#include<stdio.h>
int main()
{
  int row,col;
  scanf("%d %d",&row,&col);   
  int a[row][col],b[row][col],c[row][col];  // তিনটি ম্যাট্রিক্স ডিক্লেয়ার করা হচ্ছে সেইম রো এবং কলামের। প্রথম দুটি ইনপুট নেওয়ার জন্য, শেষেরটি যোগফল রাখার জন্য। 
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      scanf("%d",&a[i][j]);    // প্রথম ম্যাট্রিক্স ইনপুট নিচ্ছি। 
    }
  }
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      scanf("%d",&b[i][j]);   // দ্বিতীয় ম্যাট্রিক্স ইনপুট নিচ্ছি। 
    }
  }
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      c[i][j]=a[i][j]+b[i][j];   // ইনপুট নেওয়া দুটি ম্যাট্রিক্স এর ভেলু যোগ করে যোগফল ম্যাট্রিক্স এ রাখা হচ্ছে। 
    }
  }
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      printf("%d ",c[i][j]);  // যোগফল ম্যাট্রিক্স প্রিন্ট করা হচ্ছে। 
    }
    printf("\n");
  }
  return 0;
}
*/