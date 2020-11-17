for( i=0; i<100; i++)
{
    var mod3 = ( i%3 == 0 );
    var mod5 = ( i%5 == 0 );
    if( ( mod3 || mod5) && i!= 0 ){
        var str = "";
        if(mod3){
            str += "fizz"; 
        }
        if(mod5){
            str += "buzz";
        }
        console.log( " " + str );
    } else {
        console.log( " " + i );
    }
} 