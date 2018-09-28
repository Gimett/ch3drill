#include "std_lib_facilities.h"

int main()
{
cout << "Please write your name\n";
string your_name;
cin >> your_name;
cout << "Please enter the name of the person you want to write to:\n";
string first_name;
cin >> first_name;
cout << "Please enter the name of a friend:\n";
string friend_name;
cin >> friend_name;
cout << "Please enter the gender of your friend (m=male/f=female)\n";
char friend_sex = ' ';
cin >> friend_sex;
cout << "Please enter the age of the recipient:\n";
int age;
string simple_error="You must be kidding!";
cin >> age;
cout<<"Dear, " <<first_name <<'\n';
cout<<"How are things goin' bud? I am doin gr8. I miss chattin with ya.\n";
cout<<"Have you seen " <<friend_name<< " lately?\n";
if (friend_sex=='m')
{
cout<<"If you see " <<friend_name<<" please ask him to call me.\n";
}
else if (friend_sex=='f')
{
cout<<"If you see " <<friend_name<<" please ask her to call me.\n";
}
if (age<=0)
{
cout << simple_error <<'\n';
}
else if (age>=110)
{
cout << simple_error <<'\n';
}
else
{
cout<<"I hear you just had a birthday and you are " <<age<<" years old.\n";
if (age<12)
{
cout <<"Next year you will be " <<age+1<<".\n";
}
else if (age==17)
{
cout <<"Next year you will be able to vote.\n";
}
else if (age>=70)
{
cout << "I hope you enjoying retirement.\n";
}
}
cout<<"Yours sincerely\n\n";
cout << your_name <<'\n';
}
