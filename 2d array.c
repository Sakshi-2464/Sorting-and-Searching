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
//
