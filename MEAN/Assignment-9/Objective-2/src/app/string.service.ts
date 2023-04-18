import { Injectable } from '@angular/core';

@Injectable({
  providedIn: 'root',
})
export class StringService {
  constructor() {}

  public CountCapitals(str: string): number {
    let count = 0;

    for (let i = 0; i < str.length; i++)
      if (str.charCodeAt(i) >= 65 && str.charCodeAt(i) <= 90) count++;

    return count;
  }
}
