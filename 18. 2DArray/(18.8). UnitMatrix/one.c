/*
#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int flag=1;
    if(row != col) 
    {
        flag=0;
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==j)
            {
                if(a[i][j] != 1)   // প্রাইমারি ডায়াগোনালে এসে আমরা চেক করছি এখানে ভেলু ১ আছে কিনা। না থাকলে এটি ইউনিট ম্যাট্রিক্স হবে না। 
                {
                    flag=0;        // ১ না থাকলে আমরা ফ্ল্যাগ এর মান ০ করে দিচ্ছি। 
                }
            }
            else if(a[i][j]!=0)
            {
                flag=0;
            }
        }
    }
    if(flag==1)            // সবশেষে চেক করছি ফ্ল্যাগ এর মধ্যে ১ আছে কিনা। 
    {
        printf("Unit Matrix\n");      // ১ থাকলে এটি একটি ইউনিট ম্যাট্রিক্স। 
    }
    else 
    {
        printf("Not Unit matrix\n");   // আর ১ না থাকলে এটি একটি ইউনিট ম্যাট্রিক্স না।
    }  
    return 0;
}
*/


/*
#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int flag=1;
    if(row != col) 
    {
        flag=0;
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i+j==row-1)    // প্রাইমারি ডায়াগোনালের কন্ডিশন চেঞ্জ করে সেকেন্ডারি ডায়াগোনাল এর কন্ডিশন দেওয়া হয়েছে। 
            {
                if(a[i][j] != 1)
                {
                    flag=0;
                }
            }
            else if(a[i][j]!=0)
            {
                flag=0;
            }
        }
    }
    if(flag==1)
    {
        printf("Secondary Unit Matrix\n");
    }
    else 
    {
        printf("Not Secondary Unit matrix\n");
    }
    return 0;
}
*/