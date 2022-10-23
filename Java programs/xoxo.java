package testcode;

import java.util.Scanner;

public class xoxo {
	//Scanner is used to read data from the console
	static Scanner scanner;
	//player1 and player2 variable is used to set the player names
	static String player1, player2;
	//To track the player 1 position user the matrix player1Position
	static boolean player1Position[][] = new boolean[3][3];
	//To track the player 2 position user the matrix player2Position
	static boolean player2Position[][] = new boolean[3][3];
	//To track the all positions status use the matrix allPositionMatrix
	static boolean allPositionMatrix[][]=new boolean[3][3];
	//Board design created by using the matrix allPositionMatrix;
	static String xoxoMatrix[][] = { { ".", "-----", ".", "-----", ".", "-----", "." },
			{ "|", "     ", "|", "     ", "|", "     ", "|" }, { ".", "-----", ".", "-----", ".", "-----", "." },
			{ "|", "     ", "|", "     ", "|", "     ", "|" }, { ".", "-----", ".", "-----", ".", "-----", "." },
			{ "|", "     ", "|", "     ", "|", "     ", "|" }, { ".", "-----", ".", "-----", ".", "-----", "." } };;
	static String gameBoard[][];

	//To keep the player1 position
	public static void setPlayer1Position(int position) {
		switch (position) {
		case 1:
			player1Position[0][0]=true;
			allPositionMatrix[0][0]=true;
			break;
		case 2:
			player1Position[0][1]=true;
			allPositionMatrix[0][1]=true;
			break;
		case 3:
			player1Position[0][2]=true;
			allPositionMatrix[0][2]=true;
			break;
		case 4:
			player1Position[1][0]=true;
			allPositionMatrix[1][0]=true;
			break;
		case 5:
			player1Position[1][1]=true;
			allPositionMatrix[1][1]=true;
			break;
		case 6:
			player1Position[1][2]=true;
			allPositionMatrix[1][2]=true;
			break;
		case 7:
			player1Position[2][0]=true;
			allPositionMatrix[2][0]=true;
			break;
		case 8:
			player1Position[2][1]=true;
			allPositionMatrix[2][1]=true;
			break;
		case 9:
			player1Position[2][2]=true;
			allPositionMatrix[2][2]=true;
			break;
		default:
			break;
		}
	}
	
	//To keep the player2 position
		public static void setPlayer2Position(int position) {
			switch (position) {
			case 1:
				player2Position[0][0]=true;
				allPositionMatrix[0][0]=true;
				break;
			case 2:
				player2Position[0][1]=true;
				allPositionMatrix[0][1]=true;
				break;
			case 3:
				player2Position[0][2]=true;
				allPositionMatrix[0][2]=true;
				break;
			case 4:
				player2Position[1][0]=true;
				allPositionMatrix[1][0]=true;
				break;
			case 5:
				player2Position[1][1]=true;
				allPositionMatrix[1][1]=true;
				break;
			case 6:
				player2Position[1][2]=true;
				allPositionMatrix[1][2]=true;
				break;
			case 7:
				player2Position[2][0]=true;
				allPositionMatrix[2][0]=true;
				break;
			case 8:
				player2Position[2][1]=true;
				allPositionMatrix[2][1]=true;
				break;
			case 9:
				player2Position[2][2]=true;
				allPositionMatrix[2][2]=true;
				break;
			default:
				break;
			}
		}
	//Set value in board
	public static String[][] setValueInTheBoard(String[][] matrix, int position, String value) {
		switch (position) {
		case 1:
			matrix[1][1] = String.format("%5S", value);
			break;
		case 2:
			matrix[1][3] = String.format("%5S", value);
			break;
		case 3:
			matrix[1][5] = String.format("%5S", value);
			break;
		case 4:
			matrix[3][1] = String.format("%5S", value);
			break;
		case 5:
			matrix[3][3] = String.format("%5S", value);
			break;
		case 6:
			matrix[3][5] = String.format("%5S", value);
			break;
		case 7:
			matrix[5][1] = String.format("%5S", value);
			break;
		case 8:
			matrix[5][3] = String.format("%5S", value);
			break;
		case 9:
			matrix[5][5] = String.format("%5S", value);
			break;
		default:
			break;
		}
		return matrix;
	}
//To display board after each movement
	public static void displayBoard(String gameMatrix[][]) {
		for (int i = 0; i < 7; i++) {
			for (int j = 0; j < 7; j++) {
				System.out.print(gameMatrix[i][j]);
			}
			System.out.print('\n');

		}

	}

	public static void main(String[] args) {
		try {
			scanner = new Scanner(System.in);
			initBoard();
			displayBoard(gameBoard);
			runGame();

		} catch (Exception e) {
			System.out.println(e.getMessage());
		}

	}

