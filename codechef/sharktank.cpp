/*Problem
Devendra just had a million-dollar idea and he needs funds to startup. He was recently invited to Sasta Shark Tank (A TV show where entrepreneurs pitch their ideas to investors hoping to get investment in return).

He was offered deals from two investors. The first investor offers AA dollars for 1010% of his company and the second investor offers BB dollars for 2020% of his company. Devendra will accept the offer from the investor whose valuation of the company is more. Determine which offer will Devendra accept or if both the offers are equally good.

For example, if the first investor offers 300300 dollars for 1010% of the company, then the first investor's valuation of the company is 30003000 dollars since 1010% of 3000 = 3003000=300. If the second investor offers 500500 dollars for 2020% of the company, then the second investor's valuation of the company is 25002500 dollars since 2020% of 2500 = 5002500=500.*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(a/10==b/20){
            cout<<"Any\n";
        }
        else if(a/10>b/20){
            cout<<"First\n";
        }
        else{
            cout<<"Second\n";
        }
    }
	return 0;
}
