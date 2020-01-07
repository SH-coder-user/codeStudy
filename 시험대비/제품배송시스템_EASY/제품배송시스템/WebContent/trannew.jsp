<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
   <%@page import ='java.util.*,DB.DTO' %>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Insert title here</title>
	<%String r= (String)request.getAttribute("result"); 
		
	
	if(request.getAttribute("result")!=null){
		if(r.equals("false")){%>
			<script type="text/javascript">
				alert("배송정보 등록실패.");
				history.go(-1);
				
			</script>
		<%}else if(r.equals("true")){%>
				<script type="text/javascript">
				alert("배송정보 등록성공.");
				location.href("gomain");
				</script>
		
		<%}
		}else{%>
			<script type="text/javascript">
				location.href("gotran");
			</script>
		<%}%>
		
</head>
<body>
	<form action="inserttran">
	<table>
		<tr><td></td></tr>
		<tr>
			<td>배송코드</td>
			<td><input type=text name=tcd></td>
		</tr>
		<tr>
			<td>회원ID</td>
			<td><input type=text name=cid></td>
		</tr>
		<tr>
			<td>제품코드</td>
			<td><input type=text name=pcd></td>
		</tr>
		<tr>
			<td><input type=submit value='등록'></td>
		</tr>
	</table>
	</form>
</body>
</html>