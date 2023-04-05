const express = require('express');
const bodyParser = require('body-parser');
const { exec } = require('child_process');
const cors = require('cors');
const { spawn } = require('child_process');

const app = express();

// autoriser toutes les origines
app.use(cors());

// ou autoriser des origines spécifiques
app.use(cors({
  origin: 'http://localhost:4200'
}));

app.use(bodyParser.json());
app.use(bodyParser.urlencoded({ extended: true }));

app.post('/compiler',cors({
  origin: 'http://localhost:4200'
}), (req, res) => {
  const code = req.body.code;

//   exec(`C://Users//lenovo//Documents//GL4//GL4-2//Compilation//tp3//miniCompilerSyn.exe < "${code}"`, (error, stdout, stderr) => {
//     if (error) {
//       console.error(`Erreur lors de l'exécution du fichier miniCompilerSyn.exe: ${error.message}`);
//       res.status(500).json({ error: 'Erreur lors de la compilation' });
//     } else {
//       console.log('Sortie du fichier miniCompiler.exe :', stdout);
//       res.json({ output: stdout });
//     }
//   });
// });
const process = spawn('C:\Users\lenovo\Documents\GL4\GL4-2\Compilation\tp3\miniCompilerSyn.exe', [code]);

process.stdout.on('data', (data) => {
  console.log(`Sortie du fichier miniCompiler.exe : ${data}`);
  res.json({ output: data.toString() });
});

process.stderr.on('data', (data) => {
  console.error(`Erreur lors de l'exécution du fichier miniCompilerSyn.exe: ${data}`);
  res.status(500).json({ error: 'Erreur lors de la compilation' });
});

process.on('close', (code) => {
  console.log(`Le processus miniCompilerSyn.exe s'est terminé avec le code de sortie ${code}`);
});
});

app.listen(3000, () => {
  console.log('Serveur backend démarré sur le port 3000');
});
