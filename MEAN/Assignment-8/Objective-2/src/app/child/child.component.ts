import { Component, EventEmitter, Input, Output } from '@angular/core';

@Component({
  selector: 'app-child',
  templateUrl: './child.component.html',
  styleUrls: ['./child.component.css'],
})
export class ChildComponent {
  @Input() public dataFromParent = '';
  public dataToParent = 'Hello from Child!';
  @Output() public send = new EventEmitter();

  public onSend() {
    this.send.emit(this.dataToParent);
  }
}
