void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//setup serial
}
void loop() {
  // put your main code here, to run repeatedly:
  float voltage = analogRead(A2);//read the input voltage(analog pin A2)
  float Temp = voltage * 0.48828125;//computing Temp
  Serial.print("Temp : ");//show Temp
  Serial.print(Temp);//show Temp
  Serial.println("*C");//show Temp
  delay(2000);//waits for 2 second
}
