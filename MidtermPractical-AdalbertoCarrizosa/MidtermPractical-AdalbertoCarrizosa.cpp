#include <iostream>
#include <string>

int main()
{
    std::string Q1, Q2, Q3, Q4;
    bool var1{}, var2{}, var3{}, var4{};

    std::cout << "Greetings! Choose the right letter to finish the questionair\n\n";
    //User Questions and input storage

    //Question number 1
    std::cout << "How many hours is there on a day?\nA. 12 \nB. 16 \nC. 8 \nD. 24\n";
    //Ans D
    getline(std::cin, Q1);
    if (Q1 == "D" || Q1 == "d") {
        var1 = true;
        std::cout << "NICE, WELL DONE!\n\n";
    }
    else
    {
        std::cout << "WRONG!! GO AND STUDY\n\n";
    }
    //Quesiton number 2
    std::cout << "When did the WW2 ended?\nA. 1945 \nB. 1932 \nC. 1939  \nD. 1955\n";
    //Ans A
    getline(std::cin, Q2);
    if (Q2 == "A" || Q2 == "a") {
        var2 = true;
        std::cout << "NICE, IM SO PROUD!\n\n";
    }
    else
    {
        std::cout << "WRONG!! READ SOME BOOKS\n\n";
    }
    //Quesiton number 3
    std::cout << "Do trees give Oxygen? \nA. Not sure \nB. Yes \nC. No  \nD. Only small plants\n";
    //Ans B
    getline(std::cin, Q3);
    if (Q3 == "B" || Q3 == "b") {
        var3 = true;
        std::cout << "NICE, Get yourself a drink!\n\n";
    }
    else
    {
        std::cout << "WRONG!! Man, i think you have a problem\n\n";
    }
    //Quesiton number 4
    std::cout << "How many eyes does a human have?\nA. 2 \nB. 3 \nC. 1  \nD. Depends on the region\n";
    //Ans A
    getline(std::cin, Q4);
    if (Q4 == "A" || Q4 == "a") {
        var4 = true;
        std::cout << "NICE, WELL DONE!\n\n";
    }
    else
    {
        std::cout << "WRONG!! GO AND STUDY\n\n";
    }

    system("CLS");

    if (var1 == true && var2 == true && var3 == true && var4 == true) {
        std::cout << "Congrats, you've got (4/4) right\nPress enter to exit the program\n\n\n";
    }
    else if (var1 == true && var2 == true && var4 == true) {
        std::cout << "Congrats, you've got (3/4) right\nPress enter to exit the program\n\n\n";
    }
    else if (var1 == true && var2 == true && var3 == true) {
        std::cout << "Congrats, you've got (3/4) right\nPress enter to exit the program\n\n\n";
    }
    else if (var2 == true && var3 == true && var4 == true) {
        std::cout << "Congrats, you've got (3/4) right\nPress enter to exit the program\n\n\n";
    }
    else if (var1 == true && var3 == true && var4 == true) {
        std::cout << "Congrats, you've got (3/4) right\nPress enter to exit the program\n\n\n";
    }
    else if (var1 == true && var2 == true) {
        std::cout << "Congrats, you've got (2/4) right\nPress enter to exit the program\n\n\n";
    }
    else if (var1 == true && var3 == true) {
        std::cout << "Congrats, you've got (2/4) right\nPress enter to exit the program\n\n\n";
    }
    else if (var1 == true && var4 == true) {
        std::cout << "Congrats, you've got (2/4) right\nPress enter to exit the program\n\n\n";
    }
    else if (var2 == true && var3 == true) {
        std::cout << "Congrats, you've got (2/4) right\nPress enter to exit the program\n\n\n";
    }
    else if (var2 == true && var4 == true) {
        std::cout << "Congrats, you've got (2/4) right\nPress enter to exit the program\n\n\n";
    }
    else if (var3 == true && var4 == true) {
        std::cout << "Congrats, you've got (2/4) right\nPress enter to exit the program\n\n\n";
    }
    else if (var1 == true) {
        std::cout << "Congrats, you've got (1/4) right\nPress enter to exit the program\n\n\n";
    }
    else if (var2 == true) {
        std::cout << "Congrats, you've got (1/4) right\nPress enter to exit the program\n\n\n";
    }
    else if (var3 == true) {
        std::cout << "Congrats, you've got (1/4) right\nPress enter to exit the program\n\n\n";
    }
    else if (var4 == true) {
        std::cout << "Congrats, you've got (1/4) right\nPress enter to exit the program\n\n\n";
    }
    else {
        std::cout << "You got none of them right (0/0) >:v \n\n\n";
    }


   
    


}

