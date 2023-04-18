import { Component } from '@angular/core';
import { StringService } from '../string.service';

@Component({
  selector: 'app-child2',
  templateUrl: './child2.component.html',
  styleUrls: ['./child2.component.css'],
})
export class Child2Component {
  public inputString = 'Angular Web Development with MEAN Stack';

  constructor(public stringService: StringService) {}
}
