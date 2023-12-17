# esim5 Abstrakti luokka

Tässä esimerkissä Person luokasta on tehty abstrakti **puhtaan virtuaalimetodin** avulla. Metodista sayStatus on tehty puhdas virtuaalimetodi määrityksellä 
<pre>
virtual void sayStatus()=0;
</pre>

Jos poistat main.cpp:ssä kommentit riviltä, jossa luodaan Person-luokan olio, saat virheilmoituksen.

Katso myös millainen on Person luokan **destruktori**