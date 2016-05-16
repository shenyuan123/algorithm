#include <iostream>
#include <vector>
using namespace std;

struct hanxin{
    int number3;
    int number5;
    int number7;
};
int main()
{
    int x;
    vector<hanxin> people;
    int counter = 0;
    hanxin person;
    while(cin>>person.number3>>person.number5>>person.number7){
        people.push_back(person);
    }

    for(size_t i = 0; i < people.size(); i++){
        for(x=10; x < 100; x++){
            if(x % 3 == people[i].number3 && x % 5 == people[i].number5 && x % 7 == people[i].number7)
            {
                cout<<"Case "<<i+1<<": "<<x<<endl;
                break;
            }
        }
        if(x == 100)
            cout<<"Case "<<i+1<<": No answer"<<endl;
    }
}