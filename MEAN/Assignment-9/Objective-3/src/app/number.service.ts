import { Injectable } from '@angular/core';

@Injectable({
  providedIn: 'root',
})
export class NumberService {
  constructor() {}

  public ChkPrime(num: number): boolean {
    num = Math.abs(num);

    if (num < 2) return false;

    for (let divisor = 2; divisor <= Math.floor(num / 2); divisor++)
      if (num % divisor == 0) return false;

    return true;
  }
}
