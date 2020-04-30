#include <iostream>
#include <stdio.h>
#include <unistd.h>


using namespace std;


string userName, userInput;

int user_Choice;


// Employee's welcoming, getting user input


void welcomeEmployee()

{
    cout << "Hi there! Please enter your name..." << endl;

    cin >> userName;

    sleep(1);

    cout << "Nice to meet you " + userName + "!" << endl;

    sleep(2);

    cout << "We would like to get to know you better so..." << endl;

    sleep(2);

    cout << "Would you like to answer a few questions for us " + userName + "???" << endl;

    sleep(3);

    cout << "Press Y for 'YES' or N for 'NO'... " << endl;

        cin >> userInput;

    if (userInput == "y")
    {
        cout << "Ok so... let's begin then!" << endl;

        sleep(3);

    }

    else if (userInput == "n")
    {
        cout << "Ok ... maybe some other time then...goodbye!" << endl;

        sleep(2);

        exit(0);
    }

}


// General questions about developer's orientation

void employeeQuest_A()

    {

    cout << "So... what is that really excites you about programming " + userName + "?" << endl;

    cin >> userInput;

    cout << "Great! Thanks for sharing these thoughts with us" + userName + "... now let's proceed to some more technical details... " << endl;

    sleep(2);

    cout << "Which is your favorite programming language or which is the one you feel more comfortable with ?" << endl;

    cin >> userInput;

    cout << "OK ..." + userInput + " it is then... " << endl;

    sleep(2);

    cout << "Are you more experienced in front-end or back-end development ?" << endl;

    }


void devOrientationMenu()

{
        cout << "1) I am a front-end developer..." << endl;

        cout << "2) I am a  back-end developer..." << endl;

        cout << "3) I am a full-stack developer..."<< endl;

}

void artistic_kind() {
    cout << "Ok so you're kinda ...the artistic type of guy...:-)" << endl;

    sleep(1);

    cout << "Do you have experience or preference in any particular web-development frameworks of the following ones? " << endl;

    cout << "1) Angular " << endl;

    cout << "2) ASP.NET" << endl;

    cout << "3) Node.Js" << endl;

    cout << "4) Django "  << endl;

    cout << "Please choose the one you feel more comfortable with using the corresponding number from 1 to 4... " << endl;

    cin >> user_Choice;

     switch (user_Choice)
     {
        case 1:
            cout << "Ok so Angular it is then..." << endl;

            break;

        case 2:
            cout << "Ok so you're an ASP guy.." << endl;

            break;

        case 3:
            cout << "Ok so Node.Js is your thing...(good choice by the way...:-))" << endl;

            break;

        case 4:
            cout << "Ok so you're more into Django..." <<endl;

            break;

        default:
            cout << "Error: Please select a number from 1 to 4..." << endl;

            cin.get();
     }
}

void seletionProcess_A0() {
cout << "Enter your selection (using 1, 2, 3):" << endl;

        cin >> user_Choice;

         switch (user_Choice)

        {
        case 1:
            cout << "Ok so you're more into front-end development..." << endl;

            break;

        case 2:
            cout << "Ok so you're more into back-end development" << endl;

            break;

        case 3:
            cout << "Ok so you're a full-stack developer!..." << endl;

            break;

        default:
            cout << "Error: Please select a number between 1 , 2 , 3 ..." << endl;

           // cin.get();
        }
}

void backend_kind() {
cout << " Ok so you're more into the back-end ... (poor you :-) )" << endl;

        sleep(2);

        cout << " Please pick one of the following fields you feel more confortable or experienced with... choose the corresponding number from 1 to 4 " << endl;

        cout << "1) Web Servers such as Apache or NGINX..." << endl;

        cout << "2) Database Management Systems like MySQL... MongoDB etc." << endl;

        cout << "3) Local Development Environments such as XAMPP, Wamp..." << endl;

        cout << "4) Collaboration services like Asana, GIRA, Trello etc..." << endl;

        cin >> user_Choice;

        switch (user_Choice)

        {
            case 1:
                cout << "Ok so Angular it is then..." << endl;

                break;

            case 2:
                cout << "Ok so you're an ASP guy.." << endl;

                break;

            case 3:
                cout << "Ok so Node.Js is your thing...(good choice by the way...:-))" << endl;

                break;

            case 4:
                cout << "Ok so you're more into Django..." <<endl;

                break;

            default:
                cout << "Error: Please select a number from 1 to 4..." << endl;

            cin.get();
        }
}

void fullstack_kind() {
            cout << " OK so you 're the... usually working overtime and 'if you don't know something just...ask me' guy! " << endl;

            sleep(1);

            cout << "Every company needs to have a guy like you being able to take care pretty much everything and on the other hand...  being accountable when everything goes terribly wrong...:-) " << endl;

}

void selectionProcess_A()
{
    for(;;)
    {
        seletionProcess_A0();

        sleep(1);

        switch(user_Choice)
        {
            case 1: artistic_kind(); break;
            case 2: backend_kind(); break;
            case 3: fullstack_kind(); break;
            default: /* invalid choice, redo */continue;
        }
        // valid choice, exit loop
        break;
    }
}




int main()

{
        welcomeEmployee();

        employeeQuest_A();

        devOrientationMenu();

        selectionProcess_A();


    cout << "Probably that's enough information for now so...It seems that... you're hired Mr. " + userName + "!!!" << endl;

    sleep(1);

    cout << "WE ARE MORE THAN HAPPY TO WELCOME YOU ON_BOARD!... You are now officially a member of NILWARE TEAM!!!" << endl;

    exit(0);


        return 0;

}
