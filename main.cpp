#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 int
 float
 bool
 char 
 double 
 unsigned int
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    
    float loanRepayment = 2.f; 
    float repaymentAmount = 4.f;
    float monthlyFee = 6.f;

    int brandName = 777;
    int brandReach = 100;
    int brandMarketCap = 200;

    double antLength = 1.2;
    double beeLength = 3.4;
    double wormLength = 5.6;

    char grade = 'A';
    char firstInitial = 'K';
    char secondInitial = 'A';

    bool hoursWorked = false;
    bool overtimePay = true;
    bool sickPay = false;
    
    ignoreUnused(number, loanRepayment, repaymentAmount, monthlyFee, brandName, brandReach, brandMarketCap, antLength, beeLength, wormLength, grade, firstInitial, secondInitial, hoursWorked, overtimePay, sickPay); 
    
    //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
float monthlyCharge(int initialTerm, int aprPercentage = 0)
{ 
    ignoreUnused(initialTerm, aprPercentage);
    return {};
}
/*
 2)
 */
int milesTravelled(int wheelRotations, int gasUsed = 55)
{
    ignoreUnused(wheelRotations, gasUsed);
    return {};
}
/*
 3)
 */
bool manLies (bool heartrateIncreases, bool manSweats = true)
{
    ignoreUnused(heartrateIncreases, manSweats);
    return {};
}
/*
 4)
 */
bool pigeonFlies (bool wingsFlap, bool altitudeIncreases = true)
{
    ignoreUnused(wingsFlap, altitudeIncreases);
    return {};
}
/*
 5)
 */
bool dogBarks (bool isLoud, bool neighboursCry = true)
{
    ignoreUnused(isLoud, neighboursCry);
    return {};
}
/*
 6)
 */
bool catSwims (bool getsWet, bool isSad = true)
{
    ignoreUnused(getsWet, isSad);
    return {};
}    
/*
 7)
 */
int kmPerHour (int elapsedTime, int kmTravelled = 345)
{
    ignoreUnused(elapsedTime, kmTravelled);
    return {};
}


/*
 8)
 */
bool laptopBreaks (bool catchesFire, bool explodes = true)
{
    ignoreUnused(catchesFire, explodes);
    return{};
}
/*
 9)
 */
int buyHouse (int houseDeposit, int mortgagePayments = 1666)
{
    ignoreUnused(houseDeposit, mortgagePayments);
    return{};
}
/*
 10)
 */
int getHired (int applyForJob, int passInterview = 1234)
{
    ignoreUnused(applyForJob, passInterview);
    return{};
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto moneyPaid = monthlyCharge (0); //float monthlyCharge(int initialTerm, int aprPercentage = 0)

    //2)
    auto distanceDrove = milesTravelled (100);
   //int milesTravelled(int wheelRotations, int gasUsed = 55)
    
    //3) 
    auto mouthOpens = manLies (true);

            //bool manLies (bool heartrateIncreases, bool manSweats = true)
    //4)
    auto wingsFlap = pigeonFlies (true);
    //5)
    auto dogIsAngry = dogBarks (true);
    //6)
    auto entersWater = catSwims (true);
    //7)
    auto measuresKm = kmPerHour (345);
    //8)
    auto trashComputer = laptopBreaks (true);
    //9)
    auto acquireProperty = buyHouse (1666);
    //10)
    auto beEmployed = getHired (1234);
    
    ignoreUnused(carRented, moneyPaid, distanceDrove, mouthOpens, wingsFlap, dogIsAngry, entersWater, measuresKm, trashComputer, acquireProperty, beEmployed);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
