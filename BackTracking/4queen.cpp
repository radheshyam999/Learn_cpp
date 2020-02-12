#include<iostream>
using namespace std;
bool CanIplaceQueenInROw(int r, int (*A) [4]){
        for (int i = r; i < r+1; i++){
           int j = 0;     
           while(j < 4){
               // This  will check If alerady Queen will be in row so it will return false so cant put queen in to the  row
               if (A[i][j] != 0)
                   return false;
               j++;
           }
          }
    return true;
}

bool CanIplaceQueenInColume(int c,int (*A) [4]){
    for (int i = c; i < c+1; i++){
        int j = 0;
        /*
          This will check That can we place Queen in colume 
          if we can  then it will return  true otherwise it will return true
        */
        while (j < 4){
            if (A[j][i] != 0)
                return false;
             j++;
        }
    }
    return true;
}
bool CanIplaceQueenInDigonal(int c,int (*A) [4]){
    for (int i = 0; i < 4; i++){
        int j = c;
        while (j < 4 && i < 4){
            if (A[i][j] != 0)
                 return false;
            j++;
            i++;
        }
        cout <<"\n";
    }
    for (int i = 0; i < 1; i++){
        int j = c;
        int k = i;
        while (j >= 0 && k >=0){
             if (A[i][j] != 0)
                 return false;
            j--;
            k--;
        }
    }
    return true;
}


void QueenProblem(int (*A)[4]){
       for(int i = 0; i<4;i++){
           for(int j = 0; j <4; j++){
                 
                       if(CanIplaceQueenInROw(i,A)&&CanIplaceQueenInColume(j,A)&&CanIplaceQueenInDigonal(j,A)){
                          A[i][j] = 1;
                        }
                                
           }
        }
        for(int i = 0; i <4;i++){
           for(int j = 0; j < 4;j++){
               cout << A[i][j] << " ";
           }
           cout << "\n";  
        }
        
}

int main(int argc, char const *argv[]){
    int A[4][4];
    
    for(int i=0; i < 4;i++){
      for (int j = 0; j < 4; j++){ 
           A[i][j] = 0;
          }
    }
    QueenProblem(A);

            return 0;
}
