/*Write a program that reads digits and composes them into integers. For
example, 123 is read as the characters 1, 2, and 3. The program should
output 123 is 1 hundred and 2 tens and 3 ones . The number should be
output as an int value. Handle numbers with one, two, three, or four
digits. Hint: To get the integer value 5 from the character '5' subtract '0' ,
that is, '5' – '0'==5 .*/

#include <iostream>
#include <vector>

void error(std::string er){
    std::cout << er << "\n";
}

int check_digits(int num){
    int counter  = 0;
    while(num != 0){
        num = num / 10;
        ++counter;
    }
    return counter;
}

int seperateDigits(int num){

}

int main(){
    int num;
    std::vector<int> list;
    bool fourdigits = false;
    bool threedigits = false;
    bool twodigits = false;
    bool onedigit = false;

    std::cout << "Enter between 1 - 4 numbers\n";
    for(int i = 0; i <= 1; i++){
        std::cin >> num;

        //Exit program
        if(num < 0)
            break;

        //accept only up to 4 digits
        if(check_digits(num) > 4)
            error("You entered more than 4 digits");

        //Push valid numbers into vector
        if(check_digits(num) > 0 && check_digits(num) < 5)
            list.push_back(num);

    //Get the 1 hundree 2 tens 3 ones
        if(check_digits(num) == 4){
            std::cout << "returning 4?\n";
            fourdigits = true;
        }else if(check_digits(num) == 3){
            std::cout << "returning 3?\n";
            return threedigits = true;
        }else if(check_digits(num) == 2){
            std::cout << "returning 2?\n";
            twodigits = true;
        }else if(check_digits(num) == 1)
            std::cout << "returning 1?\n";
            onedigit = true;

    }

    std::cout << "Vector is " << "\n";
    for(int i = 0; i < list.size(); i++){
        std::cout << list[i] << "\n";
    }

    std::cout << "Required result\n";
    if(fourdigits)
      std::cout << list[0] << " Thousands " << list[1] << " Hundreds " << list[2] << " Tens " << list[3] << " Ones\n";
}
