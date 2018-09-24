#include <vector>
#include <iostream>
#include <Windows.h>
#include <captainClasses>

class captains {
  private: 
  int mechCaptainID = 1;
  int safeCaptainID = 1;
  int elecCaptainID = 1;
  
  switch (mechCaptainID) {
    case 1:
      cout << "Mechanical Captain ID arguments met." << endl;
      break;
    default:
      cout << "Mechanical Captain ID arguments not met." << endl;
      break;
      
  switch (safeCaptainID) {
    case 1:
      cout << "Safety Captain ID arguments met." << endl;
      break;
    default:
      cout << "Safety Captain ID arguments not met." << endl;
      break;
      
  switch (elecCaptain) {
    case 1:
      cout << "Electrical Captain ID arguments met." << endl;
      break;
    default:
      cout << "Electrical Captain ID arguments not met." << endl;
      break;

using namespace std;

int main() {
  
  HWND hwnd = findWindow(NULL, "LabView.exe");
  if(hwnd == NULL) {
    cout << "LabView was not found. Please make sure there is an instance running." << endl;
    sleep(1);
    exit;
  } else if (hwnd == "LabView.exe") {
    cout << "LabView instance found!" << endl;
    sleep(1);
    cout << "Enter the Captain ID.";
  if(getline(cin,id) != mechCaptainID || getline(cin,n) != safeCaptainID || getline(cin,n) != elecCaptainID) { 
    cout << "None of the IDs match." << endl;  
  }
    getline(cin,id);
    sleep(2);
    cout << "Enter their name.";
    getline(cin,name);
    cout << "Login with ID" << mechCaptainID || safeCaptainID || elecCaptainID << " and login name " << name <<  " ." << endl;
    exit;
  }
  } else (hwnd != "LabView.exe" || hwnd != NULL) {
    cout << "Error found. Please restart the process." << endl;
    sleep(0);
    exit;
  }
  
  return 0;

}
