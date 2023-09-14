#include <stdio.h>
int main(){
    char Character;
    printf("Nhap vao ki tu bat ki ");
    scanf("%c", &Character);
    switch (Character)
    {
        case 'A':
          printf("Ada");
          break;
        case 'a':
          printf("Ada");
          break;
        case 'B':
          printf("Basic");
          break;
        case 'b':
          printf("Basic");
          break;
        case 'C':
          printf("COBOL");
          break;
        case 'c':
          printf("COBOL");
          break;
        case 'D':
          printf("dBASE III");
          break;
        case 'd':
          printf("dBASE III");
          break;
        case 'F':
          printf("Fortran");
          break;
        case 'f':
          printf("Fortran");
          break;
        case 'P':
          printf("Pascal");
          break;
        case 'p':
          printf("Pascal");
          break;
        case 'V':
          printf("Visual C++");
          break;
        case 'v':
          printf("Visual C++");
          break;
        default:
          printf("Error");
          break;
    }
}