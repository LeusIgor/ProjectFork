#include <iostream>
#include "Smartphone.h"
#include "Cellphone.h"
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main(){

vector<Cellphone> shelves_inventory;
vector<Camera> shelves_inventory_2;
vector<Smartphone> shelves_inventory_3;
string line;

    ifstream in("C:/Users/Leus/CLionProjects/Project Fork/data.txt");
    if (in.is_open()){

        while (getline (in, line)){
           if(line=="Cellphone"){
            int sim,keyboard;
            string phone_number;
            getline(in,phone_number);
            in >> sim >> keyboard;
            in.ignore();
            Cellphone temp(phone_number,sim,keyboard);
            shelves_inventory.push_back(temp);
           }

           else if (line=="Camera"){
            int sensorSize, resolution, frameRate;
            in >> sensorSize >> resolution >> frameRate;
            in.ignore();
            Camera temp (sensorSize, resolution, frameRate);
            shelves_inventory_2.push_back(temp);
           }

           else if (line=="Smartphone"){
            int sensorSize, resolution, frameRate, sim, keyboard;
            bool wiFi, fingerprints;
            string phone_number;
            getline(in,phone_number);
            in >> sensorSize >> resolution >> frameRate >> sim >> keyboard >> wiFi >> fingerprints;
            in.ignore();
            Smartphone temp(sensorSize,resolution,frameRate,sim,keyboard,wiFi,fingerprints, phone_number);
            shelves_inventory_3.push_back(temp);
           }
        }
    }

    in.close();

    for(int i=0;i<shelves_inventory.size();i++){
        cout<<shelves_inventory[i].getPhoneNumber()<<endl;
    }
}
