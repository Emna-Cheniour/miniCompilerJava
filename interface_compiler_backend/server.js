const express = require('express');
const cors = require('cors');

const app = express();
const bodyParser = require('body-parser');
const { spawn } = require('child_process');

app.use(cors());

app.options('*', cors());

app.use(bodyParser.urlencoded({ extended: true }));
app.use(bodyParser.json());

app.post('/compiler', (req, res) => {
  const code = req.body.code;
  let output = '';

  const child = spawn('C:\\Users\\lenovo\\Documents\\GL4\\GL4-2\\Compilation\\tp3\\miniCompilerSyn.exe', { stdio: ['pipe', 'pipe', 'inherit'] });

  child.stdin.write(code);
  child.stdin.end();

  child.stdout.on('data', (data) => {
    output += data.toString();
  });

  child.on('exit', (code, signal) => {
    if (code !== 0) {
      res.status(500).send(output);
    } else {
      res.send(output);
    }
  });
});


app.listen(3000, () => {
  console.log('Serveur démarré sur le port 3000');
});
