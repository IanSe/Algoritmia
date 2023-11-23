import pandas as pd

def order_scores(scores: pd.DataFrame) -> pd.DataFrame:
    scores.drop(columns=['id'], inplace=True)
    scores['rank'] = ''
    if(scores.empty): return scores
    scores.sort_values(by='score', inplace=True, ascending=False)
    scores = scores.reset_index(drop=True)
    scores.loc[0, 'rank'] = t = 1
    for i in range(0, len(scores)-1):
        last = scores.loc[i, 'score']
        if(scores.loc[i+1, 'score'] != last):
            last = scores.loc[i+1, 'score']
            t+=1 
        scores.loc[i+1, 'rank'] = t
    return scores

sct = pd.DataFrame({'id' : [1, 2, 3, 4, 5, 6], 
                    'score' : [3.50, 3.65, 4.00, 3.85, 4.00, 3.65]})
print(order_scores(sct))