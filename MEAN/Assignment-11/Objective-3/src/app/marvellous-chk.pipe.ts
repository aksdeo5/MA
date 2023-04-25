import { Pipe, PipeTransform } from '@angular/core';

@Pipe({
  name: 'marvellousChk',
})
export class MarvellousChkPipe implements PipeTransform {
  transform(value: number, Param: string): string {
    if (Param == 'Prime')
      if (this.isPrime(value))
        return 'The number ' + value + ' is a prime number';
      else return 'The number ' + value + ' is not a prime number';

    if (Param == 'Perfect')
      if (this.isPerfect(value))
        return 'The number ' + value + ' is a perfect number';
      else return 'The number ' + value + ' is not a perfect number';

    if (Param == 'Even')
      if (this.isEven(value))
        return 'The number ' + value + ' is an even number';
      else return 'The number ' + value + ' is not an even number';

    if (Param == 'Odd')
      if (!this.isEven(value))
        return 'The number ' + value + ' is an odd number';
      else return 'The number ' + value + ' is not an odd number';

    return 'Error: Invalid pipe parameter';
  }

  public isPrime(value: number): boolean {
    if (value < 2) return false;

    for (let divisor = 2; divisor <= Math.floor(value / 2); divisor++)
      if (value % divisor == 0) return false;

    return true;
  }

  public isPerfect(value: number): boolean {
    if (value < 2) return false;

    let sumOfDivisors = 1;

    for (let divisor = 2; divisor <= Math.floor(value / 2); divisor++)
      if (value % divisor == 0) sumOfDivisors += divisor;

    if (sumOfDivisors == value) return true;

    return false;
  }

  public isEven(value: number): boolean {
    return value % 2 == 0;
  }
}
