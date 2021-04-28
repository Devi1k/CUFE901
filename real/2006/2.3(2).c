//
// Created by 倪泽溥 on 2021/4/27.
//
static int a =10;
void sub2(){
    extern int b;
    a+=10;
    b+=2;
    printf("%d %d\n",a,b);
}
