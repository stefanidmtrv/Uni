
/**
 *<P>-Queue.java</p>
 *<P> @version 2.0</p>
 *<P> last modification 04/03/2020</p>
 *<P> @author Stefani</p>
 *<P>- purpose Implementation of a queue </p>
 *<P>- Originally written by Bette Bultena but heavily modified for the purposes of CS-115 by Daniel Archambault and Liam O'Reilly</p>
 */

import java.util.NoSuchElementException;

public class Queue<T> {

	public QueueElement<T> head;
	public QueueElement<T> tail;

	/**
	 *<P> Constructs an empty Queue.</P>
	 *<P> no side effects</P>
	 *<P> not referentially transparent</P>
	 */
	public Queue() {
		this.head = null;
		this.tail = null;
	}

	/**
	 * <P>@Return true if the queue is empty</P>
	 * <P>has side effects</P>
	 * <P>not referentially transparent</P>
	 * 
	 */
	public boolean isEmpty() {

		if ((head == null) && (tail == null)) {
			return true;
		} else {
			return false;
		}
	}

	/**
	 * <P>@Return head of the queue</P> 
	 * <P>no side effects</P>
	 * <P>not referentially transparent<P>
	 */
	public T peek() throws NoSuchElementException {
		if (isEmpty()) {
			throw new NoSuchElementException();
		} else {
			return head.getElement();
		}
	}

	/**
	 * <P>Removes the front element of the queue</P>
	 * <P>has side effects</P>
	 * <P>not referentially transparent</P>
	 */
	public void dequeue() throws NoSuchElementException {
		if (isEmpty()) {
			throw new NoSuchElementException();
		} else {
			this.head = this.head.getNext();
		}
		if (this.head == null) {
			this.tail = null;
		}

	}

	/**
	 * <P>Puts an element on the back of the queue.</P>
	 * <P>@param element</P>
	 * <P>has side effects</P>
	 * <P>not referentially transparent</P>
	 */
	public void enqueue(T element) {
		QueueElement<T> queue = new QueueElement<T>(element, null);
		if (isEmpty()) {
			this.head = this.tail = queue;
		}
		this.tail.setNext(queue);
		this.tail = queue;
	}

	/**
	 * <P>Method to print the full contents of the queue in order from head to
	 * tail.</P>
	 * <P>no side effects</P>
	 * <P>not referentially transparent</P>
	 */
	public void print() {
		if (isEmpty()) {
			System.out.println("The queue is empty.");
		} else if (this.tail.getNext() == null) {
			System.out.println("The queue is empty");
		} else {
			QueueElement<T> curItem = this.head;
			while (!isEmpty()) {
				System.out.println(curItem.getNext());
			}
		}

	}
}
