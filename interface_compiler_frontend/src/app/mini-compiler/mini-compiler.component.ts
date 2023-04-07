import { Component, OnInit } from '@angular/core';
import { HttpClient } from '@angular/common/http';

@Component({
  selector: 'app-mini-compiler',
  templateUrl: './mini-compiler.component.html',
  styleUrls: ['./mini-compiler.component.css']
})
export class MiniCompilerComponent implements OnInit {
  code: string = '';
  affichage: string = '';

  constructor(private http: HttpClient) { }

  compiler() {
    this.http.post('http://localhost:3000/compiler', { code: this.code })
      .subscribe((response: any) => {
        console.log('Résultat de la compilation :', response);
        this.affichage = 'Résultat de la compilation :' + response;
      }, (error: any) => {
        console.error('Erreur de communication avec le serveur :', error);
        this.affichage = 'Erreur de communication avec le serveur';
      }, () => {
        console.log('Requête terminée');
      });
  }


  ngOnInit(): void {

  }
}
