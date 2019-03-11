#include <iostream>
#include <string>

template<typename T,int SIZE>
struct Array{
    public:
        T desk[SIZE];
        int size = SIZE;

    Array<T,SIZE>();

};

int main(){

    //setup start

    std::string input; //string to hold user input
    int numOfStudents; // how many students
    int numOfCards;    //how many cards

    std::cout<< "enter the number of students in the simulation:";
    std::cin>> input;//take in how many students as a string

    numOfStudents = std::stoi(input);//convert string to int and save in num of students

    std::cout<< "enter the number of cards to start with:";
    std::cin>> input;//take in how many cards to start as a string

    numOfCards = std::stoi(input);//convert string to int and save in num of cards

    Array<int, numOfStudents + 1> cards;//create an array of size num of students +1
    cards.desk[0] = numOfCards;//set the first index to hold a stack of all the cards

    //setup complete

    return 0;
}

template<typename T, int SIZE >
Array<T,SIZE>::Array(){
    
    for(int i = 0; i < SIZE; i++){
        array[i] = 0;
    }

}
