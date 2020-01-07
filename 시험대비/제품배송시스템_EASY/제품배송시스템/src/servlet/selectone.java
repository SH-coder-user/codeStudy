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

@WebServlet("/selectone")
public class selectone extends HttpServlet {
	
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		
			String pcd = request.getParameter("pcd");
			DTO user = 	DAO.selectOne(pcd);
			System.out.print(user.getPcd());
			if(user.getPcd()!=null) {
				request.setAttribute("user", user);
				request.setAttribute("target", "viewoneR");
			}else {
				request.setAttribute("result", "failed");
				request.setAttribute("target", "viewone");
			}
			RequestDispatcher d = request.getRequestDispatcher("template.jsp");
			d.forward(request, response);
	}

	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
