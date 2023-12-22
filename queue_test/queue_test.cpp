#include "queue.h"

#include "gtest.h"


TEST(TQueue, can_get_Value_element)
{
	TQueue<int> queue(2);
	queue.Push(7);
	queue.Push(1);
	EXPECT_EQ(queue.Top(), 7);
}
TEST(TQueue, correct_ostream)
{
	TQueue<int> queue(3);
	queue.Push(1);
	queue.Push(2);
	queue.Push(3);
	ASSERT_EQ(queue.Pop(), 1);
	ASSERT_EQ(queue.Pop(), 2);
	ASSERT_EQ(queue.Pop(), 3);
}

TEST(TQueue, check_full_queue_true)
{
	TQueue<int> queue(1);
	queue.Push(4);
	EXPECT_EQ(1, queue.isFull());
}
TEST(TQueue, check_empty_queue_true) {
	TQueue<int> queue(81);
	EXPECT_EQ(1, queue.isEmpty());
}
TEST(TQueue, can_push_element) {
	TQueue<int> queue(1);

	ASSERT_NO_THROW(queue.Push(7));
}

TEST(TQueue, can_create_empty_queue_with_positive_length)
{
	ASSERT_NO_THROW(TQueue<int> queue);
}

TEST(TQueue, cannot_create_queue_with_negative_size) {
	ASSERT_ANY_THROW(TQueue<int> queue(-7));
}

TEST(TQueue, check_get_and_put_in_queue)
{
	TQueue <int> queue(6);
	for (int i = 1; i < 7; i++)
		queue.Push(i);

	queue.Pop();
	queue.Pop();
	queue.Pop();
	queue.Pop();

	queue.Push(7);
	queue.Push(14);
	queue.Pop();
	ASSERT_EQ(6, queue.Pop());
}

TEST(TQueue, can_create_copied_queue) {
	TQueue<int> queue(4);
	ASSERT_NO_THROW(TQueue<int> B(queue));
}

TEST(TQueue, can_pop_element) {
	TQueue<int> queue(4);
	queue.Push(2);

	EXPECT_EQ(2, queue.Pop());
}

