package DB;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.util.ArrayList;
import java.util.List;

public class DAO {

	public static int inputC(DTO user) {
		Connection con=null;
		PreparedStatement ps= null;
		String sql= "insert into cst values(?,?,?,?,?)";
		int rs =-1;
			try {
				con=DBCon.getCon();
				ps=con.prepareStatement(sql);
				ps.setString(1, user.getCid());
				ps.setString(2, user.getCpw());
				ps.setString(3, user.getCname());
				ps.setString(4, user.getCemail());
				ps.setString(5, user.getCtel());				
				
				rs=1;
				ps.executeUpdate();
			}catch(Exception e){
				e.printStackTrace();
			}finally {
				DBCon.close(con, ps, null);
			}
		return rs;
	}
	public static DTO selectOne(String pcd) {
		Connection con=null;
		PreparedStatement ps= null;
		String sql= "select * from prd where pcd='"+pcd+"'";
		ResultSet rs =null;
		DTO i= new DTO();
			try {
				con=DBCon.getCon();
				ps=con.prepareStatement(sql);
				rs=ps.executeQuery();
				
				if(rs.next()) {
				i.setPcd(rs.getString(1));
				i.setPname(rs.getString(2));
				i.setPcom(rs.getString(3));
				}
			}catch(Exception e){
				e.printStackTrace();
			}finally {
				DBCon.close(con, ps, rs);
			}
		return i;
	}
	public static List<DTO> viewlist() {
		List<DTO> list = new ArrayList<DTO>();
		Connection con=null;
		PreparedStatement ps= null;
		String sql= "select * from cst";
		ResultSet rs =null;
		
			try {
				con=DBCon.getCon();
				ps=con.prepareStatement(sql);
				rs=ps.executeQuery();
				
				while(rs.next()) {
					DTO u = new DTO();
				u.setCid(rs.getString(1));
				u.setCname(rs.getString(3));
				u.setCemail(rs.getString(4));
				u.setCtel(rs.getString(5));
				list.add(u);
				}
			}catch(Exception e){
				e.printStackTrace();
			}finally {
				DBCon.close(con, ps, rs);
			}
		return list;
	}
	public static int insertT(DTO user) {
		Connection con=null;
		PreparedStatement ps= null;
		String sql= "insert into tran values(?,?,?,default)";
		int rs =-1;
			try {
				con=DBCon.getCon();
				ps=con.prepareStatement(sql);
				ps.setString(1, user.getTcd());
				ps.setString(2, user.getCid());
				ps.setString(3, user.getPcd());		
				
				rs=1;
				ps.executeUpdate();
			}catch(Exception e){
				e.printStackTrace();
			}finally {
				DBCon.close(con, ps, null);
			}
		return rs;
	}
	public static List<DTO> codechk(String c, String f) {
		List<DTO> list = new ArrayList<DTO>();
		Connection con=null;
		PreparedStatement ps= null;
		String sql= "select cname,tcd,pname,tdate from cst natural join tran natural join"
				+ " prd where "+c+"='"+f+"'";
		String time= "";
		ResultSet rs =null;
		
			try {
				con=DBCon.getCon();
				ps=con.prepareStatement(sql);
				rs=ps.executeQuery();
				
				while(rs.next()) {
					DTO u = new DTO();
				u.setTcd(rs.getString(1));
				u.setCname(rs.getString(2));
				u.setPname(rs.getString(3));
				time=rs.getString(4);
				if(time!=null) {
					u.setTdate(time+"배송완료");
				}else {
					u.setTdate("배송준비중.");
				}
					
				list.add(u);
				}
			}catch(Exception e){
				e.printStackTrace();
			}finally {
				DBCon.close(con, ps, rs);
			}
		return list;
	}
	public static int completeT(String tcd) {
		Connection con=null;
		PreparedStatement ps= null;
		String sql= "update tran set tdate=sysdate where tcd='"+tcd+"'";
		int rs =-1;
			try {
				con=DBCon.getCon();
				ps=con.prepareStatement(sql);	
				rs=1;
				ps.executeUpdate();
			}catch(Exception e){
				e.printStackTrace();
			}finally {
				DBCon.close(con, ps, null);
			}
		return rs;
	}
	public static int chktcd(String tcd) {
		int r= -1;
		Connection con=null;
		PreparedStatement ps= null;
		String sql= "select * from tran where tcd='"+tcd+"'";
		ResultSet rs =null;
		DTO i= new DTO();
			try {
				con=DBCon.getCon();
				ps=con.prepareStatement(sql);
				rs=ps.executeQuery();
				if(rs.next()) {
				i.setTcd(rs.getString(1));
				r= 1;
				}
			}catch(Exception e){
				e.printStackTrace();
			}finally {
				DBCon.close(con, ps, rs);
			}
		return r;
	}
	
	}
	
