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

@WebServlet("/inserttran")
public class inserttran extends HttpServlet {
	private static final long serialVersionUID = 1L;
     
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		DTO user = new DTO();
			user.setTcd(request.getParameter("tcd"));
			user.setPcd(request.getParameter("pcd"));
			user.setCid(request.getParameter("cid"));
			
			int re= DAO.insertT(user);
			
				if(re<0) {
					request.setAttribute("result", "false");
				}else {
					request.setAttribute("result", "true");
				}
			
			request.setAttribute("target", "trannew");
			RequestDispatcher d= request.getRequestDispatcher("template.jsp");
			d.forward(request, response);
	}

	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
