#include<iostream>
using namespace std;

int main()
{
    printf("�п�J����Τ��:");
	int Month, Day, Sun;
    while( cin >> Month >> Day )
    {
        Sun = (Month*2+Day)%3;
        if( Sun == 0 )
        {
            cout << "���q" << endl;
        }
        if( Sun == 1 )
        {
            cout << "�N" << endl;
        }
        if( Sun == 2 )
        {
            cout << "�j�N" << endl;
        }
    }
    return 0;
}
