<?php

namespace Conectwork\Models\Entities;

use Conectwork\Core\Entity;

class Prestador extends Entity{

    protected ?int $id;
    protected ?string $nomeprest;
    protected ?string $CPF;
    protected ?string $emailprest;
    protected ?string $area;
    protected ?string $escolaridade;
    protected ?string $telefonePrest;
    protected ?string $logradouroPrest;
    protected ?string $loginP;
    protected ?string $senhaP;
   
   
    
    

    public function setSenha($valor)
    {
        $this->senhaP = password_hash($valor,PASSWORD_DEFAULT);
    }

    public function autentica(string $senhaP)
    {
        if(password_verify($senhaP,$this->senhaP))
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