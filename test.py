import pandas as pd
from sklearn.tree import DecisionTreeClassifier
music_data = pd.read_csv('music.csv')
music_data
X= music_data.drop( columns=['genre'] )
Y= music_data['genre']
model = DecisionTreeClassifier()
model.fit(X, Y)
prediction = model.predict([[21, 1], [22, 0] ])
print(prediction)