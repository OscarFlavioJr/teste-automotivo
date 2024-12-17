import random
import time

def simulate_sensor_data():
    while True:
        temperature = random.uniform(-30, 50)
        humidity = random.uniform(10, 60)

        print(f"Temperatura: {temperature:.2f}°C, Umidade: {humidity:.2f}%")

        if temperature > 40:
            print("Alerta: Temperatura alta!")
        if humidity < 20:
            print("Alerta: Umidade baixa!")

        time.sleep(1)

if __name__ == "__main__":
    simulate_sensor_data()