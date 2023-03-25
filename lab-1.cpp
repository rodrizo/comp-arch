void setup() {
  // inicializar todos los pines del 2 al 12 como salidas
  for (int i = 2; i <= 12; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // variable del tipo array que representa cada segmento del display
  int segmentos[10][7] = {
    //a, b, c, d, e, f, g
    {1, 1, 1, 1, 1, 1, 0},  //0
    {0, 1, 1, 0, 0, 0, 0},  //1
    {1, 1, 0, 1, 1, 0, 1},  //2
    {1, 1, 1, 1, 0, 0, 1},  //3
    {0, 1, 1, 0, 0, 1, 1},  //4
    {1, 0, 1, 1, 0, 1, 1},  //5
    {1, 0, 1, 1, 1, 1, 1},  //6
    {1, 1, 1, 0, 0, 0, 0},  //7
    {1, 1, 1, 1, 1, 1, 1},  //8
    {1, 1, 1, 1, 0, 1, 1}   //9
  };

  // ciclo para mostrar cada dígito del display
  for (int i = 0; i < 10; i++) {
    // encender o apagar los segmentos del display según la variable segmentos
    for (int j = 0; j < 7; j++) {
      digitalWrite(j+2, segmentos[i][j]);
    }
    delay(100); // mostrar el dígito por 10ms
    // apagar todos los segmentos del display
    for (int j = 0; j < 7; j++) {
      digitalWrite(j+2, LOW);
    }
    delay(500); // dejar el display apagado por 10ms
  }
}