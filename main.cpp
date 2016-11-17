#include "B.h"

int main()
{
    int c;
    int ch;
    int keyx,key;
    NodeB *roo;
    roo=NULL;
    while(true){
                printf("\n 1.Add");
                printf("\n 2.Delete");
                printf("\n 3.Search");
                printf("\n 5.Write");
                printf("\n 6.Lev max");
                printf("\n 7.Exit");
                printf("\n\n");

                scanf("%d",&ch);

                 switch(ch){
                            case 1:
                                 do{
                                     printf("\n create node? <0/1>");
                                     scanf("%d",&c);
                                     printf("\n");
                                     if(c==1){
                                              printf("\n Enter key: ");
                                              scanf("%d",&key);
                                              roo=insert(key);
                                              }
                                     }while(c!=0);
                                     break;

                             case  2:
                                   printf("\n Enter Key: ");
                                   scanf("%d",&key);
                                   roo=deleteKey(&roo,key);
                                   break;

                             case 3:
                                  printf("Enter key to search \n");
                                  scanf("%d",&keyx);
                                  search(roo,keyx);
                                  break;

                             case 5:
                                  printf("\n\n");
                                  displayTree(roo,1);
                                  break;
                             case 6:
                                level_max=1;
                                head=new NodeB2;
                                head->next=NULL;
                                parcurgere1(roo,1);
                                parcurgere2(roo,1);
                                afisare();

                                break;

                             case 7:
                                  return(0);
                            }
                 }
}
