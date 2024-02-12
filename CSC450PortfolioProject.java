
public class CSC450PortfolioProject {
	private static int counterUp = 0;
	private static int counterDown = 20;

	public static void main(String[] args) throws InterruptedException {
		Thread countingUp = new Thread(new CountUp());
		Thread countingDown = new Thread(new CountDown());

		countingUp.start();
		countingUp.join();
		countingDown.start();
		countingDown.join();
		
	}

	public static class CountUp implements Runnable {
		@Override
		public void run() {
			while (counterUp < 21) {
				System.out.println("Counting Up: " + counterUp);
				counterUp++;
				catch (InterruptedException e) {
					e.printStackTrace();

				}
			}
		}
	}
	

	public static class CountDown implements Runnable {
		@Override
		public void run() {
			while (counterDown > 0) {
				System.out.println("Counting Down: " + counterDown);
				counterDown--;
				 catch (InterruptedException e) {
					e.printStackTrace();
				}
			}
		}
	}

}
