package functions;

import static java.time.LocalDate.*;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import com.acts.core.Course;
import com.acts.core.Student;
import com.shop.core.Product;


public class Test1 {
	public static void main(String[] args) {

	
		 List<Student> populateList() {
			
			List<Student> list = new ArrayList<Student>();
			list.add(new Student( "d100",  "firstName1",  "lastName",  8, Course.DAC , now()));
			list.add(new Student( "d101",  "firstName2",  "lastName",  10, Course.DAC , now()));
			list.add(new Student( "d102",  "firstName3",  "lastName",  9 ,Course.DAC , now()));
			list.add(new Student( "d103",  "firstName4",  "lastName",  7, Course.DAC , now()));
			list.add(new Student( "d104",  "firstName5",  "lastName",  8, Course.DAC , now()));
			return list;
			
			}
		
		
		

	Map<Integer, Student> populateMap(List<Student> studentList) {
		Map<Integer, Student> map = new HashMap<>();
		for (Student p : studentList)
			System.out.println("Put rets " + map.getOrDefault(p.getFirstName(), p));
		System.out.println("size of the map " + map.size());
		return map;

	

	}
	}
	

