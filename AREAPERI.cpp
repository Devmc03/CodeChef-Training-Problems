#include <stdio.h>

int main() {
    int length,breadth;
    scanf("%d %d",&length,&breadth);
    int area = length*breadth;
    int peri = 2*(length + breadth);
    
    if(area > peri) {
        printf("Area \n%d",area);
    } else if(area < peri) {
        printf("Peri \n%d",peri);
    } else {
        printf("Eq \n%d",area);
    }
    
    return 0;
}
