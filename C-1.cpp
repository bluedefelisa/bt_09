#include<iostream>

using namespace std;

int strlen(const char* a)
{
    int length = 0;
    while( a[length] != '\0') length++;
    return length;
}

char* reverse(const char* a)
{
    char* s = new char[strlen(a) + 1];
    for(int i = 0; i < strlen(a); i++)
    {

        *(s+i) = *(a+strlen(a)-i-1);

    }
    s[strlen(a)] = '\0';
    return s;
}

char* delete_char( const char* a, char c)
{
    char* s = new char[strlen(a) + 1];
    for(int i = 0; i < strlen(a); i++){*(s+i) = *(a+i);}
    for(int i = 0; i < strlen(a); i++)
    {
        if(*(s+i) == c)
        {
            for(int j = i; j < strlen(a); j++)
            {
                *(s+j) = *(s+j+1);
            }
            i--;
        }
    }
    s[strlen(s)] ='\0';
    return s;
}

char* pad_right(const char* a, int n)
{
    char* s = new char[n + 1];
    for(int i =0 ; i < n; i++)
    {
        if( i >= strlen(a))
        {
            *(s+i)=' ';
        }
        else
        {
            *(s+i)=*(a+i);
        }
    }
    s[n]='\0';
    return s;
}

char* pad_left(const char* a, int n)
{
    char* s = new char[n + 1];
    int b = 0;
    for(int i = 0; i < n; i++)
    {
        if(i >= n-strlen(a))
        {
            *(s+i)=*(a+b);
            b++;
        }
        else
        {
            *(s+i)=' ';
        }
    }
    s[n]='\0';
    return s;
}

char* truncate(const char* a, int n)
{
    char* s = new char[n + 1];
    for(int i = 0; i < n; i++)
    { *(s+i) = *(a+i); }
    s[n] = '\0';
    return s;
}

bool is_palindrome(char a[])
{
    for(int i = 0; i < strlen(a)/2; i++)
    {
        if(*(a+i) != *(a+strlen(a)-i-1)) return false;
    }
    return true;
}

char* trim_right(const char* a)
{
    int n = 0;
    char* s = new char[strlen(a) - n + 1];
    for(int i = strlen(a)-1; i >= 0; i--)
    {
        if(*(a+i) != ' ')
        {
                break;
        }
        n++;
    }
    for(int i = 0; i < strlen(a)-n; i++)
    { *(s+i) = *(a+i); }
    s[strlen(a) - n - 1] ='\0';
    return s;
}

char* trim_left(const char* a)
{
    int n = 0;
    for(int i = 0; i < strlen(a); i++)
    {
        if(*(a+i) != ' ') break;
        else
        {
            n++;
        }
    }
    char* s = new char[strlen(a)- n + 1];
    for(int i = 0; i < strlen(a)-n; i++)
    { *(s+i) = *(a+i); }
    s[strlen(a) - n - 1] = '\0';
    return s;
}
int main()
{
    char a[] = "  idontknowman   ";
    char* rv = reverse(a);
    cout <<"Reverse: "<< rv << endl;
    delete [] rv;
    char* dc = delete_char(a, 'a');
    cout <<"Delete: " << dc << endl;
    delete [] dc;
    char* pr = pad_right(a, 7);
    cout <<"Pad right: "<< pr << endl;
    delete [] pr;
    char* pl = pad_left(a, 11);
    cout <<"Pad left "<< pl <<endl;
    delete [] pl;
    char* tc = truncate(a, 9);
    cout <<"Truncate: "<< tc <<endl;
    delete [] tc;
    char* tr = trim_right(a);
    cout <<"Trim right: " << a << "|" << endl;
    delete [] tr;
    char* tl = trim_left(a);
    cout <<"Trim left: " << "|" << a << endl;
    delete [] tl;

    return 0;
}
