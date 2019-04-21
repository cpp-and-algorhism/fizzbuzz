#include <boost/timer/timer.hpp>
#include <iostream>
///
/// 1から順番に数字をincrement
/// 3で割り切れるときは「Fizz」を発言
/// 5で割り切れるときは「Buzz」を発言
/// 両方で割り切れるときは「FizzBuzz」を発言
struct fizz_buzz
{
    //コンストラクタ
    fizz_buzz() : count_(0) {
        // __PRETTY_FUNCTION__ は事前定義マクロ
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }

    // fizzbuzz言わす
    void say() {
        ++count_;

        if ((count_ % 3 == 0) && (count_ % 5 == 0)) {
            std::cout << "num=" << count_ << " fizzbuzz" << std::endl;
        }
        else if (count_ % 3 == 0) {
            std::cout << "num=" << count_ << " fizz" << std::endl;
        }
        else if (count_ % 5 == 0) {
            std::cout << "num=" << count_ << " buzz" << std::endl;
        }
        else {
            std::cout << "num=" << count_ << std::endl;
        }
    }

    //デストラクタ
    ~fizz_buzz() { std::cout << __PRETTY_FUNCTION__ << std::endl; }

private:
    uint32_t count_;
};

int main() {
    boost::timer::cpu_timer timer;  // 時間計測を開始
    timer.start();

    fizz_buzz obj;
    uint32_t max(1000000);

    for (int i = 0; i != max; ++i) {
        obj.say();
    }

    timer.stop();
    std::cout << "===============================" << std::endl;
    std::cout << " -- result -- " << timer.format(9, "%w s") << std::endl;
    std::cout << "===============================" << std::endl;
}