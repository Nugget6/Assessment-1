#include <stdio.h>

int
main ()
{

  int number;                                                  //Declaring variables
  int decrypt;
  printf ("Choose either:\n(1)Encryption\n(2)Decryption\n");   //Asks whether user wants Encrypt (1) or Decrypt (2)
  scanf ("%d", &number);                                       //Scans input and assigns value to variable 'number'

  switch (number)                                              //First switch case to distinguish between encrypt or decrypt
    {
    case 1:                                                    //Condition executed if user enters 1
      printf ("Choose Encryption type:\n(1)Rotate\n(2)Substitution\n");//Asks whether user wantes rotation (1) or substitution (2)

      scanf ("%d", &number);                                   //obtains input value and assigns new value to 'number'

      switch (number)                                          //Embembedded switch case inside main switch case
	{
	case 1:                                                    //Case 1 which performs encryption cipher(rotation)
	  {
	    char sentence[26], letter;                             //Declaration of array as char
	    int num, key;                                          //Declare variables

	    printf ("Enter a sentence to encrypt: ");              //Prints prompt message to encrypt
	    scanf (" %[^\n]s", &sentence);                         //Scans input of characters including white space
	    printf ("Enter key: ");                                //Prompt to enter shift key
	    scanf ("%d", &key);                                    //Scans key value and assigns to variable 'key'

	    for (num = 0; sentence[num] != '\0'; ++num)            //For loop condition statment.
	      {
		letter = sentence[num];                                //Rotation in alphabet = sentence typed

		if (letter >= 'a' && letter <= 'z')                    //Condition to continue code if letters are between 'a' and 'z'
		  {
		    letter = letter + key;                             //executed if condition is true. adds key to character (a)

		    if (letter > 'z')                                  //Condition
		      {
			letter = letter - 'z' + 'a' - 1;                   //Loops rotation if not between a or z
		      }

		    sentence[num] = letter;
		  }
		else if (letter >= 'A' && letter <= 'Z')               //condition for upper case letters
		  {
		    letter = letter + key;                             //executed if condition true

		    if (letter > 'Z')                                  
		      {
			letter = letter - 'Z' + 'A' - 1;                   //Control if characters outside A - Z
		      }

		    sentence[num] = letter;
		  }
	      }

	    printf ("Encrypted sentence: %s", sentence);           //Prints encrypted sentence assigned to variable 'sentence'


	  }

	  break;                                                   //Stops code from further executing

	case 2:{                                                   //Second case of Encryption Substitution if (2) is input
	char sentence[26], letter;                                 //declaration of variables in case
	    int num, key;
	    char a[10], b[10], c[10], d[10], e[10], f[10], g[10],
	      h[10], i[10], j[10], k[10], l[10], m[10], n[10], o[10],//Declare characters and the size
	      p[10], q[10], r[10], s[10], t[10], u[10], v[10], w[10],
	      x[10], y[10], z[10];
	    printf ("Enter a sentence to Encrypt: ");               //prompt to enter a sentence to encrypt
	    scanf (" %[^\t\n]s", &sentence);                        //Scans input including white space and assigns to 'sentence'

	    printf ("a= ");                                         //Prints character of alphabet and asks for susitute letter (a)
	    scanf ("%s", a);                                        //Scans input of substitute letter as assigns to variable (b)
	    printf ("b= ");//(a)
	    scanf ("%s", b);//(b)
	    printf ("c= ");//(a)
	    scanf ("%s", c);//(b)
	    printf ("d= ");//(a)
	    scanf ("%s", d);//(b)
	    printf ("e= ");//(a)
	    scanf ("%s", e);//(b)
	    printf ("f= ");//(a)
	    scanf ("%s", f);//(b)
	    printf ("g= ");//(a)
	    scanf ("%s", g);//(b)
	    printf ("h= ");//(a)
	    scanf ("%s", h);//(b)
	    printf ("i= ");//(a)
	    scanf ("%s", i);//(b)
	    printf ("j= ");//(a)
	    scanf ("%s", j);//(b)
	    printf ("k= ");//(a)
	    scanf ("%s", k);//(b)
	    printf ("l= ");//(a)
	    scanf ("%s", l);//(b)
	    printf ("m= ");//(a)
	    scanf ("%s", m);//(b)
	    printf ("n= ");//(a)
	    scanf ("%s", n);//(b)
	    printf ("o= ");//(a)
	    scanf ("%s", o);//(b)
	    printf ("p= ");//(a)
	    scanf ("%s", p);//(b)
	    printf ("q= ");//(a)
	    scanf ("%s", q);//(b)
	    printf ("r= ");//(a)
	    scanf ("%s", r);//(b)
	    printf ("s= ");//(a)
	    scanf ("%s", s);//(b)
	    printf ("t= ");//(a)
	    scanf ("%s", t);//(b)
	    printf ("u= ");//(a)
	    scanf ("%s", u);//(b)
	    printf ("v= ");//(a)
	    scanf ("%s", v);//(b)
	    printf ("w= ");//(a)
	    scanf ("%s", w);//(b)
	    printf ("x= ");//(a)
	    scanf ("%s", x);//(b)
	    printf ("y= ");//(a)
	    scanf ("%s", y);//(b)
	    printf ("z= ");//(a)
	    scanf ("%s", z);
	    printf ("Encrypted sentence:");                    //Prints encrypted sentence        
	    for (num = 0; sentence[num] != '\0'; ++num)        //For loop with condition
	      {

		letter = sentence[num];

		if (letter == 'a')    //(A)                       //Condition determines whether character is printed   //(A)
		  {
		    printf ("%s", &a);//(B)                       //Prints substitute character if included in sentence //(B)
		  }
		else if (letter == 'b')//(A)
		  {
		    printf ("%s", &b);//(B)
		  }
		else if (letter == 'c')//(A)
		  {
		    printf ("%s", &c);//(B)
		  }
		else if (letter == 'd')//(A)
		  {
		    printf ("%s", &d);//(B)
		  }
		else if (letter == 'e')//(A)
		  {
		    printf ("%s", &e);//(B)
		  }
		else if (letter == 'f')//(A)
		  {
		    printf ("%s", &f);//(B)
		  }
		else if (letter == 'g')//(A)
		  {
		    printf ("%s", &g);//(B)
		  }
		else if (letter == 'h')//(A)
		  {
		    printf ("%s", &h);//(B)
		  }
		else if (letter == 'i')//(A)
		  {
		    printf ("%s", &i);//(B)
		  }
		else if (letter == 'j')//(A)
		  {
		    printf ("%s", &j);//(B)
		  }
		else if (letter == 'k')//(A)
		  {
		    printf ("%s", &k);//(B)
		  }
		else if (letter == 'l')//(A)
		  {
		    printf ("%s", &l);//(B)
		  }
		else if (letter == 'm')//(A)
		  {
		    printf ("%s", &m);//(B)
		  }
		else if (letter == 'n')//(A)
		  {
		    printf ("%s", &n);//(B)
		  }
		else if (letter == 'o')//(A)
		  {
		    printf ("%s", &o);//(B)
		  }
		else if (letter == 'p')//(A)
		  {
		    printf ("%s", &p);//(B)
		  }
		else if (letter == 'q')//(A)
		  {
		    printf ("%s", &q);//(B)
		  }
		else if (letter == 'r')//(A)
		  {
		    printf ("%s", &r);//(B)
		  }
		else if (letter == 's')//(A)
		  {
		    printf ("%s", &s);//(B)
		  }
		else if (letter == 't')//(A)
		  {
		    printf ("%s", &t);//(B)
		  }
		else if (letter == 'u')//(A)
		  {
		    printf ("%s", &u);//(B)
		  }
		else if (letter == 'v')//(A)
		  {
		    printf ("%s", &v);//(B)
		  }
		else if (letter == 'w')//(A)
		  {
		    printf ("%s", &w);//(B)
		  }
		else if (letter == 'x')//(A)
		  {
		    printf ("%s", &x);//(B)
		  }
		else if (letter == 'y')//(A)
		  {
		    printf ("%s", &y);//(B)
		  }
		else if (letter == 'z')//(A)
		  {
		    printf ("%s", &z);//(B)
		  }
		else if (letter == ' ')                       //Allows white space to be unchanged (only change characters)
		  {
		    printf (" ");
		  }
	   }
	}

	  


	  break;                                          //Stops code from executing further
	}
      break;                                          //Stops code from executing further

    case 2:                                           //Case 2 of Decryption

      printf ("Choose Decryption type:\n(1)Rotate\n(2)Substitution\n");//Prints prompt for type of Decryption

      scanf ("%d", &decrypt);                         //Scans input for type of decryption

      switch (decrypt)                                //Switch statement for decryption type
	{
	case 1:                                           //Case 1 determined by user input
	  {

	    char sentence[26], letter;                    //Declare variables for case
	    int num, key;

	    printf ("Enter a sentence to decrypt: ");     //Prints prompt to enter a sentence for decryption
	    scanf (" %[^\n]s", &sentence);                //Scans input of sentence
	    printf ("Enter key: ");                       //Asks for a key of rotation
	    scanf ("%d", &key);                           //Scans key number

	    for (num = 0; sentence[num] != '\0'; ++num)   //For loop condition
	      {
		letter = sentence[num];

		if (letter >= 'a' && letter <= 'z')           //condition to determine if key should be applied to character
		  {
		    letter = letter - key;                    //executed if condition is true. minus key to character (a)

		    if (letter < 'a')
		      {
			letter = letter + 'z' - 'a' + 1;          //Loops rotation if not between a or z
		      }

		    sentence[num] = letter;
		  }
		else if (letter >= 'A' && letter <= 'Z')      //Condition for upper case letters
		  {
		    letter = letter - key;                    //Applies key to alphabet

		    if (letter < 'A')                         //Loops alphabet if between a - z
		      {
			letter = letter + 'Z' - 'A' + 1;
		      }

		    sentence[num] = letter;
		  }
	      }


	    printf ("Decrypted sentence: %s", sentence);  //Prints decrypted sentence
	  }



	  break;                                          //Stops execution

	case 2:                                           //Case 2 Substitution decryption
	  {

	    char sentence[26], letter;                    //declaration of variables in case
	    int num, key;
	    char a[10], b[10], c[10], d[10], e[10], f[10], g[10],
	      h[10], i[10], j[10], k[10], l[10], m[10], n[10], o[10],//Declare characters and the size
	      p[10], q[10], r[10], s[10], t[10], u[10], v[10], w[10],
	      x[10], y[10], z[10];
	    printf ("Enter a message to Decrypt: ");      //prompt to enter a sentence to decrypt
	    scanf (" %[^\t\n]s", &sentence);              //Scans input including white space and assigns to 'sentence'

	    printf ("a= ");                               //Prints character of alphabet and asks for susitute letter (a)
	    scanf ("%s", a);                              //Scans input of substitute letter as assigns to variable (b)
	    printf ("b= ");//(a)
	    scanf ("%s", b);//(b)
	    printf ("c= ");//(a)
	    scanf ("%s", c);//(b)
	    printf ("d= ");//(a)
	    scanf ("%s", d);//(b)
	    printf ("e= ");//(a)
	    scanf ("%s", e);//(b)
	    printf ("f= ");//(a)
	    scanf ("%s", f);//(b)
	    printf ("g= ");//(a)
	    scanf ("%s", g);//(b)
	    printf ("h= ");//(a)
	    scanf ("%s", h);//(b)
	    printf ("i= ");//(a)
	    scanf ("%s", i);//(b)
	    printf ("j= ");//(a)
	    scanf ("%s", j);//(b)
	    printf ("k= ");//(a)
	    scanf ("%s", k);//(b)
	    printf ("l= ");//(a)
	    scanf ("%s", l);//(b)
	    printf ("m= ");//(a)
	    scanf ("%s", m);//(b)
	    printf ("n= ");//(a)
	    scanf ("%s", n);//(b)
	    printf ("o= ");//(a)
	    scanf ("%s", o);//(b)
	    printf ("p= ");//(a)
	    scanf ("%s", p);//(b)
	    printf ("q= ");//(a)
	    scanf ("%s", q);//(b)
	    printf ("r= ");//(a)
	    scanf ("%s", r);//(b)
	    printf ("s= ");//(a)
	    scanf ("%s", s);//(b)
	    printf ("t= ");//(a)
	    scanf ("%s", t);//(b)
	    printf ("u= ");//(a)
	    scanf ("%s", u);//(b)
	    printf ("v= ");//(a)
	    scanf ("%s", v);//(b)
	    printf ("w= ");//(a)
	    scanf ("%s", w);//(b)
	    printf ("x= ");//(a)
	    scanf ("%s", x);//(b)
	    printf ("y= ");//(a)
	    scanf ("%s", y);//(b)
	    printf ("z= ");//(a)
	    scanf ("%s", z);//(b)
	    printf ("Decrypted sentence:");              //Prints decrypted sentence
	    for (num = 0; sentence[num] != '\0'; ++num)  //For loop with condition
	      {

		letter = sentence[num];

		if (letter == 'a')                           //Condition determines whether character is printed   //(A)
		  {
		    printf ("%s", &a);                       //Prints substitute character if included in sentence //(B)
		  }
		else if (letter == 'b')//(A)
		  {
		    printf ("%s", &b);//(B)
		  }
		else if (letter == 'c')//(A)
		  {
		    printf ("%s", &c);//(B)
		  }
		else if (letter == 'd')//(A)
		  {
		    printf ("%s", &d);//(B)
		  }
		else if (letter == 'e')//(A)
		  {
		    printf ("%s", &e);//(B)
		  }
		else if (letter == 'f')//(A)
		  {
		    printf ("%s", &f);//(B)
		  }
		else if (letter == 'g')//(A)
		  {
		    printf ("%s", &g);//(B)
		  }
		else if (letter == 'h')//(A)
		  {
		    printf ("%s", &h);//(B)
		  }
		else if (letter == 'i')//(A)
		  {
		    printf ("%s", &i);//(B)
		  }
		else if (letter == 'j')//(A)
		  {
		    printf ("%s", &j);//(B)
		  }
		else if (letter == 'k')//(A)
		  {
		    printf ("%s", &k);//(B)
		  }
		else if (letter == 'l')//(A)
		  {
		    printf ("%s", &l);//(B)
		  }
		else if (letter == 'm')//(A)
		  {
		    printf ("%s", &m);//(B)
		  }
		else if (letter == 'n')//(A)
		  {
		    printf ("%s", &n);//(B)
		  }
		else if (letter == 'o')//(A)
		  {
		    printf ("%s", &o);//(B)
		  }
		else if (letter == 'p')//(A)
		  {
		    printf ("%s", &p);//(B)
		  }
		else if (letter == 'q')//(A)
		  {
		    printf ("%s", &q);//(B)
		  }
		else if (letter == 'r')//(A)
		  {
		    printf ("%s", &r);//(B)
		  }
		else if (letter == 's')//(A)
		  {
		    printf ("%s", &s);//(B)
		  }
		else if (letter == 't')//(A)
		  {
		    printf ("%s", &t);//(B)
		  }
		else if (letter == 'u')//(A)
		  {
		    printf ("%s", &u);//(B)
		  }
		else if (letter == 'v')//(A)
		  {
		    printf ("%s", &v);//(B)
		  }
		else if (letter == 'w')//(A)
		  {
		    printf ("%s", &w);//(B)
		  }
		else if (letter == 'x')//(A)
		  {
		    printf ("%s", &x);//(B)
		  }
		else if (letter == 'y')//(A)
		  {
		    printf ("%s", &y);//(B)
		  }
		else if (letter == 'z')//(A)
		  {
		    printf ("%s", &z);//(B)
		  }
		else if (letter == ' ')               //Allows white space to be unchanged (only change characters)
		  {
		    printf (" ");
		  }


	      }
	  }


	  break;                                   //Stops code from executing further

	default:
	  printf ("Invalid Option\n");            //Final code that executes to display error. executed if no other code is read

	  break;                                  //Stops code from executing further
	}

    }
  return 0;
}




