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
}

int main(){
return 0;
}