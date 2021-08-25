
//                           Header File in Project
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

///                   CLASS USED IN PROJECT

class Item
{
public:
    char id[6];
    char date[12];
};

class Train : public Item
{
    char name[25];
    char startingPoint[20];
    char destinationPoint[20];
    int seats;
    int seatRange;
    friend std::ostream &operator<<(std::ostream &out, const Train &train);
    friend std::istream &operator>>(std::istream &in, Train &train);

public:
    void modifyTrain()
    {
        cout << "\nTrain No: " << id;
        cout << "\nName: " << name;
        cout << "\nDate: ";
        cin.ignore();
        cin.getline(date, 12, '\n');
        cout << "\nStarting Point:";
        cin.clear();
        cin.getline(startingPoint, 20, '\n');
        cout << "\nDestination Point:";
        cin.ignore();
        cin.getline(destinationPoint, 20, '\n');
        cout << "\nHow Many Seats Avaible: ";
        cin >> seats;
        cout << "\nSeat Range?: ";
        cin >> seatRange;
    }

    void modifyTrainAfterResurvation() { seats --; }
    void modifyTrainAfterCancellation() { seats ++; }

    void report()
    {
        cout << setw(6) << left << id
             << " | " << setw(20) << left << name
             << " | " << setw(12) << left << date
             << " | " << setw(20) << left << startingPoint
             << " | " << setw(20) << left << destinationPoint
             << " | " << setw(5) << left << seats
             << " | " << setw(11) << left << seatRange
             << " | " << endl;
    }
};

class Ticket : public Item
{
    char message[20];
    char trainID[6];
    char userName[20];
    friend std::ostream &operator<<(std::ostream &out, const Ticket &ticket);
    friend std::istream &operator>>(std::istream &in, Ticket &ticket);

public:
    char *getTrainID() { return trainID; }
    void report()
    {
        cout << setw(6) << left << id
             << " | " << setw(8) << left << trainID
             << " | " << setw(12) << left << date
             << " | " << setw(20) << left << userName
             << " | " << setw(20) << left << message
             << " | " << endl;
    }
};
///                   Operator Overloading IN PROJECT

ostream &operator<<(ostream &out, const Train &train)
{
    out << "====================================================================================================================================\n";
    out << setw(6) << left << "Id"
        << " | " << setw(20) << left << "Name"
        << " | " << setw(12) << left << "Date"
        << " | " << setw(20) << left << "Starting Point"
        << " | " << setw(20) << left << "Destination Point"
        << " | " << setw(5) << left << "seats"
        << " | " << setw(11) << left << "Seats Range"
        << " | " << endl;
    out << "===================================================================================================================================\n";
    out << setw(6) << left << train.id
        << " | " << setw(20) << left << train.name
        << " | " << setw(12) << left << train.date
        << " | " << setw(20) << left << train.startingPoint
        << " | " << setw(20) << left << train.destinationPoint
        << " | " << setw(5) << left << train.seats
        << " | " << setw(11) << left << train.seatRange
        << " | " << endl;

    return out;
}

ostream &operator<<(ostream &out, const Ticket &ticket)
{
    out << "==========================================================================================\n";
    out << setw(6) << left << "Id"
        << " | " << setw(8) << left << "Train ID"
        << " | " << setw(12) << left << "Date"
        << " | " << setw(20) << left << "User Name"
        << " | " << setw(20) << left << "Message"
        << " | " << endl;
    out << "==========================================================================================\n";
    out << setw(6) << left << ticket.id
        << " | " << setw(8) << left << ticket.trainID
        << " | " << setw(12) << left << ticket.date
        << " | " << setw(20) << left << ticket.userName
        << " | " << setw(20) << left << ticket.message
        << " | " << endl;

    return out;
}

