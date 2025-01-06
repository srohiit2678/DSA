// NQueen for 4X4 box
public class NQueen {
    static boolean isValidPlace(int [][]box,int row,int colum){
    int i,j;    
        for(j=colum;j>=0;j--){
            if(box[row][j]==1)return false;
        }

       for(i=row;i>=0;i--){
            if(box[i][colum]==1)return false;
        }        
        
        for(i=row,j=colum;i>=0 && j>=0;i--,j--){
           if(box[i][j]==1)return false;
        }
        
        for(i=row,j=colum;i>=0 && j<4;i--,j++){
            if(box[i][j]==1)return false;
         }

        return true;
    }
    static boolean checkRows(int [][]box,int row){
        if(row>=4)return true;
        for(int colum=0;colum<4;colum++){
            if(isValidPlace(box,row,colum)){
                box[row][colum]=1;
                if(checkRows(box,row+1))return true;
                box[row][colum]=0;
            }
        }
    return false;
    }


    static void display(int [][]box){
        for(int []i:box){
            for(int j:i){
                System.out.print(j+" ");
            }
            System.out.println();
        }

        System.out.println();
        System.out.println();
        System.out.println();
    }

    public static void main(String []args){
        int [][]box = { 
                        {0,0,0,0},
                        {0,0,0,0},
                        {0,0,0,0},
                        {0,0,0,0}
                        };
        checkRows(box,0);
        display(box);
     }
}