import { Component } from '@angular/core';

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.css'],
})
export class AppComponent {
  public seperator = '';
  public slogan = '';
  public onShowSlogan() {
    this.seperator = '-';
    this.slogan = 'Educating For Better Tomorrow!';
  }
  title = 'AngularAssignments';
}