	//Gaming function
	private static void runGame() {
		boolean gameEnd=false;
		do {
		player1Chance();
		displayBoard(gameBoard);
		boolean gamestatus=isPlayerWin(player1Position);
		if(gamestatus) {
			System.out.println("Winner winner xoxo winner :"+ player1);
			gameEnd=true;
			continue;
		}else if(isAllPositionFilled()) {
			System.out.println("All positions are filled. We are all winner here.");
			gameEnd=true;
			continue;
		}
		
		player2Chance();
		displayBoard(gameBoard);
		gamestatus=isPlayerWin(player2Position);
		if(gamestatus) {
			System.out.println("Winner winner xoxo winner :"+ player2);
			gameEnd=true;
			continue;
		}else if(isAllPositionFilled()) {
			System.out.println("All positions are filled. We are all winner here.");
			gameEnd=true;
			continue;
		}
		
		}while(!gameEnd);
		
	}
	//Check all position in the board is filled.
	private static boolean isAllPositionFilled() {
		for(int i=0;i<3;i++) {
			for(int j=0;j<3;j++) {
				if(!allPositionMatrix[i][j]) {
					return false;
				}
			}
		}
		return true;
	}
   //Check the player status after each move
	private static boolean isPlayerWin(boolean[][] playerPosition) {
		if((playerPosition[0][0] && playerPosition[0][1] &&playerPosition[0][2])
				|| (playerPosition[0][0] && playerPosition[1][0] && playerPosition[2][0])
				|| (playerPosition[0][0] && playerPosition[1][1] &&playerPosition[2][2])
				|| (playerPosition[0][1] && playerPosition[1][1] &&playerPosition[2][1])
				|| (playerPosition[0][2] && playerPosition[1][2] &&playerPosition[2][2])
				|| (playerPosition[1][0] && playerPosition[1][1] &&playerPosition[1][2])
				|| (playerPosition[2][0] && playerPosition[2][1] &&playerPosition[2][2])
				|| (playerPosition[2][0] && playerPosition[1][1] &&playerPosition[0][2])) {
			return true;
		}
		return false;
	}
	// for the movement of player 1
	private static void player1Chance() {
		int pos = 0;
		do {
			System.out.println("Please check your position:" + player1);
			pos = scanner.nextInt();
		} while (!validatePosition(pos));
		gameBoard = setValueInTheBoard(gameBoard, pos, "X");
		setPlayer1Position(pos);
		

	}

	// for the movement of player 2
	private static void player2Chance() {
		int pos = 0;
		do {
			System.out.println("Please check your position:" + player2);
			pos = scanner.nextInt();
		} while (!validatePosition(pos));
		gameBoard = setValueInTheBoard(gameBoard, pos, "O");
		setPlayer1Position(pos);
	}

	//To check the position is empty. We check the positio from the allposition matrx
	private static boolean validatePosition(int pos) {
		switch (pos) {
		case 1:
			if (allPositionMatrix[0][0] ) {
				System.out.println("The position is already filled.");
				return false;
			}
			break;
		case 2:
			if (allPositionMatrix[0][1]) {
				System.out.println("The position is already filled.");
				return false;
			}
			break;
		case 3:
			if (allPositionMatrix[0][2] ) {
				System.out.println("The position is already filled.");
				return false;
			}
			break;
		case 4:
			if (allPositionMatrix[1][0] ) {
				System.out.println("The position is already filled.");
				return false;
			}
			break;
		case 5:
			if (allPositionMatrix[1][1] ) {
				System.out.println("The position is already filled.");
				return false;
			}
			break;
		case 6:
			if (allPositionMatrix[1][2] ) {
				System.out.println("The position is already filled.");
				return false;
			}
			break;
		case 7:
			if (allPositionMatrix[2][0] ) {
				System.out.println("The position is already filled.");
				return false;
			}
			break;
		case 8:
			if (allPositionMatrix[2][1] ) {
				System.out.println("The position is already filled.");
				return false;
			}
			break;
		case 9:
			if (allPositionMatrix[2][2] ) {
				System.out.println("The position is already filled.");
				return false;
			}
			break;
		default:
			return false;
		}
		return true;
	}

	//Initialse the board, added a title and get two players name from the console
	private static void initBoard() {
		System.out.println("Enter the word:");
		System.out.println("||||||||WELCOME TO PUZZLE WORLD||||||||");
		System.out.println("enter the name of player 1:");
		player1 = scanner.nextLine();
		System.out.println("enter the name of player 2:");
		player2 = scanner.nextLine();

		gameBoard = xoxoMatrix;
		gameBoard = setValueInTheBoard(gameBoard, 1, "1");
		gameBoard = setValueInTheBoard(gameBoard, 2, "2");
		gameBoard = setValueInTheBoard(gameBoard, 3, "3");
		gameBoard = setValueInTheBoard(gameBoard, 4, "4");
		gameBoard = setValueInTheBoard(gameBoard, 5, "5");
		gameBoard = setValueInTheBoard(gameBoard, 6, "6");
		gameBoard = setValueInTheBoard(gameBoard, 7, "7");
		gameBoard = setValueInTheBoard(gameBoard, 8, "8");
		gameBoard = setValueInTheBoard(gameBoard, 9, "9");

	}

}
