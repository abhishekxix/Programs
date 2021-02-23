//The following C++ program is used to print various patterns that I practised as an exercise
#include<iostream>


using namespace std;

void triangle(int);
void triangle2(int);
void char_box();
void char_box2();
void num_box(int);
void num_box2(int);
void char_triangle();
void char_triangle2();
void num_triangle_inverted(int);
void char_triangle_inverted();
void triangle3(int);
void pattern(int);
void pyramid(int);
void hollowbox(int);
void left_triangle(int);
void hexagon(int);
void hollow_hex_box(int);

int main()
{ 
    int n;
    cout<<"Enter the size of pattern :: ";
    cin>>n;
    triangle(n);
    triangle2(n);
    char_box();
    char_box2();
    num_box(n);
    num_box2(n);
    char_triangle();
    char_triangle2();
    num_triangle_inverted(n);
    char_triangle_inverted();
    triangle3(n);
    pattern(n);
    pyramid(n);
    hollowbox(n);
    left_triangle(n);
    hexagon(n);
    hollow_hex_box(n);
    return 0;
}

void triangle(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
        //system("clear");
    }
}

void triangle2(int n)
{
    cout<<endl;
    int count=1;
    for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {   
                cout<<count;
                count++;
            }
            cout<<endl;
            
        } 
}

void char_box()
{   
    cout<<endl;
    for(int i = 0; i < 6; i++)
    {
        for(char j = 'A'; j <= 'F'; j++)
        {
            cout<<j;
        }cout<<endl;
    }
}

void char_box2()
{   
    cout<<endl;
    for(char i = 'A'; i <= 'F'; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            cout<<i;
        }cout<<endl;
    }
}

void num_box(int n)
{   
    cout<<endl;
    for(int i = n; i > 0; i--)
    {
        for(int j = 1; j <= n; j++)
        {
            cout<<i;
        }cout<<endl;
    }
}

void num_box2(int n)
{   
    cout<<endl;
    for(int i = n; i > 0; i--)
    {
        for(int j = n; j > 0; j--)
        {
            cout<<j;
        }cout<<endl;
    }
}

void char_triangle()
{   
    cout<<endl;
    for(char i = 'A' ; i <= 'E'; i++)
    {
        for(char j = 'A'; j <= i; j++)
        {
            cout<<i;
        }cout<<endl;
    }
}

void char_triangle2()
{   
    cout<<endl;
    for(char i = 'A' ; i <= 'E'; i++)
    {
        for(char j = 'A'; j <= i; j++)
        {
            cout<<j;
        }cout<<endl;
    }
}

void num_triangle_inverted(int n)
{
    cout<<endl;
    for(int i=n;i>0;i--)
        {
            for(int j=1;j<=i;j++)
            {   
                cout<<j;
            }
            cout<<endl;
            
        } 
}

void char_triangle_inverted()
{
    cout<<endl;
    for(char i = 'E' ; i >= 'A'; i--)
    {
        for(char j = 'E'; j >= i; j--)
        {
            cout<<j;
        }cout<<endl;
    }
}

void triangle3(int n)
{
    cout<<endl;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(j < i)
            {
                cout<<" ";
            }
            else cout<<"*";
        }cout<<endl;
    }
}

void pattern(int n)
{
    cout<<endl;
    for(int i = 1, k = 0; i <= n; i++, k+=2)
    {
        for(int j = 0; j < (n + i) - 1 ; j++)
        {
           if(j<k)
           {
               cout<<"  ";
           }
           else cout<<"* ";
            
        }
        cout<<endl;
    }

}

void pyramid(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <=n; j++)
        {
            if(j <= n - i)
            {
                cout<<"  ";
            }
            else cout<<" *  ";
        }cout<<endl;
    }
}

void hollowbox(int n)
{
    cout<<endl;
    for(int i = 1; i <=n; i++)
    {
        if(i == 1 || i == n)
        {
            for(int j = 1; j <= n; j++)
            {
                cout<<"* ";
            }
        }
        else for(int j = 1;j <= n; j++)
        {
            if (j == 1 || j == n)
            {
                cout<<"* ";
            }
            else cout<<"  ";
        }
        cout<<endl;
    }
}

void left_triangle(int n)
{
    cout<<endl;
    for(int i = 1; i <= (n + 1) / 2; i++)
    {
        for(int j = 1; j <= (n + 1) / 2; j++)
        {
            if(j <= ((n + 1) / 2) - i)
            {
                cout<<" ";
            }
            else cout<<"*";
        }cout<<endl;
    }
    for(int i = 1; i <= n -((n + 1) / 2); i++ )
    {
        for(int j = 1; j <= (n + 1) / 2; j++)
        {
            if(j <= i)
            {
                cout<<" ";
            }
            else cout<<"*";
        }cout<<endl;
    }
}

void hexagon(int n)
{
    cout<<endl;
    for(int i = 1; i <= (n + 1) / 2; i++)
    {
        for(int j = 1; j <= (n + 1) / 2; j++)
        {
            if(j <= ((n + 1) / 2) - i)
            {
                cout<<" ";
            }
            else cout<<"* ";
        }cout<<endl;
    }
    for(int i = 1; i <= n -((n + 1) / 2); i++ )
    {
        for(int j = 1; j <= (n + 1) / 2; j++)
        {
            if(j <= i)
            {
                cout<<" ";
            }
            else cout<<"* ";
        }cout<<endl;
    }
}

void hollow_hex_box(int n)
{
    for(int i = 1; i <= n/2; i++)
    {
        for(int j = 1; j <= n + 1; j++)
        {
            
        }
    }
}