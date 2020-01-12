<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Insert title here</title>
	<script>
		function chk(){
			if (!fm.dept[0].checked && !fm.dept[1].checked ) {
				alert("조회하시려는 옵션을 선택해 주십시요.")
				return false;
			}			
			return true;
		}

	</script>
</head>
<body>
	<form action = "insachk" name=fm method=post onsubmit="return chk()">
		<H1>
			인사관리 조회화면
		</H1>
				<table>
					<tr>
						<td>
							<input type=radio name=chk value=id>사원번호로 조회
						</td>
						<td>
							<input type=text name=id>
						</td>
					</tr>
					<tr>
						<td>
							<input type=radio name=chk value=dept>부서명으로 조회
						</td>
						<td>
							<select name=dept>
								<option>인사부</option>
								<option>경리부</option>
							</select>
						</td>
					</tr>
					<tr>
						<td colspan= 2 align=center>
							<input type=submit value="조회">
							<input type=reset value="취소" onclick="index.jsp">
						</td>
					</tr>
				</table>
	</form>
</body>
</html>