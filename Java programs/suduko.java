//in this code we can find the missing terms of suduko
//I am using recursion to solve it

//parent class for suduko solve

public class suduko {
  //solving by recursion 
  //solve is recursive method
    public static boolean solve(char[][] board){
      
      //checking  for blank terms
        for (int i=0; i<9; i++) {
            for (int j=0; j<9; j++) {
              
                if(board[i][j]=='.'){
                  
                  //run from 1 to 9 values 
                    for (char k='1'; k<='9'; k++) {
                      //isTrue will check all the value which is not in row,column,3x3 box
                       if(isTrue(board,i,j,k)){

                            board[i][j] = k;
                            if(solve(board)){
                                return true;
                            }else{
                                board[i][j] ='.';
                            }
                         }
                    }
                    return false;
                }
            }
        }
       return true;
    }
  
  //class for creating board of suduko and call to suduko class
  //it will check for row,colunm and 3x3 matrix
    public static boolean isTrue(char[][] board, int row, int col, char k) {
      
     for (int i=0; i<9; i++) {
       //check in same row
        if (board[row][i]==k) return false;
       //check in same column
        if(board[i][col]==k) return false;
        //check in 3x3 in which it is prasent
        if(board[3*(row/3)+(i/3)][3*(col/3)+(i%3)]==k) return false;
        
    }
    return true;

}
  //main method
    public static void main(String[] args) {
      
      //creating 2d array for suduko 
        char[][] board= {
            {'9', '5', '7', '.', '1', '3', '.', '8', '4'},
            {'4', '8', '3', '.', '5', '7', '1', '.', '6'},
            {'.', '1', '2', '.', '4', '9', '5', '3', '7'},
            {'1', '7', '.', '3', '.', '4', '9', '.', '2'},
            {'5', '.', '4', '9', '7', '.', '3', '6', '.'},
            {'3', '.', '9', '5', '.', '8', '7', '.', '1'},
            {'8', '4', '5', '7', '9', '.', '6', '1', '3'},
            {'.', '9', '1', '.', '3', '6', '.', '7', '5'},
            {'7', '.', '6', '1', '8', '5', '4', '.', '9'}
            };
      
// calling solve to run program
        solve(board);
      
     //now answer  is printing
        for (int i = 0; i < 9; i++){
            for (int j = 0; j < 9; j++) {
                System.out.print(board[i][j]+" ");
            }
            System.out.println();
        }

    }
}
