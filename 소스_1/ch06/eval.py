# coding: utf-8
import sys
sys.path.append('..')
from rnnlm import Rnnlm
from better_rnnlm import BetterRnnlm
from dataset import ptb
from common.util import eval_perplexity


if __name__ == '__main__':
    model = Rnnlm()
    #model = BetterRnnlm()

    # 학습된 매개변수 읽기
    model.load_params()

    corpus, _, _ = ptb.load_data('test')

    model.reset_state()
    ppl_test = eval_perplexity(model, corpus)
    print('test perplexity: ', ppl_test)
