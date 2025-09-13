
#include <iostream>
#include "clsQueueLine.h"

using namespace std;

int main()
{
    clsQueueLine PayBillsQueue("A0", 10);
    clsQueueLine SubscriptionsQueue("B0", 5);

    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();

    cout << "\t\t\tPay Bills Queue Info: \n";
    PayBillsQueue.PrintInfo();

    PayBillsQueue.PrintTicketsLineRTL();
    PayBillsQueue.PrintTicketsLineLTR();

    PayBillsQueue.PrintAllTickets();


    PayBillsQueue.ServeNextClient();
    cout << "\n\n\t\t\tPay Bills Queue Info after serving one client: \n";
    PayBillsQueue.PrintInfo();


    cout << "\n\n\t\t\tSubscriptions Queue Info: \n";
    
    SubscriptionsQueue.IssueTicket();
    SubscriptionsQueue.IssueTicket();
    SubscriptionsQueue.IssueTicket();

    SubscriptionsQueue.PrintInfo();

    SubscriptionsQueue.PrintTicketsLineLTR();
    SubscriptionsQueue.PrintTicketsLineRTL();

    SubscriptionsQueue.PrintAllTickets();

    SubscriptionsQueue.ServeNextClient();
    cout << "\n\n\t\t\tSubscriptions Queue Info after serving one client: \n";
    SubscriptionsQueue.PrintInfo();

    cout << "\n\n\n";
    //system("pause>0");
}
