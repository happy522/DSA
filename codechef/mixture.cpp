/*Chef has AA units of solid and BB units of liquid. He combines them to create a mixture. What kind of mixture does Chef produce: a solution, a solid, or a liquid?

A mixture is called :

A solution if A \gt 0A>0 and B \gt 0B>0,

A solid if B = 0B=0, or

A liquid if A = 0A=0.*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(a==0&&b!=0){
            cout<<"Liquid\n";
        }
        else if(a!=0&&b==0){
            cout<<"Solid\n";
        }
        else{
            cout<<"Solution\n";
        }
    }
	return 0;
}
