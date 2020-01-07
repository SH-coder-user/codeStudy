<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Insert title here</title>
</head>
<body>
	<table>
		<tr>
			<td colspan=2 align="center">
				<h2>제품정보조회결과</h2>
			</td>
		</tr>
		<tr>
			<td>제품코드</td>
			<td><input type= text value= '${user.getPcd() }'></td>
		</tr>
		<tr>
			<td>제품명</td>
			<td><input type= text value= '${user.getPname() }'></td>
		</tr>
		<tr>
			<td>제조사</td>
			<td><input type= text value= '${user.getPcom() }'></td>
		</tr>
		<tr>
			
			<td><input type= button value= '확인' onclick='location.href="gomain"'></td>
		</tr>
	</table>
</body>
</html>