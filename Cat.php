<?php
class Cat{
    public $name;
    private $age;

    function birthday(){
        $this->age = $this->age+1;
    }
    static function moew(){
        echo "moew";
    }
}
?>