#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pos = 0;
int i;

void rys(char c)	//Rysowanie przejscia
{
printf("-%c -> q%d",c, pos);
}

void niepop()	//Symbol nie nalezy do alfabetu
{
printf("\nNiepoprawny symbol %d - elementu\n", i+1);
exit(1);
}

void q0 (char c)	// Stan q0
{
	 if (c == '0') {
		pos = 1;
		rys(c);
       	}
       	else if (c == '1') {
		pos = 2;
  		rys(c);
	} else { niepop();
    }
}

void q1 (char c)	// Stan q1
{
        if (c == '0') {
                pos = 3;
		rys(c);
        }
        else if (c == '1') {
                pos = 0;
		rys(c);
  } else { niepop();
    }
}

void q2 (char c)	//Stan q2
{
        if (c == '0') {
                pos = 0;
		rys(c);
        }
        else if (c == '1') {
                pos = 3;
		rys(c);

  } else { niepop();
    }
}

void q3 (char c)	// Stan q3
{
        if (c == '0') {
                pos = 1;
		rys(c);
        }
        else if (c == '1') {
                pos = 2;
	       	rys(c);

  } else { niepop();
    }
}

int main(int argc, char *argv[]) 
{ 	
	if (argc != 2) {printf ("Niepoprawna liczba argumentow wywolania. Prosze podac jeden ciag wejsciowy.\n");
	exit(1);}
	char* s;
        s = (char*) malloc(sizeof(char)*strlen(argv[1]));
	strcpy(s,argv[1]);
	int l = strlen(s);
 	printf ("q0");
	for (i = 0; i < l; i++){
		switch(pos)
		{
			case 0:
				q0(s[i]);
				break;
			case 1:
				q1(s[i]);
				break;
			case 2:
				q2(s[i]);
				break;
			case 3:
				q3(s[i]);
				break;
		}
	}
	
	if (pos == 3)
		printf("\nCiag zostal zaakceptowany\n");
	else printf("\nCiag nie zaakceptowany\n");
return 0;
}
