#include <cstdio>

int main (int argc, char* argv[]) {

  int a,b,c,d;
  
  fseek(stdin,0,SEEK_END);
  scanf("%d %d %d", &a,&b,&c);
  
  d = (a<b ? a:b)>c ? c:(a<b ? a:b);
	printf("%d", d);

	return 0;
}
