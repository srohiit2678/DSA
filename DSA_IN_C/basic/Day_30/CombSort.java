public class CombSort{
    static int c = 1;
    static void cSort(int x[],int n,int g){
       if(g<1)g = c--; 
       if(g<1)return;
        int t;
        int i;
        for(i=0;i<n-g;i++){
            if(x[i]>x[i+g]){
                t = x[i];
                x[i] = x[i+g];
                x[i+g] = t;
            display(x, n);
            }
        }
        cSort(x,n,(int)(g/1.3));
    }
    static void display(int x[],int n){
        for(int i = 0;i<n;i++){
            System.out.printf("%d ",x[i]);
        }
        System.out.printf("\n");
    }
    public static void main(String[] args) {
        int n=13;
        int x[] = {4,0,6,2,7,1,8,5,9,3,12,11,5};
        cSort(x, n, (int)(n/1.3));
        display(x,n);
    }
}