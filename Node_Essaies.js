function ecoute (){

    var http = require ('http');

    var server = http.createServer(function(req, res){
        res.writeHead (200);
        res.end('Salut tout le Monde !')
});

server.on('close',function() {
    console.log('bye, bye');
})
server.listen(8080);
}
ecoute();
setTimeout (ecoute,10000);