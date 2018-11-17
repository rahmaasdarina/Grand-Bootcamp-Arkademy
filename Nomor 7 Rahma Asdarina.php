<html>
<head>
	<title>Tampil Data Hasil Query Nomor 6</title>
</head>
<body>

<?php

    $conn = mysql_connect("localhost","root","");
    mysql_select_db("nomor6_dbase",$conn);
    $perintah_sql = "SELECT product_categories.id, product_categories.name, GROUP_CONCAT(products.name SEPARATOR ',') as products from product_categories INNER JOIN products ON product_categories.id = products.category_id Group By id";
    $hasil_query = mysql_query($perintah_sql);
  
$jumlah_data = mysql_num_rows($hasil_query);

echo "<h3>DATA HASIL QUERY</h3>";
echo "<table border=1 cellpadding=2 cellspacing=0>";
echo "<tr bgcolor=silver align=center>";
echo "<td>Id</td>";
echo "<td>Name</td>";
echo "<td>Products</td>";
echo "</tr>";

while ($row=mysql_fetch_array($hasil_query))
{
	echo "<tr>";
	echo "<td>$row[0]</td>";
	echo "<td>$row[1]</td>";
	echo "<td>$row[2]</td>";
	echo "</tr>";
}

?>
</body>
</html>
	