istream &operator>>(istream &in, Train &train)
{

    cout << "\nNew Train Entry.....\n";
    cout << "\nEnter The Train ID: ";
    in >> train.id;
    cout << "\nName: ";
    in.ignore();
    in.getline(train.name, 20, '\n');
    cout << "\nDate: ";
    in.clear();
    in.getline(train.date, 12, '\n');
    cout << "\nStarting Point:";
    in.clear();
    in.getline(train.startingPoint, 20, '\n');
    cout << "\nDestination Point:";
    in.clear();
    in.getline(train.destinationPoint, 20, '\n');
    cout << "\nHow Many Seats Avaible: ";
    in >> train.seats;
    cout << "\nSeat Range?: ";
    in >> train.seatRange;
    cout << "\n\nTrain Created Successfully..";

    return in;
}

istream &operator>>(istream &in, Ticket &ticket)
{

    cout << "\nNew Ticket Entry....\n";
    cout << "\nTicket Id: ";
    in >> ticket.id;
    cout << "\nTrain Id: ";
    in >> ticket.trainID;
    cout << "\nDate: ";
    in.ignore();
    in.getline(ticket.date, 12, '\n');
    cout << "\nName: ";
    in.clear();
    in.getline(ticket.userName, 20, '\n');
    cout << "\nMessage: ";
    in.clear();
    in.getline(ticket.message, 20, '\n');
    cout << "\n\nTicket Record Created Successfull..";

    return in;
}

///    	global declaration for stream object, object
fstream fp, fp1;

class Adminestrator : public Ticket, public Train
{
    Ticket ticket;
    Train train;

public:
    ///    	function to write in file

    void writeTrain()
    {
        char ch;
        fp.open("train.dat", ios::out | ios::app);
        do
        {
            cin >> train;
            fp.write((char *)&train, sizeof(Train));
            cout << "\n\nDo you Want to add more record..(y/n?): ";
            cin >> ch;
        } while (ch == 'y' || ch == 'Y');
        fp.close();
    }

    void resurvationTicket()
    {
        char ch;
        fp.open("ticket.dat", ios::out | ios::app);
        cin >> ticket;
        fp.write((char *)&ticket, sizeof(Ticket));
        fp.close();

        int found = 0;

        fp1.open("train.dat", ios::in | ios::out);
        while ((fp1.read((char *)&train, sizeof(Train))) && found == 0)
        {
            if (strcmpi(train.id, ticket.getTrainID()) == 0)
            {

                train.modifyTrainAfterResurvation();
                long long unsigned int pos = -1 * sizeof(Train);
                fp1.seekp(pos, ios::cur);
                fp1.write((char *)&train, sizeof(Train));
                found = 1;
            }
        }
        fp1.close();
        if (found == 0)
            cout << "\n\n Train Record Not Found";
    }

    ///   	function to read specific record from file

    void displaySpecificTrain(char n[])
    {
        cout << "\nTrain Details\n";
        int flag = 0;
        fp.open("train.dat", ios::in);
        while (fp.read((char *)&train, sizeof(Train)))
        {
            if (strcmpi(train.id, n) == 0)
            {
                cout << train;
                flag = 1;
            }
        }
        fp.close();
        if (flag == 0)
            cout << "\n\nTrain does not exist.";
    }

    void displaySpecificTicket(char n[])
    {
        cout << "\nTicket Details\n";
        int flag = 0;
        fp.open("ticket.dat", ios::in);
        while (fp.read((char *)&ticket, sizeof(Ticket)))
        {
            if (strcmpi(ticket.id, n) == 0)
            {
                cout << ticket;
                flag = 1;
            }
        }
        fp.close();
        if (flag == 0)
            cout << "\n\nTicket does not exist.";
    }

    ///    	function to modify record of file

