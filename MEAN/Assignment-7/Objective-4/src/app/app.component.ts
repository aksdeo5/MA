import { Component } from '@angular/core';

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.css'],
})
export class AppComponent {
  title = 'AngularAssignments';
  public name = 'Marvellous Infosystems';

  public onUpper() {
    this.name = this.name.toUpperCase();
  }
  public onLower() {
    this.name = this.name.toLowerCase();
  }
}
