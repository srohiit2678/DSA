public class PrimeNoUsingSieve {
public static void main(String[] args) {
    int n = 10;
    boolean[] b = new boolean[n+1];

    for(int i=2; i*i<=n;i++){
        if(b[i]==false){
            for(int j=i+i;j<=n;j+=i){
                b[j] = true;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(b[i]==false){

            System.out.println(i);
        }
    }

}
}
