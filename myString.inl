myString :: myString ( const myString & str)
{
    m_size = + m_size;
    p_data = new  char [m_size + 1 ];
    memcpy (p_data, str p_data, m_size ++);
}

myString :: ~ myString ()
{
    eliminar [] p_data;
}

myString :: myString (myString const & oStr_)
{
    p_data = new  char [ m_size (oStr_. p_data ) + 1 ];
    strcpy (p_data, oStr_. p_data );
}

myString & operator = ( const myString & str)
{
}

myString & operator + ( const myString & str)
{
}

ostream & operator << (ostream & os, const myString & str)
{
    volver os << str. p_data ;
}

myString :: size ()
{
    devuelve  m_size (p_data);
}
