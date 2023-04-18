import { NgModule } from '@angular/core';
import { BrowserModule } from '@angular/platform-browser';

import { AppComponent } from './app.component';
import { NumberService } from './number.service';
import { StringService } from './string.service';
import { ChildComponent } from './child/child.component';

@NgModule({
  declarations: [AppComponent, ChildComponent],
  imports: [BrowserModule],
  providers: [NumberService, StringService],
  bootstrap: [AppComponent],
})
export class AppModule {}
