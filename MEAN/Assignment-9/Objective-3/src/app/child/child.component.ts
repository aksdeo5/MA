import { Component } from '@angular/core';
import { NumberService } from '../number.service';
import { StringService } from '../string.service';

@Component({
  selector: 'app-child',
  templateUrl: './child.component.html',
  styleUrls: ['./child.component.css'],
})
export class ChildComponent {
  public inputNumber = 1;
  public inputString = 'Linux System Programming with UNIX Internals';

  constructor(
    public numberService: NumberService,
    public stringService: StringService
  ) {}
}
