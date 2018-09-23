// Testing these on private localhost provider! Experimental

//#CLIENTSIDE
function onAppLaunched() {
  if(clientr.app = "LabView.exe") {
    alert("Welcome to LabView. Awaiting arguments.");
    sleep(1000);
    return 0;
  } else if(clientr.app != "LabView.exe") {
    alert("LabView not found.");
    sleep(1000);
    exit(1);
    return 0;;
  }

function onKeyPressed("scan", "key", "keypressed") {
  if(keypress == "LShift") {
    prompt.GUI("-robot%20ExtraOptions");
    alert("Side-options loaded.");
    return 0;
  }

