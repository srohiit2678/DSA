class GrowArray{
   int size;
   int capacity;
   int[] arr;
   GrowArray(){
    this(10);
   }
   
   GrowArray(int capacity){
    arr = new int[capacity];
    this.capacity = capacity;
   }
   
   void add(int v){
    resize();
    arr[size++] = v;
   }
   void resize(){
    if(size == capacity){
      capacity *= 2;
      int[] temp = new int[capacity];
      for(int i=0;i<size;i++){
        temp[i] = arr[i];
      }
      arr = temp;
    }
   }
   
  public static void main(String[] args){
    GrowArray a = new GrowArray(5);
    System.out.println(a.size);
    System.out.println(a.capacity);
    for(int i=1;i<=5;i++){
      a.add(i);
    }
    System.out.println(a.size);
    System.out.println(a.capacity);
    a.add(6);
    System.out.println(a.size);
    System.out.println(a.capacity);
  
  }
}