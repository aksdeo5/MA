import { Directive, ElementRef } from '@angular/core';

@Directive({
  selector: '[appCustomStyle]',
})
export class CustomStyleDirective {
  constructor(private elementRef: ElementRef) {
    this.elementRef.nativeElement.style.backgroundColor = 'yellow';
    this.elementRef.nativeElement.style.fontWeight = 'bold';
  }
}