    void modifyTrain()
    {
        char n[6];
        int found = 0;
        cout << "\n\nModify Train Recorded Section......";
        cout << "\n\nEnter the Train ID: ";
        cin >> n;
        fp.open("train.dat", ios::in | ios::out);
        while ((fp.read((char *)&train, sizeof(Train))) && found == 0)
        {
            if (strcmpi(train.id, n) == 0)
            {
                cout << train;
                cout << "\nEnter The New Details of Train\n";
                train.modifyTrain();
                long long unsigned int pos = -1 * sizeof(Train);
                fp.seekp(pos, ios::cur);
                fp.write((char *)&train, sizeof(Train));
                cout << "\n\n\t Record Updated...";
                found = 1;
            }
        }
        fp.close();
        if (found == 0)
            cout << "\n\n Record Not Found";
    }

    ///    	function to display all students list

    void displayAllTrain()
    {
        fp.open("train.dat", ios::in);
        if (!fp)
        {
            cout << "Error !!! File Could not be OPEN";
            return;
        }
        cout << "\n\n\t\t Train List\n\n";

        cout << "====================================================================================================================================\n";
        cout << setw(6) << left << "Id"
             << " | " << setw(20) << left << "Name"
             << " | " << setw(12) << left << "Date"
             << " | " << setw(20) << left << "Starting Point"
             << " | " << setw(20) << left << "Destination Point"
             << " | " << setw(5) << left << "seats"
             << " | " << setw(11) << left << "Seats Range"
             << " | " << endl;
        cout << "====================================================================================================================================\n";

        while (fp.read((char *)&train, sizeof(Train)))
        {
            train.report();
        }
        fp.close();
    }

    void displayAllTickets()
    {
        fp.open("ticket.dat", ios::in);
        if (!fp)
        {
            cout << "Error !!! File Could not be OPEN";
            return;
        }
        cout << "\n\n\t\t Ticket List\n\n";
        cout << "==========================================================================================\n";
        cout << setw(6) << left << "Id"
             << " | " << setw(8) << left << "Train ID"
             << " | " << setw(12) << left << "Date"
             << " | " << setw(20) << left << "User Name"
             << " | " << setw(20) << left << "Message"
             << " | " << endl;
        cout << "==========================================================================================\n";
        while (fp.read((char *)&ticket, sizeof(Ticket)))
        {
            ticket.report();
        }
        fp.close();
    }

    ///    	function to issue book
    void ticketCancellation()
    {
        char n[6];
        int flag = 0;
        cout << "\n\n\n\tCancellation Ticket..";
        cout << "\n\nEnter the Ticket ID: ";
        cin >> n;
        fp.open("ticket.dat", ios::in | ios::out);
        fstream fp2;
        fp2.open("temp.dat", ios::out);
        fp1.open("train.dat", ios::in | ios::out);
        fp.seekg(0, ios::beg);
        while (fp.read((char *)&ticket, sizeof(Ticket)))
        {
            if (strcmpi(ticket.id, n) != 0)
            {
                fp2.write((char *)&ticket, sizeof(Ticket));
            }
            else
                flag = 1;
        }
        fp2.close();
        fp.close();
        remove("ticket.dat");
        rename("temp.dat", "ticket.dat");

        if (flag == 1)
        {
            int found = 0;

            while ((fp1.read((char *)&train, sizeof(Train))) && found == 0)
            {
                if (strcmpi(train.id, ticket.getTrainID()) == 0)
                {

                    train.modifyTrainAfterCancellation();
                    long long unsigned int pos = -1 * sizeof(Train);
                    fp1.seekp(pos, ios::cur);
                    fp1.write((char *)&train, sizeof(Train));
                    found = 1;

                    cout << "\n\nTicket Cancellation Successfull.";
                }
            }
            fp1.close();
            if (found == 0)
                cout << "\n\n Train Record Not Found";
        }

        else
            cout << "\n\nRecord not found";
    }
};
///    	INTRODUCTION FUNCTION

void intro()
{
    cout << "\n\n\t\tProject : Railway Reservision";
    cout << "\n\n\t\tMADE BY : Asif Iqbal";
    cout << "\n\t\tID : 194029";
    cout << "\n\t\tUniversity : Dhaka University of Engineering & Technology";
}

