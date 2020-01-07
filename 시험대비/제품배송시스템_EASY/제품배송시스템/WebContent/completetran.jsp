<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>배송정보관리</title>
<% String d = (String)request.getAttribute("result");
	if(d!=null){
		if(d.equals("true")){
%>
		<script>
		alert("배송완료처리 성공.");
		location.href='gomain';
		</script>
<%		}else if(d.equals("false")){
%>
		<script>
		alert("배송완료처리 실패.");
		location.href='gomain';
		</script>
<%		}
	}
	else{
%>
		<script type="text/javascript">
			location.href("gocompletetran");
		</script>
<%
	}
%>
</head>
<body>
	<form action="completet">
		<table>
			<tr><td colspan=2 align=center><h3>배송완료처리</h3></td></tr>
			<tr>
				<td>배송코드</td>
				<td><input type="text" name=tcd></td>
			</tr>
			<tr><td><input type=submit value="완료처리"></td></tr>
		</table>
	</form>
</body>
</html>