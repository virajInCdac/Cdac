package dao;
import static utils.DBUtils.*;

import java.sql.Connection;
import java.sql.SQLException;


public class DaoImplement {
	private Connection connection;
	
	public Connection userDefDao() throws SQLException {
		connection = openConnection();
		return null;
		
	}
}
