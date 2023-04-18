import { Injectable } from '@angular/core';

@Injectable({
  providedIn: 'root',
})
export class ArithmeticService {
  constructor() {}

  public Add(num1: number, num2: number): number {
    return num1 + num2;
  }
  public Sub(num1: number, num2: number): number {
    return num1 - num2;
  }
}
