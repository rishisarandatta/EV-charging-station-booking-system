#ifndef EVSYSTEM_H
#define EVSYSTEM_H

#define MAX 20
#define MAX_NAME 50

typedef struct { int items[MAX]; int front, rear; } queue;

typedef struct {
    char name[MAX_NAME], city[MAX_NAME];
    int slots;
    queue bookingqueue;
} Station;

typedef struct { char name[MAX_NAME]; } City;

extern Station stations[MAX];
extern int stationCount;
extern City cities[MAX];
extern int cityCount;
extern int cityGraph[MAX][MAX];

void initqueue(queue *q);
void enqueue(queue *q, int value);
int dequeue(queue *q);
void addStation(char name[], char city[], int slots);
void bookSlot(int stationID, int vehicleID);
void cancelBooking(int stationID);
void initDefaultCities();
int getCityIndex(char cityName[]);
void bfsNearestStation(char startCity[]);
void displayStations();

#endif
