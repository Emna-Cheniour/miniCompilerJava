import { ComponentFixture, TestBed } from '@angular/core/testing';

import { MiniCompilerComponent } from './mini-compiler.component';

describe('MiniCompilerComponent', () => {
  let component: MiniCompilerComponent;
  let fixture: ComponentFixture<MiniCompilerComponent>;

  beforeEach(async () => {
    await TestBed.configureTestingModule({
      declarations: [ MiniCompilerComponent ]
    })
    .compileComponents();

    fixture = TestBed.createComponent(MiniCompilerComponent);
    component = fixture.componentInstance;
    fixture.detectChanges();
  });

  it('should create', () => {
    expect(component).toBeTruthy();
  });
});
