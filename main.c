#include <stdio.h>
#include <stdlib.h>
#include "evsystem.h"

int main(){
    int c,id,v,slots;
    char city[MAX_NAME],name[MAX_NAME];

    initDefaultCities();

    while(1){
        printf("\n1.Add station\n2.Book slot\n3.Cancel booking\n4.Find Nearest station\n5.Existing Stations\n6.Exit\nChoice:");
        scanf("%d",&c);

        switch(c){
            case 1:
                printf("Name:"); scanf("%s",name);
                printf("City:"); scanf("%s",city);
                printf("Slots:"); scanf("%d",&slots);
                addStation(name,city,slots);
                break;

            case 2:
                printf("StationID VehicleID: ");
                scanf("%d %d",&id,&v);
                bookSlot(id,v);
                break;

            case 3:
                printf("StationID: ");
                scanf("%d",&id);
                cancelBooking(id);
                break;

            case 4:
                printf("Enter city: ");
                scanf("%s",city);
                bfsNearestStation(city);
                break;

            case 5:
                displayStations();
                break;

            case 6:
                return 0;
        }
    }
}
