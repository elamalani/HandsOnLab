#import "ViewController.h"

@interface ViewController ()
@property (weak, nonatomic) IBOutlet UILabel *clickCounter;
@property int clickCount;
@end

@implementation ViewController

- (void)viewDidLoad {
  [super viewDidLoad];
  // Do any additional setup after loading the view, typically from a nib.
}

- (IBAction)clickedButton:(id)sender {
  self.clickCounter.text = [NSString stringWithFormat: @"Click Count: %i", ++self.clickCount];
  self.clickCounter.font = [UIFont fontWithName:self.clickCounter.font.fontName
                                           size:self.clickCounter.font.pointSize+1];
}


- (void)didReceiveMemoryWarning {
  [super didReceiveMemoryWarning];
  // Dispose of any resources that can be recreated.
}


@end
