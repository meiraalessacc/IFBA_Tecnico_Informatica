<?php

namespace Conectwork\Models\Entities;

use Conectwork\Core\Entity;

class Usuario extends Entity{

    protected ?int $id;
    protected ?string $nomeContratante;
    protected ?string $empresa;
    protected ?string $CNPJ
    protected ?string $emailcont 
    protected ?string $telefoneCont
    protected ?string $logradouroCont
    protected ?string $loginC;
    protected ?string $senhaC;
    
    
    

    public function setSenha($valor)
    {
        $this->senhaC = password_hash($valor,PASSWORD_DEFAULT);
    }

    public function autentica(string $senhaC)
    {
        if(password_verify($senhaC,$this->senhaC))
        {
            $_SESSION['__usuario'] = $this->id;
            $_SESSION['__logado'] = true;

            return true;
        }

        return false;
    }

   
    public static function getRegras() :array
    {
        return [
            'nome' => 'obrigatorio|maiorque:4',
            'email' => 'obrigatorio|email',
            'login' => 'obrigatorio',
            'senha' => 'obrigatorio|maiorque:5',
            'turmas_id' => 'obrigatorio'
        ];
    }

    public static function getLoginRegras() :array
    {
        return [
            'login' => 'obrigatorio',
            'senha' => 'obrigatorio'
        ];
    }
    
    

}