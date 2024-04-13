#include <iostream>
using namespace std;

void sum(int alpha, int beta)
{if (alpha<beta) alpha+=100; else beta-=50;}
int main(){int alpha=22, beta=18; sum(beta,alpha); cout<<alpha<<beta;}