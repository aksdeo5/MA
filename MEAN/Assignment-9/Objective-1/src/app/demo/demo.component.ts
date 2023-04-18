import { Component, OnInit } from '@angular/core';
import { ArithmeticService } from '../arithmetic.service';

@Component({
  selector: 'app-demo',
  templateUrl: './demo.component.html',
  styleUrls: ['./demo.component.css'],
})
export class DemoComponent {
  public inputNumber1 = 5;
  public inputNumber2 = 7;
  
  constructor(public arithmeticService: ArithmeticService) {}
}
