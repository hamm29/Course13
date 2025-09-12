#pragma once

#include <iostream>
#include <stack>
using namespace std;


class clsQueueLine
{
private:
    struct stQueueInfo;

    
public:

    struct stQueueInfo
    {
	   string Prefix;
	   int TotalTickets = 0;
	   int ServedClients = 0;
	   int WaitingClients = 0;

    };

    struct stTickets
    {
	   int Date;

    };

    clsQueueLine(string preFix, short minutes)
    {

    }

    void IssueTicket()
    {

    }

    void PrintInfo()
    {

    }

    void PrintTicketsLineRTL()
    {

    }

    void PrintTicketsLineLTR()
    {

    }

    void ServeNextClient()
    {

    }

};

