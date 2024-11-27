//
//  main.c
//  5task
//
//  Created by Никита Башлыков on 21.09.2024.
//

#include <stdio.h>

int main() {
  float download_speed, file_size, download_time;

  printf("Введите скорость загрузки в мегабитах в секунду: ");
  scanf("%f", &download_speed);

  printf("Введите размер файла в мегабайтах: ");
  scanf("%f", &file_size);

  download_time = file_size * 8 / download_speed;

  printf("При скорости загрузки %.2f мегабит в секунду файл размером %.2f мегабайт\n", download_speed, file_size);
  printf("загружается за %.2f секунд (ы).\n", download_time);

  return 0;
}
