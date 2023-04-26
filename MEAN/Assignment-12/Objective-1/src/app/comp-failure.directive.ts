import { Directive, ElementRef, HostListener } from '@angular/core';

@Directive({
  selector: '[appCompFailure]',
})
export class CompFailureDirective {
  constructor(private elementRef: ElementRef) {}

  @HostListener('mouseenter') onMouseEnter() {
    this.elementRef.nativeElement.style.color = 'red';
  }

  @HostListener('mouseleave') onMouseLeave() {
    this.elementRef.nativeElement.style.color = null;
  }
}
