<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Insert title here</title>
</head>
<body>
	<h1>인사관리 사원정보 변경화면</h1>
	<h3>사원번호와 일치하는 DB에 해당하는 사원이 변경됩니다.</h3><hr>
	<form action="updateu">
		<table>
			<tr>
				<td>성명</td>
				<td><input type=text name=name></td>
			</tr>
			<tr>
				<td>사원번호 : </td>
				<td><input type=text name=id placeholder='97'></td>
			</tr>
			<tr>
				<td>소속부서 : </td>
				<td>
					<select name=dept>
							<option>인사부</option>
							<option>경리부</option>
					</select>
				</td>
			</tr>
			<tr>
				<td>직급 : </td>
						<td>
							<select name=position>
								<option>1급</option>
								<option>2급</option>
							</select>
						</td>
			</tr>
			<tr>
				<td>직책 : </td>
				<td><input type=text name=duty></td>
			</tr>
			<tr>
				<td>연락처 : </td>
				<td><input type=text name=phone></td>
			</tr>
			<tr>
				<td colspan="2" align=center>
					<input type=submit value="등록">
					<input type= reset onclick="location.href='gomain'" value="취소">
				</td>
			</tr>
		</table>
	</form>
</body>
</html>