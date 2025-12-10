<?php

namespace Conectwork\Controllers;

use Conectwork\Core\Controller;



class HomeController extends Controller{


    public function index()
    {       
        $this->view('index');
    }

    public function cadastro()
    {
        $this->view('cadastro');
    }

    public function duvidas()
    {
        $this->view('duvidas');
    }
    public function login()
    {
        $this->view('login');
    }
    public function servicos()
    {
        $this->view('servicos');
    }
    public function prestador()
    {
        $this->view('prestador');
    }
    public function contratante()
    {
        $this->view('contratante');
    }


}