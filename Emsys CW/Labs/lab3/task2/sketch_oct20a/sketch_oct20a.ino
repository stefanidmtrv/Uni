unsigned int * gpio_enable_reg = (unsigned int*)(0x3FF44020);
unsigned int * gpio_w1ts_reg = (unsigned int*)(0x3FF44008);
unsigned int * gpio_w1tc_reg = (unsigned int*)(0x3FF4400C);

unsigned int initial_gpio_value;
void setup() {
    Serial.begin(115200);
    initial_gpio_value = *gpio_enable_reg; 
    Serial.println(initial_gpio_value, BIN);
    *gpio_enable_reg = initial_gpio_value | (1 << 18);
    Serial.println(*gpio_enable_reg);
}

void loop() {
  *gpio_w1ts_reg = (1 << 18);
    *gpio_w1tc_reg = (1 << 18);

}
