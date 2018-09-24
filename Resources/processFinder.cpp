#include <vector>
#include <stream>
#include <fstream>
#include <iostream>
#include <Windows.h>

class captains {
private:
  int captains[2] = {elecCaptain, mechCaptain, safeCaptain}; // Arrays start at 0
  int elecCaptain = 1;
  int mechCaptain = 1;
  int safeCaptain = 1;
  bool isAdmin = 1;
public:
  int captainID[2] = {elecCaptainID, mechCaptainID, safeCaptainID};
  int elecCaptainID = 1000;
  int mechCaptainID = 1001;
  int safeCaptainID = 1002;

  switch (elecCaptainID) {
    case 1000:
      cout << "Arguments satisfied." << endl;
      break;
    default:
      cout << "Arguments not met." << endl;
  switch (mechCaptainID) {
    case 1001:
      cout << "Arguments satisfied." << endl;
      break;
    default:
      cout << "Arguments not satisfied." << endl;
  switch (safeCaptainID) {
    case 1002:
      cout << "Arguments satisfied." << endl;
      break;
    default: 
      cout << "Arguments not met." << endl;
      break;
 
int main() {
  
  HWND hwnd = findWindow(NULL, "LabView.exe");
  if (hwnd == NULL) {
    cout << "Please open LabView." << endl;
    sleep(1);
    exit;
  } else if (hwnd != NULL || hwnd != "LabView.exe") {
    cout << "Error in locating LabView instance. Please restart LabView." << endl;
    sleep(1.5);
    exit;
  } else if (hwnd == "LabView.exe) {
    cout << "LabView instance found." << endl;
    sleep(1);
    cout << "Please enter your login ID." << endl;
    getline(cin,captainID);
  if ((getline(cin,captainID)) != captainID) {
    cout << "Login ID credentials invalid. Try again." << endl;
  }
  if ((getline(cin,captainID)) = captainID) {
    cout << "Login ID credentials valid." << endl;
    sleep(1);
    exit;
  }
  }
             
  return 0;
             
}
