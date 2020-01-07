package servlet;

import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import DB.DAO;
import DB.DTO;

@WebServlet("/tranfind")
public class tranfind extends HttpServlet {

	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
			String chk = request.getParameter("chk");
			String find = request.getParameter("find");
			List<DTO> user = new ArrayList<DTO>();
			if(chk.equals("배송코드")) {
				chk="tcd";
				user = DAO.codechk(chk,find);
			}else if(chk.equals("회원ID")) {
				chk="cid";
				user = DAO.codechk(chk,find);
			}else if(chk.equals("배송일자")) {
				chk="tdate";
				user = DAO.codechk(chk,find);
			}
			request.setAttribute("result", user);
			request.setAttribute("target", "viewtran");
			RequestDispatcher d= request.getRequestDispatcher("template.jsp");
			d.forward(request, response);
	
	}


	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
