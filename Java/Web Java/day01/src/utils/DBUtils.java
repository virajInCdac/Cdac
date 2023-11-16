package utils;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class DBUtils {
	private static Connection conn;

	public static Connection openConnection() throws SQLException {
		conn = DriverManager.getConnection(
				"jdbc:mysql://localhost:3306/advjava?useSSL=false&allowPublicKeyRetrieval=true", "root", "root");
		return conn;
	}
}
