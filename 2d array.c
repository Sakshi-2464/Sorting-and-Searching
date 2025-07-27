// 2d arrays - taking user input and displaying the matrix
#include <stdio.h>
int main() {
    int rows,cols,i,j;
    printf("enter number of rows:");
    scanf("%d",&rows);
    printf("enter number of columns:");
    scanf("%d",&cols);
    int a[rows][cols];
    printf("enter the values:");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
// searching an element in 2d array
#include <stdio.h>
int main() {
    int rows,cols,i,j;
    printf("enter number of rows:");
    scanf("%d",&rows);
    printf("enter number of columns:");
    scanf("%d",&cols);
    int a[rows][cols];
    printf("enter the values row-wise:");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
                printf("%d\t",a[i][j]);
            }
            printf("\n");
    }
    printf("enter the target element:");
    int target;
    int found=0;
    scanf("%d",&target);
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            if(a[i][j]==target){
                printf("found at (%d,%d)\n",i+1,j+1); // Adding 1 to index to display position in 1-based indexing

                found=1;
            }
        }
    }
    if(!found){
        printf("element not found");
    }
    return 0;
}
// to get row sum and column sum in 2d array
#include <stdio.h>
int main() {
    int rows,cols,i,j;
    printf("enter number of rows:");
    scanf("%d",&rows);
    printf("enter number of columns:");
    scanf("%d",&cols);
    int a[rows][cols];
    printf("enter the values row-wise:");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
                printf("%d\t",a[i][j]);
            }
            printf("\n");
    }
    int count=0;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            count=count+a[i][j];
        }
        printf("sum of the elements in row %d = %d\n",i+1,count);
        count=0;
    }
    for(j=0;j<cols;j++){
        for(i=0;i<rows;i++){
            count=count+a[i][j];
        }
        printf("sum of the elements in column %d = %d\n",j+1,count);
        count=0;
    }
    return 0;
}
// to get maximum row sum and colum sum in 2d array along with the row number and col number
#include <stdio.h>
int main() {
    int rows,cols,i,j;
    printf("enter number of rows:");
    scanf("%d",&rows);
    printf("enter number of columns:");
    scanf("%d",&cols);
    int a[rows][cols];
    printf("enter the values row-wise:");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
                printf("%d\t",a[i][j]);
            }
            printf("\n");
    }
    int row_sum = 0, col_sum = 0;
    int max_row_sum = 0, max_col_sum = 0;
    int max_row_index = 0, max_col_index = 0;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            row_sum=row_sum+a[i][j];
        }
        printf("sum of the elements in row %d = %d\n",i+1,row_sum);
        if(row_sum>max_row_sum){max_row_sum=row_sum;
            max_row_index=i+1;
        }
        row_sum=0;
    }
    printf("row %d has maximum sum as %d\n",max_row_index,max_row_sum);
    for(j=0;j<cols;j++){
        for(i=0;i<rows;i++){
            col_sum=col_sum+a[i][j];
        }
        printf("sum of the elements in column %d = %d\n",j+1,col_sum);
        if(col_sum>max_col_sum){
            max_col_sum=col_sum;
            max_col_index=j+1;
        }
        col_sum=0;
    }
    printf("column %d has maximum sum as %d\n",max_col_index,max_col_sum);
    return 0;
}
// to get minimum row sum and col sum along with row number and col number
#include <stdio.h>
#include<limits.h>
int main() {
    int rows,cols,i,j;
    printf("enter number of rows:");
    scanf("%d",&rows);
    printf("enter number of columns:");
    scanf("%d",&cols);
    int a[rows][cols];
    printf("enter the values row-wise:");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
                printf("%d\t",a[i][j]);
            }
            printf("\n");
    }
    int row_sum = 0, col_sum = 0;
    int min_row_sum = INT_MAX, min_col_sum = INT_MAX;
    int min_row_index = 0, min_col_index = 0;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            row_sum=row_sum+a[i][j];
        }
        printf("sum of the elements in row %d = %d\n",i+1,row_sum);
        if(row_sum<min_row_sum){min_row_sum=row_sum;
            min_row_index=i+1;
        }
        row_sum=0;
    }
    printf("row %d has maximum sum as %d\n",min_row_index,min_row_sum);
    for(j=0;j<cols;j++){
        for(i=0;i<rows;i++){
            col_sum=col_sum+a[i][j];
        }
        printf("sum of the elements in column %d = %d\n",j+1,col_sum);
        if(col_sum<min_col_sum){
            min_col_sum=col_sum;
            min_col_index=j+1;
        }
        col_sum=0;
    }
    printf("column %d has maximum sum as %d\n",min_col_index,min_col_sum);
    return 0;
}
// transpose of matrix
#include <stdio.h>
int main() {
    int rows,cols,i,j;
    printf("enter number of rows:");
    scanf("%d",&rows);
    printf("enter number of columns:");
    scanf("%d",&cols);
    int a[rows][cols];
    printf("enter the values row-wise:");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
                printf("%d\t",a[i][j]);
            }
            printf("\n");
    }
    int t[cols][rows];
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            t[j][i]=a[i][j];
        }
    }
    for(i=0;i<cols;i++){
        for(j=0;j<rows;j++){
                printf("%d\t",t[i][j]);
            }
            printf("\n");
    }
    return 0;
}
// matrix addition and subtraction user input multiple matrices
#include <stdio.h>
// matrix addtion function
void mat_add(int rows, int cols,int n, int matrices[n][rows][cols]){
    int res[rows][cols];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            res[i][j]=0; // initialize the result matrix with 0
        }
    }
    // k- matrix number
    // i- row number
    // j- column number
    for(int k=0;k<n;k++){
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                res[i][j]+=matrices[k][i][j]; //just keep adding the values to result matrix
            }
        }
    }
    printf("addtion:\n");
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                printf("%d\t",res[i][j]);
            }
            printf("\n");
        }
}
// subtraction function
void mat_sub(int rows, int cols,int n, int matrices[n][rows][cols]){
    int res[rows][cols];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            res[i][j]=matrices[0][i][j]; // strore the first matrix in result
        }
    }
    for(int k=1;k<n;k++){ // start with the 2nd matrix as 1st is stored in result
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                res[i][j]-=matrices[k][i][j]; // subtract rest of the matrix from the 1st matrix
            }
        }
    }
    printf("subtraction:\n");
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                printf("%d\t",res[i][j]);
            }
            printf("\n");
        }
}
int main() {
    int rows,cols,i,j,k,n;
    printf("enter the number of matrices:");
    scanf("%d",&n);
    printf("enter the number of rows:");
    scanf("%d",&rows);
    printf("enter number of columns:");
    scanf("%d",&cols);
    int matrices[n][rows][cols];
    for(k=0;k<n;k++){
        printf("enter the values for matrix %d ",k+1);
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                scanf("%d",&matrices[k][i][j]);
            }
        }
    }
    for(k=0;k<n;k++){
        printf("matrix %d\n",k+1);
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                printf("%d\t",matrices[k][i][j]);
            }
            printf("\n");
        }
    }
    mat_add(rows,cols,n,matrices); // function call
    mat_sub(rows,cols,n,matrices); // function call
    return 0;
}
// check if matrix is symmetric
#include <stdio.h>
#include<stdbool.h>
int main() {
    bool res=true;
    int rows,cols;
    printf("enter the number of rows:");
    scanf("%d",&rows);
    printf("enter number of columns:");
    scanf("%d",&cols);
    int a[rows][cols];
       if (rows != cols) {
        printf("Matrix is not square, so it cannot be symmetric.\n");
        return 0;
    }
    printf("enter the values:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(a[i][j]!=a[j][i]){
                res=false;
                break;
            }
        }
        if (!res) break;
    }
    if(!res){
        printf("not symmetric");
    }
    else{
        printf("symmetric");
    }
    return 0;
}
//
