<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="java.util.*, DB.DTO"%>
    
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Insert title here</title>
</head>
<body>

	<h1>직원 정보  조회 결과</h1>
	<hr>
<% List<DTO> list = (ArrayList)request.getAttribute("result");  %>
	<table border=1>
			<tr>
				<td>성명</td>
				<td>사번</td>
				<td>직급</td>
				<td>직책</td>
				<td>연락처</td>
				<td>소속부서</td>
			</tr>
			
<%		
		
		System.out.print(list);
		for(int i = 0; i<list.size();i++){
				DTO user= list.get(i);
%>
		<tr>
				<td>
					<%=user.getName() %>
				</td>
				<td>
					<%=user.getId() %>
				</td>
				<td>
					<%=user.getDept() %>
				</td>
				<td>
					<%=user.getPosition() %>
				</td>
				<td>
					<%=user.getDuty() %>
				</td>
				<td>
					<%=user.getPhone() %>
				</td>
			</tr>
<%
				} %>
		</table>
		<input type= button onclick="location.href='gomain'" value= 확인>
	

	
</body>
</html>