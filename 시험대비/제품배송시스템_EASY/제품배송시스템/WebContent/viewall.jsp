<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
    <%@page import='java.util.*,DB.DTO' %>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Insert title here</title>
</head>
<body>

	<table>
		<tr>
			<td colspan = 5 align = center>
				<h3>회원목록 조회</h3>
			</td>
		</tr>
		<tr>
			<td>회원아이디</td>
			<td>회원이름</td>
			<td>이메일</td>
			<td>연락처</td>
		</tr>
		<%List<DTO> list = (List)request.getAttribute("list");
			for(int i = 0; i<list.size();i++){
				DTO user =list.get(i);
				out.print("<tr><td>"+user.getCid()+"</td>");
				out.print("<td>"+user.getCname()+"</td>");
				out.print("<td>"+user.getCemail()+"</td>");
				out.print("<td>"+user.getCtel()+"</td></tr>");
		%>
		
		<%} %>
	</table>
</body>
</html>