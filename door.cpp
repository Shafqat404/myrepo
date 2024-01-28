#include<iostream>
using namespace std;
class Door {
private:
    bool isopen;
    bool isLocked;
public:
    Door(); 
    void openDoor();
    void closeDoor();
    void lockDoor();
    void unlock();
    bool isDoorOpen() const;
    bool isDoor Locked() const;
};

// constructor implimentation
Door::Door(){
    isopen=false;
    isLocked=false;
}


// openDoor Function implementation
void Door::openDoor(){
    isOpen = true;


// closeDoor Function implementation
void Door::closeDoor(){
    isOpen = false;
// lockDoor function implementation
void Door::lockDoor(){
    isLocked = true;

}
void Door::isDoor locked() {
	isLocked = true;

}


void Door::unlockDoor() {
	isLocked = true;

}


void Door::isDooropen()
{
	isopen = true;
}

int main(){
return 0;
}