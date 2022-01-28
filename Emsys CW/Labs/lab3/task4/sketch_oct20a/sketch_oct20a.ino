unsigned int * gpio_enable_reg = (unsigned int*)(0x3FF44020);
unsigned int * gpio_w1ts_reg = (unsigned int*)(0x3FF44008);
unsigned int * gpio_w1tc_reg = (unsigned int*)(0x3FF4400C);

unsigned int * gpio_enable1_reg = (unsigned int*)(0x3FF4402C);
unsigned int * gpio_w1ts1_reg = (unsigned int*)(0x3FF44014);
unsigned int * gpio_w1tc1_reg = (unsigned int*)(0x3FF44018);

unsigned int initial_gpio_value;
unsigned int initial_gpio_value1;

void setup() {
    Serial.begin(115200);
    
    initial_gpio_value = *gpio_enable_reg; 
    initial_gpio_value1 = *gpio_enable1_reg;

    Serial.println(initial_gpio_value, BIN);
    Serial.println(initial_gpio_value1, BIN);

    *gpio_enable_reg = initial_gpio_value | (1 << 18) | (1<<5) | (1<<22)| (1<<21);
    *gpio_enable1_reg = initial_gpio_value1 | (1<<0)| (1<<1);

    Serial.println(*gpio_enable_reg, BIN);
    Serial.println(*gpio_enable1_reg, BIN);
}


void loop() {
  *gpio_w1ts_reg = (1 << 18) | (1<<5) | (1<<22)| (1<<21);
  *gpio_w1tc_reg = (1 << 18) | (1<<5) | (1<<22)| (1<<21);
  *gpio_w1ts1_reg = (1<<0)| (1<<1);
  *gpio_w1tc1_reg = (1<<0)| (1<<1);
}
