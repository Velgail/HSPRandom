# HSPRandom
HSPの乱数機能を大幅に強化する拡張DLL

## 命令・関数一覧と機能
1. rdrnd()  
完全な整数乱数を取得する。値の範囲は-2147483648以上2147483647以下(int)
1. imrdrnd(int max)  
完全な整数乱数を取得する。値の範囲は0以上max以下(int)
1. irrdrnd(int min,int max)  
完全な整数乱数を取得する。値の範囲はmin以上max以下(int)
1. dmrdrnd(double max)  
完全な実数乱数を取得する。値の範囲は0以上max**未満**(double)
1. drrdrnd(double min,double max)  
完全な実数乱数を取得する。値の範囲はmin以上max**未満**(double)
1. hsprndinit  
メルセンヌ・ツイスタ乱数を完全にランダムに初期化する
1. ihsprndinit(int seed)  
メルセンヌ・ツイスタ乱数をrandomizeのように初期化する
1. iahsprndinit(int() seed)  
メルセンヌ・ツイスタ乱数を整数配列で初期化する
1. mtrnd()  
メルセンヌ・ツイスタの整数乱数を取得する。値の範囲は-2147483648以上2147483647以下(int)
1. immtrnd(int max)  
メルセンヌ・ツイスタの整数乱数を取得する。値の範囲は0以上max以下(int)
1. irmtrnd(int min,int max)  
メルセンヌ・ツイスタの整数乱数を取得する。値の範囲はmin以上max以下(int)
1. dmmtrnd(double max)  
メルセンヌ・ツイスタの実数乱数を取得する。値の範囲は0以上max**未満**(double)
1. drmtrnd(double min,double max)  
メルセンヌ・ツイスタの実数乱数を取得する。値の範囲はmin以上max**未満**(double)

メルセンヌ・ツイスタ乱数系を利用した場合に、初期化を行っていない場合は自動的にhsprndinitが実行されて初期化されます。
