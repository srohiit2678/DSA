// //PROGRAM OF ADJACENCY LIST BY USING ARRAYLIST=>
import java.util.*;
import java.io.PrintStream;
class A{

  ArrayList[] vartices = new ArrayList[4];
  // block code 
  {
	  for(int i=0;i<vartices.length;i++){
    vartices[i] = new ArrayList();   
  }
  }
  void insert(int vt_n,int v){
    vartices[vt_n].add(v);
  }

  void showAll() {
    for(int var1 = 0; var1 < this.vartices.length; ++var1) {
       System.out.print(var1);

       for(int var2 = 0; var2 < this.vartices[var1].size(); ++var2) {
          PrintStream var10000 = System.out;
          String var10001 = String.valueOf(this.vartices[var1].get(var2));
          var10000.print(" => " + var10001);
       }

       System.out.println();
    }

 }
}

class AdjcancyList{
 public static void main(String[] args){
  A a = new A();
  a.insert(0,1);
  a.insert(0,2);
  a.insert(0,3);
  a.insert(1,0);
  a.insert(1,2);
  a.insert(2,0);
  a.insert(2,1);
  a.insert(2,3);
  a.insert(3,0);
  a.insert(3,2);
  a.showAll();
}
}