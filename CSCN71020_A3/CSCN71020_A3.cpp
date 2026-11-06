#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CSCN71020A3
{
	TEST_CLASS(CSCN71020A3)
	{
	public:
		
		TEST_METHOD(BothInputsRock)
		{
			char player1[10] = "Rock";
			char player2[10] = "Rock";
			char result[10] = get_result(player1, player2);
			Assert::AreEqual(result, "Draw");
		}
		TEST_METHOD(BothInputsScissor)
		{
			char player1[10] = "Scissor";
			char player2[10] = "Scissor";
			char result[10] = get_result(player1, player2);
			Assert::AreEqual(result, "Draw");
		}
		TEST_METHOD(BothInputsPaper)
		{
			char player1[10] = "Paper";
			char player2[10] = "Paper";
			char result[10] = get_result(player1, player2);
			Assert::AreEqual(result, "Draw");
		}
		TEST_METHOD(OnePaper_OneRock)
		{
			char player1[10] = "Paper";
			char player2[10] = "Rock";
			char result[10] = get_result(player1, player2);
			Assert::AreEqual(result, "Player1");
		}
		TEST_METHOD(OneRock_OnePaper)
		{
			char player1[10] = "Rock";
			char player2[10] = "Paper";
			char result[10] = get_result(player1, player2);
			Assert::AreEqual(result, "Player2");
		}
		TEST_METHOD(OneRock_OneScissor)
		{
			char player1[10] = "Rock";
			char player2[10] = "Scissor";
			char result[10] = get_result(player1, player2);
			Assert::AreEqual(result, "Player1");
		}
		TEST_METHOD(OneScissor_OneRock)
		{
			char player1[10] = "Scissor";
			char player2[10] = "Rock";
			char result[10] = get_result(player1, player2);
			Assert::AreEqual(result, "Player2");
		}
		TEST_METHOD(OneScissor_OnePaper)
		{
			char player1[10] = "Scissor";
			char player2[10] = "Paper";
			char result[10] = get_result(player1, player2);
			Assert::AreEqual(result, "Player1");
		}
		TEST_METHOD(OnePaper_OneScissor)
		{
			char player1[10] = "Paper";
			char player2[10] = "Scissor";
			char result[10] = get_result(player1, player2);
			Assert::AreEqual(result, "Player2");
		}
		TEST_METHOD(InvalidPlayer1_LowerCase)
		{
			char player1[10] = "paper";
			char player2[10] = "Scissor";
			char result[10] = get_result(player1, player2);
			Assert::AreEqual(result, "Invalid");
		}
		TEST_METHOD(InvalidPlayer2_LowerCase)
		{
			char player1[10] = "Paper";
			char player2[10] = "Scissor";
			char result[10] = get_result(player1, player2);
			Assert::AreEqual(result, "Invalid");
		}
		TEST_METHOD(InvalidPlayer1_Number)
		{
			char player1[10] = "2";
			char player2[10] = "Scissor";
			char result[10] = get_result(player1, player2);
			Assert::AreEqual(result, "Invalid");
		}
		TEST_METHOD(InvalidPlayer2_Number)
		{
			char player1[10] = "Paper";
			char player2[10] = "2";
			char result[10] = get_result(player1, player2);
			Assert::AreEqual(result, "Invalid");
		}
		TEST_METHOD(InvalidPlayer1_SpecialCharacter)
		{
			char player1[10] = "Paper";
			char player2[10] = "$";
			char result[10] = get_result(player1, player2);
			Assert::AreEqual(result, "Invalid");
		}
		TEST_METHOD(InvalidPlayer2_SpecialCharacter)
		{
			char player1[10] = "Paper";
			char player2[10] = "$";
			char result[10] = get_result(player1, player2);
			Assert::AreEqual(result, "Invalid");
		}
		
	};
}
