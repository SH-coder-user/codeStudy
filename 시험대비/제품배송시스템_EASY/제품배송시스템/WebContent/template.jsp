<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Insert title here</title>
<style>
		*{margin:0; padding:0;}
		html,body{width:100%; height:100%;}
		a:link{text-decoration:none;}
		.container{
			display:flex;
			flex-direction:column;
			height:100%;
		}
		header{padding:20px; text-align:center;}
		nav{ width:100%;font-size:0; margin:0 auto;background-color:black;}
		li{display:inline-block;height:50px;}
		li a{
			display:inline-block;width:150px;color:white;
			text-align:center; font-size:15px; line-height:50px;
			}
		section{
			width:100%;height:700px; 
		}
		footer{width:100%;height:50px; background:black; color:white;}
		footer h3{text-align:center; line-height:50px;}
		
	</style>
</head>
<body class=container>
	<header>
		<h1>(과정평가형 정보처리산업기사) 제품 배송시스템 구현 프로그램 ver2019-12</h1>
	</header>
	<nav>
		<ul>
			<li><a href="goinput">회원정보관리</a></li>
			<li><a href="goselectone">제품정보조회</a></li>
			<li><a href="gotran">배송정보등록</a></li>
			<li><a href="gosearchtran">배송조회</a></li>
			<li><a href="gocompletetran">배송정보관리</a></li>
		</ul>
	</nav>
	<section><jsp:include page='${target }.jsp'/></section>
	<footer><h3>HRDKOREA Copyright@2019 Service of korea</h3></footer>
</body>
</html>