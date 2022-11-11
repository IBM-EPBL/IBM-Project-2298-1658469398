<!DOCTYPE html>
<html lang="en">
<head>
  <title>IBM Plasma Donar App</title>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.5.2/css/bootstrap.min.css">
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.5.1/jquery.min.js"></script>
  <script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.16.0/umd/popper.min.js"></script>
  <script src="https://maxcdn.bootstrapcdn.com/bootstrap/4.5.2/js/bootstrap.min.js"></script>
  <link rel="stylesheet" href="{{ url_for('static', filename='style.css') }}">
</head>
<style>
		.big{
		top:70;
		background-color:white;
		margin-top:80px;
		margin-left:550px;
		margin-right:550px;
		height:200px;
		border-radius: 25px;
		border: 3px solid #4a77d4;
		box-shadow: 6px 8px 4px grey;
		text-align:center;
		}
		.row{
		
		height:150px;
		
		}
		.col{
			margin:10px;
			margin-left:50px;	
			margin-right:50px;
			border-radius: 25px;
			border: 1px solid #4a77d4;
			box-shadow: 0px 8px 4px grey;
			text-align:center;
		}
		.ext{
		margin-top:25px;
		line-height:40px;
		}
		.ext1{
		margin-top:40px;
		line-height:50px;
		font-size:25px;
		color:#f95450;
		}
		
</style>
<body>

<div class="container-fluid">
<div class="header">
<div><b>Plasma Donar App</b></div>
<ul>
		<li><a href="/requester">Request</a></li>
		<li><a class="active" href="/logout">Logout</a></li>

	</ul>
</div>
  <br>
  <div class="big">
    <div class="box">
		<div class="ext1"><font size="20px">{{b['1']}}</font><br><b>Donors</b></div>
	</div>
  </div>
  <br>
  <div class="row">
    <div class="col" >
		<div class="ext">{{b['2']}}<br><b>O Positive</b></div>
	</div>
    <div class="col" >
		<div class="ext">{{b['3']}}<br><b>A Positive</b></div>
	</div>
    <div class="col" >
		<div class="ext">{{b['4']}}<br><b>B Positive</b></div>
	</div>
    <div class="col" >
		<div class="ext">{{b['5']}}<br><b>AB Positive</b></div>
	</div>
  </div>
  <br>
  <div class="row">
    <div class="col" >
		<div class="ext">{{b['6']}}<br><b>O Negative</b></div>
	</div>
    <div class="col" >
		<div class="ext">{{b['7']}}<br><b>A Negative</b></div>
	</div>
    <div class="col" >
		<div class="ext">{{b['8']}}<br><b>B Negative</b></div>
	</div>
    <div class="col" >
		<div class="ext">{{b['9']}}<br><b>AB Negative</b></div>
	</div>
  </div>
  <div style="height:200px"></div>
</div>
</body>
</html>