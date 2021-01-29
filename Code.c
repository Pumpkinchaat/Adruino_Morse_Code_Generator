int out = 13;
char str[1000] = "test"; //type your message here
char code[5];

int encoder(char x)
{
   switch (x)
   {
   case 'a':
   {
      strcpy(code, ".-");
      return strlen(".-");
   }
   case 'b':
   {
      strcpy(code, "-...");
      return strlen("-...");
   }
   case 'c':
   {
      strcpy(code, "-.-.");
      return strlen("-.-.");
   }
   case 'd':
   {
      strcpy(code, "-..");
      return strlen("-..");
   }
   case 'e':
   {
      strcpy(code, ".");
      return strlen(".");
   }
   case 'f':
   {
      strcpy(code, "..-.");
      return strlen("..-.");
   }
   case 'g':
   {
      strcpy(code, "--.");
      return strlen("--.");
   }
   case 'h':
   {
      strcpy(code, "....");
      return strlen("....");
   }
   case 'i':
   {
      strcpy(code, "..");
      return strlen("..");
   }
   case 'j':
   {
      strcpy(code, ".---");
      return strlen(".---");
   }
   case 'k':
   {
      strcpy(code, "-.-");
      return strlen("-.-");
   }
   case 'l':
   {
      strcpy(code, ".-..");
      return strlen(".-..");
   }
   case 'm':
   {
      strcpy(code, "--");
      return strlen("--");
   }
   case 'n':
   {
      strcpy(code, "-.");
      return strlen("-.");
   }
   case 'o':
   {
      strcpy(code, "---");
      return strlen("---");
   }
   case 'p':
   {
      strcpy(code, ".--.");
      return strlen(".--.");
   }
   case 'q':
   {
      strcpy(code, "--.-");
      return strlen("--.-");
   }
   case 'r':
   {
      strcpy(code, ".-.");
      return strlen(".-.");
   }
   case 's':
   {
      strcpy(code, "...");
      return strlen("...");
   }
   case 't':
   {
      strcpy(code, "-");
      return strlen("-");
   }
   case 'u':
   {
      strcpy(code, "..-");
      return strlen("..-");
   }
   case 'v':
   {
      strcpy(code, "...-");
      return strlen("...-");
   }
   case 'w':
   {
      strcpy(code, ".--");
      return strlen(".--");
   }
   case 'x':
   {
      strcpy(code, "-..-");
      return strlen("-..-");
   }
   case 'y':
   {
      strcpy(code, "-.--");
      return strlen("-.--");
   }
   case 'z':
   {
      strcpy(code, "--..");
      return strlen("--..");
   }
   case ' ':
   {
      strcpy(code, "-");
      return strlen("-");
   }
   default:
      return -1;
   }
}

void dash()
{
   digitalWrite(out, HIGH);
   delay(750);
   digitalWrite(out, LOW);
   delay(250);
}

void dot()
{
   digitalWrite(out, HIGH);
   delay(250);
   digitalWrite(out, LOW);
   delay(250);
}

void setup()
{
   pinMode(out, OUTPUT);
}

void loop()
{
   for (int i = 0, len = strlen(str); i < len; i++)
      for (int j = 0, n = encoder(tolower(str[i])); j < n; j++)
         switch (code[j])
         {
         case '-':
         {
            dash();
            break;
         }
         case '.':
         {
            dot();
            break;
         }
         }
   exit(0);
}
