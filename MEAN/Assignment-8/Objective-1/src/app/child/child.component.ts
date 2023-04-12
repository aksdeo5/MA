import {
  Component,
  ElementRef,
  EventEmitter,
  Output,
  ViewChild,
} from '@angular/core';

@Component({
  selector: 'app-child',
  templateUrl: './child.component.html',
  styleUrls: ['./child.component.css'],
})
export class ChildComponent {
  @ViewChild('inputField1', { static: true }) public inputRef!: ElementRef;

  @Output() public send: EventEmitter<any> = new EventEmitter();

  public onSend() {
    this.send.emit(this.inputRef.nativeElement.value);
    this.inputRef.nativeElement.value = '';
  }
}
