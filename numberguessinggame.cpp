  #include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()
using namespace std;
int main() {
    // Seed the random number generator with the current time
    srand(time(0)); 

    // Generate a random number between 1 and 500
   const int randomNumber = rand() % 500 + 1; 
   int guess;
   cout<<"please guess the random number:"<<endl;
   cin>>guess;
while(true){
    if(guess==randomNumber){
        cout<<"Congraluations! you quess the number";
        break;
    }
    else if(guess<randomNumber){
        //adding hint to user
        cout<<"Your guess was to small please try again and guess some large numbers"<<endl;
        cin>>guess;
    }
    else{
        cout<<"Your guess was to large please try again and guess some small numbers"<<endl;
        cin>>guess;
    }
}
    return 0;
}
