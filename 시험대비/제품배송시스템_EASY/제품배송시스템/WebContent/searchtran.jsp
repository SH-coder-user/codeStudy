<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>배송조회</title>
</head>
<body>
	<form action="tranfind">
		<table><Tr><td>
		<select name=chk>	
						<option>조회조건 선택</option>
						<option>배송코드</option>
						<option>회원ID</option>
						<option>배송일자</option></select></td></Tr>
				
				<tr><td><input type=text name=find></td></tr>
				
				<tr>
					<td>
						<input type= submit value='조회'>
						<input type=button value='취소' onclick="location.href='gomain">
					</td>
				</tr>
		</table>
	</form>
</body>
</html>