///    	ADMINISTRATOR MENU FUNCTION

void adminMenuAdminestrator()
{

    int ch2;
    Adminestrator adminestrator;

    cout << "\n\n\n\tADMINISTRATOR MENU";
    cout << "\n\n\t1.CREATE TRAIN RECORD";
    cout << "\n\n\t2.DISPLAY ALL TRAIN RECORD";
    cout << "\n\n\t3.DISPLAY SPECIFIC TRAIN RECORD ";
    cout << "\n\n\t4.MODIFY TRAIN RECORD";
    cout << "\n\n\t5.DISPLAY ALL TICKET RECORD";
    cout << "\n\n\t6.DISPLAY SPECIFIC TICKET RECORD ";
    cout << "\n\n\t7.BACK TO MAIN MENU";
    cout << "\n\n\tPlease Enter Your Choice (1-7): ";
    cin >> ch2;
    switch (ch2)
    {
    case 1:
        adminestrator.writeTrain();
        break;
    case 2:
        adminestrator.displayAllTrain();

        break;
    case 3:
        char id[6];
        cout << "\n\n\tPlease Enter The Train ID: ";
        cin >> id;
        adminestrator.displaySpecificTrain(id);
        break;
    case 4:
        adminestrator.modifyTrain();
        break;
    case 5:
        adminestrator.displayAllTickets();

        break;
    case 6:
        char num[6];
        cout << "\n\n\tPlease Enter The Ticket ID: ";
        cin >> num;
        adminestrator.displaySpecificTicket(num);
        break;
    case 7:
        return;
    default:
        cout << "\a";
    }
    adminMenuAdminestrator();
}

void adminMenuUser()
{

    int ch2;
    Adminestrator adminestrator;

    cout << "\n\n\n\tUSER MENU";
    cout << "\n\n\t1.RESURVATION TICKET";
    cout << "\n\n\t2.CANCEL TICKET";
    cout << "\n\n\t3.DISPLAY SPECIFIC TICKET RECORD ";
    cout << "\n\n\t4.DISPLAY SPECIFIC TRAIN RECORD ";
    cout << "\n\n\t5.DISPLAY ALL TRAIN RECORD";
    cout << "\n\n\t6.BACK TO MAIN MENU";
    cout << "\n\n\tPlease Enter Your Choice (1-6): ";
    cin >> ch2;
    switch (ch2)
    {
    case 1:
        adminestrator.resurvationTicket();
        break;
    case 5:
        adminestrator.displayAllTrain();
        break;
    case 3:
        char id[6];
        cout << "\n\n\tPlease Enter The Ticket No: ";
        cin >> id;
        adminestrator.displaySpecificTicket(id);
        break;
    case 4:
        char num[6];
        cout << "\n\n\tPlease Enter The Train No: ";
        cin >> num;
        adminestrator.displaySpecificTrain(num);
        break;
    case 2:
        adminestrator.ticketCancellation();
        break;
    case 6:
        return;
    default:
        cout << "\a";
    }
    adminMenuUser();
}

///    	THE MAIN FUNCTION OF PROGRAM

int main()
{
    char ch;
    Adminestrator adminestrator;
    intro();
    do
    {

        cout << "\n\n\n\tMAIN MENU";
        cout << "\n\n\t01. USER MENU";
        cout << "\n\n\t02. ADMINISTRATOR MENU";
        cout << "\n\n\t03. EXIT";
        cout << "\n\n\tPlease Select Your Option (1-3): ";
        ch = getche();
        switch (ch)
        {
        case '1':
            adminMenuUser();
            break;
        case '2':
            adminMenuAdminestrator();
            break;
        case '3':
            exit(0);
        default:
            cout << "\a";
        }
    } while (ch != '4');
    return 0;
}

///    			END OF PROJECT
