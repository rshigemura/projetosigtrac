//Index archive
var Express = require('express');
var _ = require('lodash');


var crud = require('./crud');
var router = Express.Router();


/*config:{
	//Se quiser pesquisar por outro uniqueIdentifier do objeto
	//Se não passar, todo o crud será feito procurando pelo id dado pela DB
	"uniqueIdentifier": "NameOfSchemaAttribute"
	//Segurança. Pode passar um arquivo com a função de segurança
	//Path da pasta do arquivo com a função de verificação. Ela receberá como parâmetro:
	//resultado, req, qual tipo de operacao está sendo chamado ("POST", "GET", "DELETE", "PATCH", "LIST")
	//Deve retornar o que se está autorizado ou não.
	//Se security não for especificado, o crud retornará normalmente
	"security": "PATH ABSOLUTO PARA ARQUIVO COM A FUNCAO DE SEGURANÇA"
	}
}
*/

var apiDefinition = [
	{
		"route": "/sensores",
		"model": '../models/sensor',
		"config": {"uniqueIdentifier": "alias"}
	},
	{
		"route": "/vitimas",
		"model": '../models/vitima',
		"config": {"uniqueIdentifier": "alias"}
	},
	{
		"route": "/paciente",
		"model": '../models/paciente',
		"config": {"uniqueIdentifier": "alias"}
	},
	{
		"route": "/chamados",
		"model": '../models/chamado',
		"config": {}
	}
];


_.forEach(apiDefinition, function(api){
	crud(router, api.route, api.model, api.config);
});



module.exports = router;
