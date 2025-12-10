<?php

namespace Conectwork\Models\DAO;

use Conectwork\Core\DAO;
use Conectwork\Models\Entities\Usuario;

class UsuariosDAO extends DAO
{

    protected static string $tabela = "usuarios";
    protected static string $classe = Usuario::class;
    

}