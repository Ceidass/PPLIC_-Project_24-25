public class Test {

    double a = 0.3456d;
    
    public class Test2 {
        boolean b = true ;

        private void myMethod2(){

            Test testInstance = new Test();



            if(b==true || (testInstance.a>0.345d && testInstance.a<0.346d) ){

                out.print("The value is inside the desired interval");
                // Single line comment
                switch(testInstance.a){
                    case 0.3451d :
                    out.print("The 4th decimal is 1");
                    break;

                    case 0.3452d :
                    out.print("The 4th decimal is 2");
                    break;

                    case 0.3453d :
                    out.print("The 4th decimal is 3");
                    break;
                    // Another one here
                    case 0.3454d :
                    out.print("The 4th decimal is 4");
                    break;

                    case 0.3455d :
                    out.print("The 4th decimal is 5");
                    break;

                    case 0.3456d :
                    out.print("The 4th decimal is 6");
                    break;

                    case 0.3457d :
                    out.print("The 4th decimal is 7");
                    break;

                    case 0.3458d :
                    out.print("The 4th decimal is 8");
                    break;

                    case 0.3459d :
                    out.print("The 4th decimal is 9");
                    break;

                    default:
                    out.print("The value has more than 4 decimal places/digits");

                }
            
            }else if(b==false || (testInstance.a<0.345d || testInstance.a>0.346d)){
                out.print("The value is out of the desired interval");
                //And here
            }else{
                double up = testInstance.a;
                double down = testInstance.a; //And ofcourse here
                do{
                    up = up + 0.0001d;
                    down = down - 0.0001d;
                    /*comment
                    here 
                    in 
                    multiple
                    lines*/

                }while(b==true && (up>0.345d || down<0.346d));

            }
        }

    }


}