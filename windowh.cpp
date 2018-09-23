#include <vector>
#include <iostream>
#include <Windows.h>

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
    exit;
  } else (hwnd != "LabView.exe" || hwnd != NULL) {
    cout << "Error found. Please restart the process." << endl;
    sleep(0);
    exit;
  }
  
  return 0;
}
