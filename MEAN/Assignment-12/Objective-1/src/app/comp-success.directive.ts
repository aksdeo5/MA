import { Directive, ElementRef, HostListener } from '@angular/core';

@Directive({
  selector: '[appCompSuccess]',
})
export class CompSuccessDirective {
  constructor(private elementRef: ElementRef) {}

  @HostListener('mouseenter') onMouseEnter() {
    this.elementRef.nativeElement.style.color = 'green';
  }

  @HostListener('mouseleave') onMouseLeave() {
    this.elementRef.nativeElement.style.color = null;
  }
}
