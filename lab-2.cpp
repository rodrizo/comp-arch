
      
  // variable del tipo array que representa cada segmento del display
  int segmentos[10][7] = {
    //a, b, c, d, e, f, g
    {0, 0, 0, 0, 0, 0, 1},  //0
    {1, 0, 0, 1, 1, 1, 1},  //1
    {0, 0, 1, 0, 0, 1, 0},  //2
    {0, 0, 0, 0, 1, 0, 0},  //3
    {1, 0, 0, 1, 1, 0, 0},  //4
    {0, 1, 0, 0, 1, 0, 0},  //5
    {0, 1, 0, 0, 0, 0, 0},  //6
    {0, 0, 0, 1, 1, 1, 1},  //7
    {0, 0, 0, 0, 0, 0, 0},  //8
    {0, 0, 0, 0, 1, 0, 0}   //9
  };


void setup() {
  // inicializar todos los pines del 2 al 12 como salidas
  for (int i = 2; i <= 12; i++) {
    pinMode(i, OUTPUT);
  }
}

void display(int display, int number){	
  
    // encender o apagar los segmentos del display según la variable segmentos
    for (int j = 0; j < 7; j++) {
      digitalWrite(j+2, segmentos[number][j]); //+2 porque los pines inician en 2
    }
  
    // encender el dígito correspondiente
    digitalWrite(display+8, LOW); //+8 porque los displays inician en el pin 9
  
    delay(5); // mostrar el dígito por 5ms
  
    // apagar el dígito correspondiente
    digitalWrite(display+8, HIGH);

}

void loop() {
  
  display(4,8);

}