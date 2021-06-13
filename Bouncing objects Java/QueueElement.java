
/**
 * You must use this class when constructing your Queue.  This class represents a link of the
 * linked list.  Your queue will be composed of these links.
 * @author archam
 *
 */
public class QueueElement<T> {
    private T e; //the element contained in this linked list
    private QueueElement<T> next; //the next element of the linked list

    public QueueElement (T e, QueueElement<T> n) {
        this.e = e;
        this.next = n;
    }

    /**
     * Method to set the element
     */
    public void setElement (T e) {
        this.e = e;
    }

    /**
     * Method to set the next linked list element
     */
    public void setNext (QueueElement<T> e) {
        this.next = e;
    }

    /**
     * Method to get the element.
     */
    public T getElement () {
        return this.e;
    }

    /**
     * Method to get the next linked list element
     */
    public QueueElement<T> getNext () {
        return this.next;
    }
}
