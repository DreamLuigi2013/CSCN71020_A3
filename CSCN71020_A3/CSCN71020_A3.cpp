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
		TEST_METHOD(BothInputsRock)
		{
			char player1[10] = "Paper";
			char player2[10] = "Paper";
			char result[10] = get_result(player1, player2);
			Assert::AreEqual(result, "Draw");
		}
	};
}
