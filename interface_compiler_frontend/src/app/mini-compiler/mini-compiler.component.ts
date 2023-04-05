import { Component, OnInit } from '@angular/core';
import { HttpClient } from '@angular/common/http';

@Component({
  selector: 'app-mini-compiler',
  templateUrl: './mini-compiler.component.html',
  styleUrls: ['./mini-compiler.component.css']
})
export class MiniCompilerComponent implements OnInit {
  code: string = '';
  erreur: string = '';

  constructor(private http: HttpClient) { }

  compiler() {
    this.http.post('http://localhost:3000/compiler', { code: this.code })
      .subscribe((response: any) => {
        if (response.success) {
          this.erreur = '';
          console.log('Résultat de la compilation :', response.result);
        } else {
          this.erreur = response.error;
          console.log('Erreur de compilation :', response.error);
        }
      }, (error: any) => {
        console.error('Erreur de communication avec le serveur :', error);
      });
  }

  ngOnInit(): void {

  }
}
