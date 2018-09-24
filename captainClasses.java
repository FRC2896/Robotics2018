// Mechanical Captain Class
public class mechCaptain {
  const int mechCaptainID= 1;
  const boolean isAdmin = 1;
  if (mechCaptainID > 1 || mechCaptainID < 1) {
    System.out.println("The ID does not match. It should be " + mechCaptainID + " .");
  } else if (mechCaptainID == 1) {
    System.out.println("The ID matches. The value was returned as " + mechCaptainID + " .");
  } else (mechCaptainID != 1) {
    System.out.println("Arguments failed.");
  }
 
  switch (mechCaptainID) {
    case '1':
      System.out.println("The Mechanical Captain ID was detected. You may continue.");
      break;
    default: 
      System.out.println("The Mechanical Captain ID was not detected. You have been halted.");
      break;
  }

// Safety Captain Class
public class safeCaptain {
  const int safeCaptainID = 1;
  const boolean isAdmin = 1;
  if (safeCaptain ID > 1 || safeCaptainID < 1) {
    System.out.println("The ID does not match. It should be " + safeCaptainID + " .");
  } else if (safeCaptainID == 1) {
    System.out.println("The ID matches. The value was returned as " + safeCaptainID + " .");
  } else (safeCaptainID != 1) {
    System.out.println("Arguments failed.");
  }
  
  switch (safeCaptainID) {
    case '1':
      System.out.println("The Safety Captain ID was detected. You may continue.");
      break;
    default:
      System.out.println("The Safety Catpain ID was not detected. You have been halted.");
  }
  
 // Electrical Captain Class
  public class elecCaptain {
    const int elecCaptainID = 1;
    const boolean isAdmin = 1;
    if (elecCaptainID > 1 || elecCaptainID < 1) {
      System.out.println("The ID does not match. It should be " + elecCaptainID + " .");
    } else if (elecCaptainID == 1) {
      System.out.println("The ID matches. The value was returned as " + elecCaptainID + " .");
    } else (elecCaptainID != 1) {
      System.out.println("Arguments failed.");
    }
    
      switch (elecCaptainID) {
    case '1':
      System.out.println("The Electrical Captain ID was detected. You may continue.");
      break;
    default:
      System.out.println("The Electrical Catpain ID was not detected. You have been halted.");
  }
  
 return 0;

}
