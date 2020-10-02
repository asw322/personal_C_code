public class Board {
	private static Animal[][] board;
	public Board() {
		System.out.println("Creating world");
		board = new Animal[10][10];
		for(int i = 0; i < board.length; i++) {
			for(int j = 0; j < board[i].length; j++) {
				board[i][j] = null;
			}
		}
	}
	public Board(int x, int y) {
		System.out.println("Creating world");
		board = new Animal[y][x];
		for(int i = 0; i < board.length; i++) {
			for(int j = 0; j < board[i].length; j++) {
				board[i][j] = null;
			}
		}
	}
	public static void add(Animal a) {
		if(board[a.getY()][a.getX()] == null) {
			board[a.getY()][a.getX()] = a;
			System.out.println("Animal " + a.getName() + "added to board");
		}
	}
	public static void add(Animal a, int y, int x) {
		if(board[y][x] == null) {
			board[y][x] = a;
			System.out.println("Animal " + a.getName() + " added to board");
		}
	}
	public void printBoard() {
		//prints board.. 
		for(int i = 0; i < board.length; i++) {
			for(int j = 0; j < board[i].length; j++) {
				System.out.print(board[i][j] + " ");
			}
			System.out.println();	
		}
	}
}