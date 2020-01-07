<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Insert title here</title>
<%String r= (String)request.getAttribute("result"); 
		
	
	if(request.getAttribute("result")!=null){
		%>
			<script type="text/javascript">
				alert("제품코드를 다시확인해주세요.");
				history.go(-1);
				
			</script>
		<%}else{%>
			<script type="text/javascript">
				location.href("goviewone");
			</script>
		<%}%>
</head>
<body>
	<form action = selectone>
		<table>
			<tr>
				<td><h2>제품정보조회</h2></td>
			</tr>
			<tr>
				<td>제품코드</td>
				<td><input type=text name=pcd></td>
			</tr>
			<tr>
				
				<td><input type=submit value=확인></td>
			</tr>
		</table>
	</form>
</body>
</html>