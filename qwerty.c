#include <stdio.h>
void colemak() {
    int Q = 27;
    int W = 28;
    int F = 29;
    int P = 30;
    int G = 31;

    int J = 32;
    int L = 33;
    int U = 34;
    int Y = 35;
    int A = 36;

    int R = 37;
    int S = 38;
    int T = 39;
    int D = 40;
    int H = 45;

    int N = 46;
    int E = 47;
    int I = 48;
    int O = 49;
    int Z = 50;

    int X = 51;
    int C = 52;
    int V = 53;
    int B = 54;
    int K = 55;

    int M = 56;
    printf("%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p\n",
                   &Q, &W, &F, &P, &G, &J, &L, &U, &Y, &A, &R, &S, &T, &D, &H, &N, &E, &I, &O, &Z, &X, &C, &V, &B, &K, &M);
}
void colemak2(){
    int q = 1;
    int w = 2;
    int E = 3;
    int R = 4;
    int T = 5;

    int Y = 6;
    int U = 7;
    int I = 8;
    int O = 9;
    int P = 10;

    int A = 11;
    int S = 12;
    int D = 13;
    int F = 14;
    int G = 15;
    int H = 16;
    int J = 17;
    int K = 18;
    int L = 19;
    int Z = 20;

    int X = 21;
    int C = 22;
    int V = 23;
    int B = 24;
    int N = 25;

    int M = 26;
    printf("%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p\n",
           &Q, &W, &E, &R, &T,&Y, &U, &I, &O, &P, &A, &S, &D, &F, &G, &H, &J, &K, &L, &Z, &X, &C, &V, &B, &N, &M);
}