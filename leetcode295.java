class MedianFinder {
    private PriorityQueue<Integer> max; 
    private PriorityQueue<Integer> min; 
    private final Object lock = new Object(); 

    public MedianFinder() {
        max = new PriorityQueue<>(Collections.reverseOrder());
        min = new PriorityQueue<>();
    }
    
    public void addNum(int num) {
        synchronized (lock) {
            max.add(num);
            min.add(max.poll());
            if (min.size() > max.size()) {
                max.add(min.poll());
            }
        }
    }
    
    public double findMedian() {
        synchronized (lock) {
            if (max.size() > min.size()) {
                return max.peek();
            }
            return (max.peek() + min.peek()) / 2.0;
        }
    }
}
