Strings 
Class Methods

charAt() Method
public class Main {
  public static void main(String[] args) {
String myStr = "anuj";
char result = myStr.charAt(0);
System.out.println(result);
}  
  }


codePointAt() Method
public class Main {
  public static void main(String[] args) {
String myStr = "anuj";
int result = myStr.codePointAt(0);
System.out.println(result);
}   
 }

codePointBefore() Method
public class Main {
  public static void main(String[] args) {
String myStr = "anuj";
int result = myStr.codePointBefore(1);
System.out.println(result);
}   
 }

codePointCount() Method
public class Main {
  public static void main(String[] args) {
String myStr = "anuj";
int result = myStr.codePointCount(0, 5);
System.out.println(result);
} 
  }



compareTo() Method
public class Main {
  public static void main(String[] args) {
String myStr1 = "anuj";
String myStr2 = "anuj;
System.out.println(myStr1.compareTo(myStr2)); //
}  
 }


concat() Method
public class Main {
  public static void main(String[] args) {
String firstName = "anuj ";
String lastName = "prajapat";
System.out.println(firstName.concat(lastName));
}  
}

contains() Method
public class Main {
  public static void main(String[] args) {
String myStr = "anuj";
System.out.println(myStr.contains(Vin"));   // true
System.out.println(myStr.contains("e"));     // true
System.out.println(myStr.contains("Ti"));    // 
} 
  }

contentEquals() Method
public class Main {
  public static void main(String[] args) {
String myStr = "anuj";
System.out.println(myStr.contentEquals(Vineet"));  // true
System.out.println(myStr.contentEquals("e"));      // false
System.out.println(myStr.contentEquals(" Ti"));
}   
}



copyValueOf() Method
public class Main {
  public static void main(String[] args) {
char[] myStr1 = {'a', 'n', 'u','j'};
String myStr2 = "”;
myStr2 = myStr2.copyValueOf(myStr1, 0, 5);
System.out.println("Returned String: " + myStr2)
} 
 }

endsWith() Method
public class Main {
  public static void main(String[] args) {
String myStr = "anuj";
System.out.println(myStr.endsWith("Vin"));   // false
System.out.println(myStr.endsWith("eet"));   // true
System.out.println(myStr.endsWith("t"));     //
} 
}

toUpperCase() Method
public class Main {
  public static void main(String[] args) {
String txt = anuj prajapat";
System.out.println(txt.toUpperCase());
System.out.println(txt.toLowerCase())
}
 }





toLowerCase() Method
public class Main {
  public static void main(String[] args) {
String txt = "anuj prajapat";
System.out.println(txt.toUpperCase());
System.out.println(txt.toLowerCase());
}
   }



trim() Method
public class Main {
  public static void main(String[] args) {
String myStr = "       anuj prajapat      ";
System.out.println(myStr);
System.out.println(myStr.trim());
}
}
