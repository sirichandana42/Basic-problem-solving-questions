
//vowel or not

#include<iostream>
using namespace std;
int main()
{
    char x;
    cin>>x;
    x=tolower(x);
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
    {
        cout<<"it is a vowel";
    }
    else{
        cout<<"not a vowel";
    }
    return 0;
}



//fibonnacci series

#include<iostream>
using namespace std;
int main()
{
    int x=0,y=1;
    cout<<x<<" "<<y<<" ";
    for(int i=0;i<10;i++)
    {
        int temp;
        temp=x;
        x=y;
        y=temp+x;
        cout<<y<<" ";
    }
    return 0;
}



//factorial
#include <iostream>
using namespace std;
int main() {
    int x,y=1;
    cin >> x;
    for (int i = 1; i <= x; ++i) 
    {
        y=y*i;
    }
    cout << y;
    return 0;
}


//PRIME OR NOT
#include<iostream>
using namespace std;
int main()
{
    int x,count=0;
    cin>>x;
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        cout<<x<<" is prime";
    }
    else{
        cout<<x<<" isnt a prime";
    }
    return 0;
}

//list of prime of certain range

#include <iostream>
using namespace std;
int main() 
{
    int n; cin >> n;
    for (int i = 2; i <= n; ++i) 
    {
        bool y=true;
        for (int j = 2; j*j <= i; ++j) 
        {
            if (i % j == 0) {
                y=false;
                break;
            }
        }
        if (y) 
        {
            cout << i << " ";
        }
    }
    return 0;
}



//reverse of a number

#include<iostream>
using namespace std;
int main()
{
    int x,r=0,rev=0;
    cin>>x;
    while(x>0)
    {
        r=x%10;
        rev=rev*10+r;
        x=x/10;
    }
    cout<<rev;
}

//sum of digits of a number

#include<iostream>
using namespace std;
int main()
{
    int x,r=0,sum=0;
    cin>>x;
    while(x>0)
    {
        r=x%10;
        sum=sum+r;
        x=x/10;
    }
    cout<<sum;
}

//armstrong number

#include<iostream>
using namespace std;
int main()
{
    int x,r=0,sum=0,count=0;
    cin>>x;
    int temp=x;
    while(x>0)
    {
        r=x%10;
        sum=sum+r*r*r;
        x=x/10;
    }
    if(sum==temp)
    {
        cout<<"armstrong number";
    }
    else{
        cout<<"not an armstrong number";
    }
    return 0;
}


//print hello world without semicolon

#include<iostream>
using namespace std;
int main()
{
    if(cout<<"hello world")
    {
    }
}


//floyds triangle

#include<iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    int k=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=i)
            {
                cout<<k<<" ";
                k++;
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}




//swapping w/o third variable

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<" "<<b;
    return 0;
}



//reverse a string
#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string str;
    cin>>str;
    int n = str.length();

    for (int i = 0; i < n / 2; ++i) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }

    cout << "Reversed string: " << str << endl;
    return 0;
}

//reversing a string method 2

#include<iostream>
using namespace std;
int main()
{
    string str,str2;
    cin>>str;
    for(int i=str.length()-1;i>=0;i--)
    {
        str2.append(1,str[i]);
    }
    cout<<str2;
    return 0;
}

//palindorminc string


#include <iostream>
#include <string>
using namespace std;
int main() 
{ 
    string str;
    cin>>str;
    string str2=str;
    int n = str.length();
    for (int i = 0; i < n / 2; i++) 
    {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
    if(str==str2)
    {
        cout<<"palindrome";
    }
    else
        cout<<"not a palindrome";
    
    return 0;
}


//abstraction implementation for explaining
#include<iostream>
using namespace std;
class shape
{
    public:
    virtual void draw()=0;

};
class circle:public shape{
    void draw() override
    {
        cout<<"drawing a circle";
    }
};
class square:public shape{
    void draw() override
    {
        cout<<"drawing a square";
    }
};
int main()
{
    circle obj1;
    square obj2;
    shape*  shape1= &obj1;
    shape* shape2= &obj2;
    shape1->draw();
    cout<<"\n";
    shape2->draw();
}

//polymorphism
//method overloading
#include<iostream>
using namespace std;
class siri
{
    public:
    int sum(int a ,int b)
    {
        cout<<a+b;
    }
    int sum(int a, int b,int c)
    {
        cout<<a+b+c;
    }
};
int main()
{
    siri obj;
    obj.sum(1,2);
    obj.sum(1,2,3);
}

//operator overloading
#include<iostream>
using namespace std;
class siri
{
    public:
    int a;
    void operator ++()
    {
        ++a;
    }
    void operator ++(int)
    {
        a++;
    }

};
int main()
{
    siri obj;
    cin>>obj.a;
    ++obj;
    cout<<obj.a;
    obj++;
    cout<<obj.a;
}
