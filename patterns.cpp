/*
//hollow rectangle with number
#include<iostream>
using namespace std;
int main()
{
    int rows,cols,n;
    cout<<"enter a number:";cin>>n;
    cout<<"enter rows:";cin>>rows;
    cout<<"enter cols:";cin>>cols;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=cols;j++)
        {
            if(i==1||i==rows||j==1||j==cols)
            {
                cout<<n;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}

//recatngle with number
#include<iostream>
using namespace std;
int main()
{
    int rows,cols,n;
    cout<<"enter a number:";cin>>n;
    cout<<"enter rows:";cin>>rows;
    cout<<"enter cols:";cin>>cols;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<n;
        }
        cout<<endl;
    }
    return 0;
}



//rectangle with stars

#include<iostream>
using namespace std;
int main()
{
    int rows,cols;
    cin>>rows;
    cin>>cols;
    for(int i=0;i<=rows;i++)
    {
        for(int j=0;j<=cols;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

//hollow rectangle with stars

#include<iostream>
using namespace std;
int main()
{
    int rows,cols;
    cin>>rows>>cols;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=cols;j++)
        {
            if(i==1||i==rows||j==1||j==cols)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}


//half pyramid using stars

#include<iostream>
using namespace std;
int main()
{
    int rows;
    cin>>rows;
    for(int i=0;i<=rows;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}


// inverted half pyramid

#include<iostream>
using namespace std;
int main()
{
    int rows;
    cin>>rows;
    for(int i=rows;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
return 0;
}

or 

#include<iostream>
using namespace std;
int main()
{
    int r;cin>>r;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}


//half pyramid after 180 rotation

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(j>n-i)  
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}

/*
// half pyramid using numbers

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//inverted half pyramid using numbers

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n+1-i;j++)  --------------------------------------------------------------------
        {
            cout<<j;
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//half pyramid using numbers same only

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//inverted half pyramid using numbers same
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)

        {
            cout<<i;
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}


//FLOYDS TRIANGLE
1
2 3
4 5 6
7 8 9 10

#include<iostream>
using namespace std;
int main()
{
    int n,x=1;    --------------------------------------------------------------------
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)

        {
            cout<<x;
            x++;
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}


// 0-1 pattern

#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if((i+j)%2==0)   
            {
                cout<<"1";
                cout<<" ";
            }
            else{
                cout<<"0";
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}

//palindromic triangle


//diamond

#include<iostream>
using namespace std;
int main()
{
    int r;
    cin>>r;
    
}
*/
