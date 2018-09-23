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
  }
  
  return 0;
}
