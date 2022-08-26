# 判断四个角是否是直角
def isOrthogonal(p1, p2, p3):
  return (p2[0] - p1[0]) * (p2[0] - p3[0]) + (p2[1] - p1[1]) * (p2[1] - p3[1]) == 0
def _isRectangle(p1, p2, p3, p4):
  return self.isOrthogonal(p1, p2, p3) and self.isOrthogonal(p2, p3, p4) and self.isOrthogonal(p3, p4, p1)
def isRectangle(p1, p2, p3, p4):
  return self._isRectangle(p1, p2, p3, p4) or self._isRectangle(p2, p3, p1, p4) or self._isRectangle(p1, p3, p2, p4)
#判断中心到四个点距离是否相等
def dis(p1, p2):
  return (p1[0] - p2[0])**2 + (p1[1] - p2[1])**2
def isRectangle(p1, p2, p3, p4):
  x_c = (p1[0] + p2[0] + p3[0] + p4[0])/4
  y_c = (p1[1] + p2[1] + p3[1] + p4[1])/4
  d1 = dis(p1, (x_c,y_c))
  d2 = dis(p2, (x_c,y_c))
  d3 = dis(p3, (x_c,y_c))
  d4 = dis(p4, (x_c,y_c))
  return d1 == d2 and d1 == d3 and d1 == d4
