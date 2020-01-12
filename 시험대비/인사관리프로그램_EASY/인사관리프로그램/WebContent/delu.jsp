<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Insert title here</title>
</head>
<body>
	<h1>인사관리 퇴사처리 화면</h1>
	<hr>
	<form action="delu">
		<table>
			<tr><td colspan=2>인사관리 사원정보 변경</td></tr>
			<tr>
				<td>성명</td>
				<td><input type="text" name=name></td>
			</tr>
			<tr>
				<td>사원번호</td>
				<td><input type="text" name=id></td>
			</tr>
			<tr>
				<td colspan= 2 align=center>
						<input type=submit value="삭제">
						<input type=reset value="취소" onclick="index.jsp">
				</td>
			</tr>
		</table>
	</form>
</body>
</html>