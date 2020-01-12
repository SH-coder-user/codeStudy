package servlet;

import java.io.IOException;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import DB.DAO;
import DB.DTO;
@WebServlet("/updateu")
public class updateu extends HttpServlet {
	
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
			DTO user =new DTO();
				user.setId(request.getParameter("id"));
				user.setName(request.getParameter("name"));//이름이 업데이트기준
				user.setDept(request.getParameter("dept"));
				String pos= request.getParameter("position");
				System.out.print(request.getParameter("dept"));
				if(pos.equals("1급")) {
					user.setPosition("1");
				}else if(pos.equals("2급")){
					user.setPosition("2");
				}
				user.setDuty(request.getParameter("duty"));
				user.setPhone(request.getParameter("phone"));
					
				int	rs =DAO.updateu(user);//업데이트
				
				if(rs<0) {
					request.setAttribute("result", "failed");
					request.setAttribute("target", "results");
				}else {
					request.setAttribute("result", "good");
					request.setAttribute("target", "results");
				}
				RequestDispatcher d = request.getRequestDispatcher("template.jsp");
				d.forward(request, response);
			
			}



	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
