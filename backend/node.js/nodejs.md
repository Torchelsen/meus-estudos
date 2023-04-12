# node.js
> Node.js é um ambiente de execução de JavaScript no lado do servidor. O Node.js é construído sobre o V8 do Google Chrome, e é usado principalmente para criar servidores de web.

- Exemplo de uma aplicação simples com node.js:
    ```js
    const http = require('http');
    const hostname = '127.0.0.1';
    const port = 3000;

    const server = http.createServer((req, res) => {
        res.statusCode = 200;
        res.setHeader('Content-Type', 'text/plain');
        res.end('Hello World');
    });

    server.listen(port, hostname, () => {
        console.log(`Server running at http://${hostname}:${port}/`);
    });
    ```
