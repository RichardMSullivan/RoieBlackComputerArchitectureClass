#include <iostream>
#include <string>

bool distributeCards(int &left, int &right);//balances cards on left and right desk (will change refrenced values!)
void printDesks(int* desks,int size);

int main(){

    //setup start

    std::string input; //string to hold user input
    int numOfStudents; //  how many students
    int numOfCards; // how many cards
    int numOfCycles; // how many cycles do you want
    int cycleCounter = 0; //how many cycles have occured
    bool stable = false; //is the simulation stable

    std::cout<< "enter the number of students in the simulation:";
    std::cin>> input;//take in how many students as a string

    numOfStudents = std::stoi(input);//convert string to int and save in num of students

    std::cout<< "enter the number of cards to start with:";
    std::cin>> input;//take in how many cards to start as a string

    numOfCards = std::stoi(input);//convert string to int and save in num of cards

    int* deskPtr = new int[numOfStudents +1] ;//create an array of size num of students +1
    deskPtr[0] = numOfCards;//set the first index to hold a stack of all the cards

    //setup complete

    std::cout<<"how many cycles do you want"<<std::endl;
    std::cin>>input;//get number of cycles as string

    numOfCycles = std::stoi(input);//convert number of cycles from string to int
    
    printDesks(deskPtr, numOfStudents + 1); //print starting state of cards on the desk

    while(cycleCounter < numOfCycles && !stable){
    
        stable = true;

        for(int i = 0; i < numOfStudents; i++){//for every student do the following
            if( !distributeCards(*(deskPtr + i), *(deskPtr +(i+1)) )/*distribute cards*/ ){
             
                stable = false;//if any changes needed to be made stable == false
                
            }
    
            printDesks(deskPtr, (numOfStudents + 1));//print results of steps
        }
        cycleCounter ++;//increase cycle counter
        std::cout<<std::endl;//put a newline between cycles
    }
    return 0;
}

bool distributeCards(int& left, int& right){//start distribute
    bool stable = false;
    if(left == right){//if both sides are == then stable
        stable = true;
    }
    else{// if not equal

        int total = left + right;//get total num of cards
        
        if(total % 2 == 0){//if it can be equal

            left = total/2;//left side is half of total
            right = total/2;//rigth side is half of total
        }
        else if(right - left == 1){//if odd num and right has remainder
            
            stable = true;//it is stable
        }
        else{//if unequal by more than one card and if only by one card it is bigger on the left
            
            left = total/2;//left is half total
            right = (total/2) +1;//right is half of total plus 1
        }
    }

    return stable;//return if the card distribution was stable before the function ran
}//end distribute

void printDesks(int* desk,int size){
    for(int i=0; i<size; i++){//for the number of items in desk
        if (i % 5 == 0 ){//if more than 10 items continue on the next line
            
            std::cout<<std::endl;
        }

        std::cout<< *(desk + i);//cout the number of cards on the desk i

        if(i <(size -1) ){//add a comma after every value excluding the last one
            std::cout<<", ";
        }
    }
    std::cout<<std::endl; //add a newline after cycle
}
