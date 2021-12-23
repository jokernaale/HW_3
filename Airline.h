#ifndef __COMP__
#define __COMP__

#include "Flight.h"
#include "AirportManager.h"
typedef enum {
    sort1, sort2, sort3, sort4
} eSortType;


static const char* sortType[sort4];
typedef struct
{
	char*		name;
	int			flightCount;
    eSortType    s_type;
	Flight**	flightArr;
}Airline;

void	initAirline(Airline* pComp);
int		addFlight(Airline* pComp,const AirportManager* pManager);
void	printCompany(const Airline* pComp);
void	printFlightArr(Flight** pFlight, int size);
void	doCountFlightsFromName(const Airline* pComp);
void	doPrintFlightsWithPlaneCode(const Airline* pComp);
void	doPrintFlightsWithPlaneType(const Airline* pComp);
void	freeFlightArr(Flight** arr, int size);
void	freeCompany(Airline* pComp);
void sortFlights(Airline* pComp,int(*compare)(const void*a,const void*b));

#endif

